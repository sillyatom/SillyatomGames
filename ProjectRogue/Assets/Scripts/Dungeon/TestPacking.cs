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
    Dictionary<int, List<Pack>> _connectedRegions;
    Dictionary<int, List<int>> _connectedIds;
    Dictionary<int, List<int>> _groupIds;

    void Start()
    {
        _packs = new List<Pack>();
        _regions = new Dictionary<int, List<Pack>>();
        _connectedRegions = new Dictionary<int, List<Pack>>();
        _connectedIds = new Dictionary<int, List<int>>();
        _groupIds = new Dictionary<int, List<int>>();


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
            _connectedIds[region[0].regionId] = new List<int>();

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
                            if (!_connectedIds[pack.regionId].Contains(regionToCheck[0].regionId))
                            {
                                _connectedIds[pack.regionId].Add(regionToCheck[0].regionId);
                                break;
                            }
                        }
                    }
                }
            }
        }

        //foreach (KeyValuePair<int, List<int>> iter in _connectedIds)
        //{
        //    foreach (var id in iter.Value)
        //    {
        //        Debug.Log(" Region " + iter.Key + " Connected to " + id);
        //    }
        //}

        foreach (KeyValuePair<int, List<int>> iter in _connectedIds)
        {
            foreach (var id in iter.Value)
            {
                //Debug.Log(" Region " + iter.Key + " Connected to " + id);

                //before adding
                //is id exists?
                //add iter.key to that id
                //is id in any other index?
                //if iter.key != containing index && !contains
                //add iter.key to that id
                //Create index

                if (_groupIds.ContainsKey(id))
                {
                    if (!_groupIds[id].Contains(iter.Key))
                    {
                        _groupIds[id].Add(iter.Key);
                    }
                }
                else if (GetContainingId(id) != -1)
                {
                    if (iter.Key != GetContainingId(id) && !_groupIds[GetContainingId(id)].Contains(iter.Key))
                    {
                        _groupIds[GetContainingId(id)].Add(iter.Key);
                    }
                }
                else
                {
                    if (!_groupIds.ContainsKey(iter.Key))
                    {
                        _groupIds[iter.Key] = new List<int>();
                        _groupIds[iter.Key].Add(id);
                    }
                }
            }
        }

        //Copy Regions
        foreach (KeyValuePair<int, List<int>> iter in _groupIds)
        {
            foreach (var id in iter.Value)
            {
                CopyRegions(id, iter.Key);
            }
        }

        Debug.Log("Region Count : " + _regions.Count);
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

    private int GetContainingId(int id)
    {
        foreach (KeyValuePair<int, List<int>> iter in _groupIds)
        {
            if (iter.Value.Contains(id))
            {
                return iter.Key;
            }
        }
        return -1;
    }

    private List<int> GetConnectedIdsForKey(int key)
    {
        List<int> ids = new List<int>();
        foreach (KeyValuePair<int, List<int>> iter in _connectedIds)
        {
            if (iter.Value.Contains(key))
            {
                ids.Add(iter.Key);
            }
        }
        return ids;
    }

    private void ConnectToMain(List<Pack> region)
    {
        foreach (var pack in region)
        {
            pack.isConnectedToMain = true;
        }
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
            UnityEditor.Handles.Label(new Vector3(pack.rect.center.x, 50, pack.rect.center.y), pack.regionId.ToString());
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
