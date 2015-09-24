﻿using System.Collections.Generic;
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

    void Start()
    {
        _packs = new List<Pack>();

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
                        if (item.connectedPack == null || pack.GetHashCode() != item.connectedPack.GetHashCode())
                        {
                            pack.connectedDistance = distance;
                            pack.connectedPack = item;
                        }
                    }
                }
            }
        }

        List<List<Pack>> _regions = new List<List<Pack>>();
        List<Pack> checkedPacks = new List<Pack>();
        int runningIndex = 0;
        foreach (var pack in _packs)
        {
            if (pack.regionId == -1)
            {
                List<Pack> currentRegion = new List<Pack>();
                Color color = new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f);
                Pack iter = pack;

                while (!checkedPacks.Contains(iter))
                {
                    currentRegion.Add(iter.connectedPack);
                    currentRegion.Add(iter);

                    checkedPacks.Add(iter);

                    iter.regionId = runningIndex;
                    iter.color = color;
                    iter = iter.connectedPack;
                }

                _regions.Add(currentRegion);
            }
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
            Gizmos.color = pack.color;
            Gizmos.DrawCube(new Vector3(pack.rect.x + pack.rect.width / 2, 1, pack.rect.y + pack.rect.height / 2), new Vector3(pack.rect.width, 1, pack.rect.height));
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
