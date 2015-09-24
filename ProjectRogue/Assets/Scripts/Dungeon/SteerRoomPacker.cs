using System.Collections.Generic;
using UnityEngine;

public class Pack
{
    public Rect rect { get; set; }
    public Color color { get; set; }
    public Pack connectedPack { get; set; }
    public float connectedDistance { get; set; }
    public int regionId { get; set; }
    public bool canDrawDebug { get; set; }

    public Pack(Rect rect, Color color)
    {
        this.regionId = -1;
        this.rect = rect;
        this.color = color;
        this.connectedPack = null;
        this.connectedDistance = 0.0f;
        this.canDrawDebug = false;
    }
}

public class SteerRoomPacker
{
    private List<Pack> _packs;

    public List<Pack> packs
    {
        get { return _packs; }
    }

    public SteerRoomPacker(int numPacks, int minPackWidth, int minPackHeight, int maxPackWidth, int maxPackHeight)
    {
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

        while (!SteerSeparation()) { }
    }

    public void ConnectRooms()
    {
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
