using System.Collections.Generic;
using UnityEngine;

public class TestPacking : MonoBehaviour
{
    private List<Pack> _packs;

    public int minPackWidth = 30;
    public int maxPackWidth = 200;

    public int minPackHeight = 30;
    public int maxPackHeight = 200;

    public int quadSize;
    public int borderSize;
    public int wallHeight;

    public int numOfPacks = 8;

    Dictionary<int, List<Pack>> _regions;

    List<RegionConnector> _connectionData = new List<RegionConnector>();

    void Start()
    {
        _packs = new List<Pack>();
        _regions = new Dictionary<int, List<Pack>>();

        Dictionary<int, List<int>> connectedIds = new Dictionary<int, List<int>>();


        for (int i = 0; i < numOfPacks; i++)
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

        //for each region
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

        List<BinaryTree<int>> regionConnectingTree = new List<BinaryTree<int>>();

        foreach (KeyValuePair<int, List<int>> iter in connectedIds)
        {
            foreach (var id in iter.Value)
            {
                AddToTree<int>(iter.Key, id, ref regionConnectingTree);
            }
        }

        foreach (var tree in regionConnectingTree)
        {
            tree.PrintTree();

            int length = tree.data.Count;
            for (int index = 1; index < length; index++)
            {
                CopyRegions(tree.data[index], tree.data[0]);
            }
        }

        //Connect Regions
        foreach (KeyValuePair<int, List<Pack>> iter in _regions)
        {
            float runningDistance = -1.0f;
            Pack packA = null; Pack packB = null;

            foreach (KeyValuePair<int, List<Pack>> iiter in _regions)
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

        Debug.Log("Region Count : " + _regions.Count);
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
            added = tree.Connect(connectingIndex, connectedTo);

            if (added)
            {
                break;
            }
        }
        if (!added)
        {
            BinaryTree<T> tree = new BinaryTree<T>(4);
            tree.Connect(connectingIndex, connectedTo);
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
#if (DEBUG_DRAW)
                        DrawNodeRect(geometricCenter, Color.red);
#endif
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

    void OnDrawGizmos()
    {
        if (_packs == null) return;
        foreach (var pack in _packs)
        {
            UnityEditor.Handles.BeginGUI();
            UnityEditor.Handles.color = Color.black;
            UnityEditor.Handles.Label(new Vector3(pack.rect.center.x, 50, pack.rect.center.y), pack.regionId.ToString() + "-" + pack.uniqueId);
            UnityEditor.Handles.EndGUI();
        }
        foreach (var pack in _packs)
        {
            Gizmos.color = pack.color;
            Gizmos.DrawCube(new Vector3(pack.rect.x + pack.rect.width / 2, 1, pack.rect.y + pack.rect.height / 2), new Vector3(pack.rect.width, 1, pack.rect.height));
            DrawNodeRect(pack.rect, Color.black);
        }
        foreach (var pack in _packs)
        {
            if (pack.connectedPack != null)
            {
                Debug.DrawLine(new Vector3(pack.rect.center.x, 1, pack.rect.center.y), new Vector3(pack.connectedPack.rect.center.x, 1, pack.connectedPack.rect.center.y), pack.color);
            }
        }
        foreach (var connector in _connectionData)
        {
            Debug.DrawLine(new Vector3(connector.packA.rect.center.x, 1, connector.packA.rect.center.y), new Vector3(connector.packB.rect.center.x, 1, connector.packB.rect.center.y), Color.red);
        }
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

    void DrawNodeRect(Rect rect, Color color)
    {
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y + rect.height), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y), color);
        Debug.DrawLine(new Vector3(rect.x + rect.width, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
    }
}
