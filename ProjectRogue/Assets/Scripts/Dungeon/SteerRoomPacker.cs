using System.Collections.Generic;
using UnityEngine;

public class Pack
{
    public static int runningId = 0;
    public Rect rect { get; set; }
    public Color color { get; set; }
    public Pack connectedPack { get; set; }
    public float connectedDistance { get; set; }
    public int regionId { get; set; }
    public bool canDrawDebug { get; set; }
    public int uniqueId { get; set; }
    public bool isConnectedToMainRoom { get; set; }

    public Pack(Rect rect, Color color)
    {
        this.regionId = -1;
        this.rect = rect;
        this.color = color;
        this.isConnectedToMainRoom = false;
        this.connectedPack = null;
        this.connectedDistance = 0.0f;
        this.canDrawDebug = false;
        this.uniqueId = runningId++;
    }

    public override string ToString()
    {
        return uniqueId.ToString();
    }
}

public class RegionConnector
{
    public Pack packA { get; set; }
    public Pack packB { get; set; }
    public RegionConnector(Pack packA, Pack packB)
    {
        this.packA = packA;
        this.packB = packB;
    }
    public bool HasRegion(int id)
    {
        return (packA.regionId == id || packB.regionId == id);
    }
}

public class SteerRoomPacker
{
    private List<Pack> _packs;
    Dictionary<int, List<Pack>> _regions;

    List<int> _connectedRegions;
    List<int> _noConnectionRegions;
    List<RegionConnector> _connectionData;

    public List<Pack> packs
    {
        get { return _packs; }
    }

    public SteerRoomPacker(int numPacks, int minPackWidth, int minPackHeight, int maxPackWidth, int maxPackHeight)
    {
        _connectedRegions = new List<int>();
        _noConnectionRegions = new List<int>();
        _regions = new Dictionary<int, List<Pack>>();
        _connectionData = new List<RegionConnector>();

        Dictionary<int, List<int>> connectedIds = new Dictionary<int, List<int>>();
        _packs = new List<Pack>();

        for (int i = 0; i < numPacks; i++)
        {
            _packs.Add(new Pack(new Rect(0, 0,
                Random.Range(minPackWidth, maxPackWidth),
                Random.Range(minPackHeight, maxPackHeight)
                ), new Color(Random.Range(0, 255) / 255.0f,
                             Random.Range(0, 255) / 255.0f,
                             Random.Range(0, 255) / 255.0f
                )));
        }

        //Steer Separation for overlapping rect
        while (!SteerSeparation()) { }

        //connect nearby rooms
        foreach (var pack in _packs)
        {
            foreach (var item in _packs)
            {
                if (pack.GetHashCode() != item.GetHashCode())
                {
                    float distance = Vector2.Distance(pack.rect.center, item.rect.center);

                    if (pack.connectedPack == null || pack.connectedDistance > distance)
                    {
                        //if (item.connectedPack == null || pack.GetHashCode() != item.connectedPack.GetHashCode())
                        {
                            pack.connectedDistance = distance;
                            pack.connectedPack = item;
                        }
                    }
                }
            }
        }

        //Separate out into different regions, assign id
        List<Pack> checkedPacks = new List<Pack>();
        int runningIndex = 0;
        foreach (var pack in _packs)
        {
            if (pack.regionId == -1)
            {
                Color color = new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f);
                Pack iter = pack;

                _regions[runningIndex] = new List<Pack>();
                while (iter != null && !checkedPacks.Contains(iter))
                {
                    _regions[runningIndex].Add(iter);
                    checkedPacks.Add(iter);

                    iter.regionId = runningIndex;
                    iter.color = color;
                    iter = iter.connectedPack;
                }
                ++runningIndex;
            }
        }

        //for each region, check for room that connects with room in other region and
        //add it to that region
        foreach (KeyValuePair<int, List<Pack>> iter in _regions)
        {
            List<Pack> region = _regions[iter.Key];
            connectedIds[region[0].regionId] = new List<int>();

            //for each pack in every region
            foreach (var pack in region)
            {
                foreach (KeyValuePair<int, List<Pack>> iter1 in _regions)
                {
                    List<Pack> regionToCheck = _regions[iter1.Key];
                    if (regionToCheck != region)
                    {
                        //if connected pack is in another region
                        if (regionToCheck.Contains(pack.connectedPack))
                        {
                            if (!connectedIds[pack.regionId].Contains(regionToCheck[0].regionId))
                            {
                                connectedIds[pack.regionId].Add(regionToCheck[0].regionId);
                                break;
                            }
                        }
                    }
                }
            }
        }

        //remove cyclic connections
        List<BinaryTree<int>> regionConnectingTree = new List<BinaryTree<int>>();

        foreach (KeyValuePair<int, List<int>> iter in connectedIds)
        {
            foreach (var id in iter.Value)
            {
                AddToTree<int>(iter.Key, id, ref regionConnectingTree);
            }
        }

        //move room from other region
        foreach (var tree in regionConnectingTree)
        {
            tree.PrintTree();

            int length = tree.data.Count;
            for (int index = 1; index < length; index++)
            {
                CopyRegions(tree.data[index], tree.data[0]);
            }
        }

        foreach (KeyValuePair<int, List<Pack>> iter in _regions)
        {
            ConnectToMainRoom(iter.Key);
            break;
        }

        //Connect disconnected regions
        ConnectRegions(_regions);
        //Connect disconnected regions to main region
        ConnectRegionsToMainRoom();

        //connect missing regions, till no missing regions found
        while (_noConnectionRegions.Count > 1)
        {
            Dictionary<int, List<Pack>> connectedRegions = new Dictionary<int, List<Pack>>();
            Dictionary<int, List<Pack>> noConnectionRegions = new Dictionary<int, List<Pack>>();

            foreach (var id in _connectedRegions)
            {
                connectedRegions[id] = _regions[id];
            }
            foreach (var id in _noConnectionRegions)
            {
                noConnectionRegions[id] = _regions[id];
            }

            //Connect disconnected regions
            ConnectRegions(connectedRegions, noConnectionRegions);

            //Connect disconnected regions to main region
            ConnectRegionsToMainRoom();
        }
    }

    private void ConnectRegionsToMainRoom()
    {
        _connectedRegions.Clear();
        _noConnectionRegions.Clear();

        int count = _connectionData.Count;
        for (int index = 0; index < count; index++)
        {
            foreach (var connector in _connectionData)
            {
                if (connector.packA.isConnectedToMainRoom)
                {
                    ConnectToMainRoom(connector.packB.regionId);
                }
                else if (connector.packB.isConnectedToMainRoom)
                {
                    ConnectToMainRoom(connector.packA.regionId);
                }
            }
        }
        foreach (KeyValuePair<int, List<Pack>> region in _regions)
        {
            if (region.Value[0].isConnectedToMainRoom)
            {
                _connectedRegions.Add(region.Value[0].regionId);
            }
            else
            {
                _noConnectionRegions.Add(region.Value[0].regionId);
            }
        }
    }

    private void ConnectRegions(Dictionary<int, List<Pack>> regions1, Dictionary<int, List<Pack>> regions2)
    {
        float runningDistance = -1.0f;
        Pack packA = null; Pack packB = null;
        foreach (KeyValuePair<int, List<Pack>> iter in regions1)
        {
            foreach (KeyValuePair<int, List<Pack>> iiter in regions2)
            {
                if (iter.Key != iiter.Key)
                {
                    foreach (var pack in iter.Value)
                    {
                        foreach (var iPack in iiter.Value)
                        {
                            float distance = Vector2.Distance(pack.rect.center, iPack.rect.center);
                            if (runningDistance == -1 || distance < runningDistance)
                            {
                                runningDistance = distance;
                                packA = pack;
                                packB = iPack;
                            }
                        }
                    }
                }
            }
        }
        if (packA != null && packB != null && !IsRegionConnected(packA.regionId, packB.regionId))
        {
            _connectionData.Add(new RegionConnector(packA, packB));
        }
    }

    private void ConnectRegions(Dictionary<int, List<Pack>> regions)
    {
        foreach (KeyValuePair<int, List<Pack>> iter in regions)
        {
            float runningDistance = -1.0f;
            Pack packA = null; Pack packB = null;

            foreach (KeyValuePair<int, List<Pack>> iiter in regions)
            {
                if (iter.Key != iiter.Key)
                {
                    foreach (var pack in iter.Value)
                    {
                        foreach (var iPack in iiter.Value)
                        {
                            float distance = Vector2.Distance(pack.rect.center, iPack.rect.center);
                            if (runningDistance == -1 || distance < runningDistance)
                            {
                                runningDistance = distance;
                                packA = pack;
                                packB = iPack;
                            }
                        }
                    }
                }
            }
            if (!IsRegionConnected(packA.regionId, packB.regionId))
            {
                _connectionData.Add(new RegionConnector(packA, packB));
            }
        }
    }

    private void ConnectToMainRoom(int regionId)
    {
        foreach (var pack in _regions[regionId])
        {
            pack.isConnectedToMainRoom = true;
        }
    }

    private bool IsRegionConnected(int id1, int id2)
    {
        foreach (var connector in _connectionData)
        {
            if (
                (connector.packA.regionId == id1 && connector.packB.regionId == id2)
                || (connector.packA.regionId == id2 && connector.packB.regionId == id1)
                )
            {
                return true;
            }
        }
        return false;
    }

    private bool IsConnectionExists<T>(T connectingIndex, T connectedTo, List<BinaryTree<T>> trees)
    {
        foreach (var tree in trees)
        {
            if (tree.IsConnectionExists(connectingIndex, connectedTo))
            {
                return true;
            }
        }
        return false;
    }

    private void AddToTree<T>(T connectingIndex, T connectedTo, ref List<BinaryTree<T>> trees)
    {
        bool added = false;
        foreach (var tree in trees)
        {
            added = tree.ConnectWith(connectingIndex, connectedTo);

            if (added)
            {
                break;
            }
        }
        if (!added)
        {
            BinaryTree<T> tree = new BinaryTree<T>(4);
            tree.ConnectWith(connectingIndex, connectedTo);
            trees.Add(tree);
        }
    }

    private void CopyRegions(int from, int to)
    {
        foreach (var pack in _regions[from])
        {
            if (!_regions[to].Contains(pack))
            {
                _regions[to].Add(pack);
                pack.color = _regions[to][0].color;
                pack.regionId = _regions[to][0].regionId;
            }
        }
        _regions.Remove(from);
    }

    public Rect GetMapRect()
    {
        Rect rect = new Rect(1000, 1000, 0, 0);
        foreach (var pack in _packs)
        {
            if (pack.rect.x < rect.x)
            {
                rect.x = pack.rect.x;
            }
            if (pack.rect.y < rect.y)
            {
                rect.y = pack.rect.y;
            }
            if (pack.rect.x + pack.rect.width > rect.width)
            {
                rect.width = pack.rect.x + pack.rect.width;
            }
            if (pack.rect.y + pack.rect.height > rect.height)
            {
                rect.height = pack.rect.y + pack.rect.height;
            }
        }
        return rect;
    }

    bool SteerSeparation()
    {
        bool noOverlap = true;
        foreach (var pack in _packs)
        {
            foreach (var item in _packs)
            {
                if (pack.GetHashCode() != item.GetHashCode())
                {
                    while (pack.rect.Overlaps(item.rect))
                    {
                        Rect rect1 = pack.rect;
                        Rect rect2 = item.rect;

                        Rect geometricCenter = GetGeometricCenter(rect1, rect2);
                        pack.rect = Steer(rect1, geometricCenter);
                        item.rect = Steer(rect2, geometricCenter);

                        noOverlap = false;
                    }
                }
            }
        }
        return noOverlap;
    }

    Rect Steer(Rect rect, Rect geometricCenter)
    {
        Vector2 dir = new Vector2(rect.center.x - geometricCenter.center.x, rect.center.y - geometricCenter.center.y);
        rect.center += dir * Time.deltaTime * 0.1f;
        return rect;
    }

    private Rect GetGeometricCenter(Rect rect1, Rect rect2)
    {
        Rect rect = new Rect();
        rect.x = Mathf.Min(rect1.x, rect2.x);
        rect.y = Mathf.Min(rect1.y, rect2.y);

        //calculate width
        if (rect1.x < rect2.x)
        {
            if (rect2.x + rect2.width < rect1.x + rect1.width)
            {
                rect.width = rect1.width;
            }
            else
            {
                rect.width = rect1.x + rect1.width - rect2.x;
            }
        }
        else if (rect1.x > rect2.x)
        {
            if (rect1.x + rect1.width < rect2.x + rect2.width)
            {
                rect.width = rect2.width;
            }
            else
            {
                rect.width = rect2.x + rect2.width - rect1.x;
            }
        }
        else
        {
            rect.width = Mathf.Max(rect1.width, rect2.width);
        }
        //calculate height
        if (rect1.y < rect2.y)
        {
            if (rect2.y + rect2.height < rect1.y + rect1.height)
            {
                rect.height = rect1.height;
            }
            else
            {
                rect.height = rect1.y + rect1.height - rect2.y;
            }
        }
        else if (rect1.y > rect2.y)
        {
            if (rect1.y + rect1.height < rect2.y + rect2.height)
            {
                rect.height = rect2.height;
            }
            else
            {
                rect.height = rect2.y + rect2.height - rect1.y;
            }
        }
        else
        {
            rect.height = Mathf.Max(rect1.height, rect2.height);
        }

        return rect;
    }
}
