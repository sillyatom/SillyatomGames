using System.Collections.Generic;
using UnityEngine;

public class PackingObject
{
    public int id;
    public Rect rect;
    public Color color;
    public PackingObject(int id, Rect rect, Color color)
    {
        this.id = id;
        this.rect = rect;
        this.color = color;
    }
}

public class BinNode
{
    public BinNode[] nodes;
    public BinNode parent;
    public Rect rect;
    public PackingObject obj;
    public bool isPackedRight;

    public BinNode(PackingObject obj, BinNode parent, Rect rect, bool isRightNode)
    {
        this.nodes = new BinNode[2];
        this.parent = parent;
        this.obj = obj;
        this.rect = rect;
        this.isPackedRight = isRightNode;
    }

    public bool Grow(Rect rect)
    {
        this.rect.width += rect.width;
        this.rect.height += rect.height;
        return true;
    }

    public bool CanGrow(Rect rect, int maxPackWidth, int maxPackHeight)
    {
        return (this.rect.x + rect.width <= maxPackWidth && this.rect.y + rect.height <= maxPackHeight);
    }

    public bool SetObject(PackingObject obj)
    {
        Debug.Assert((this.nodes[0] == null && this.nodes[1] == null));

        this.obj = obj;
        this.nodes[0] = new BinNode(null, this, new Rect(
                                                         rect.x + this.obj.rect.width
                                                       , rect.y
                                                       , rect.width - obj.rect.width
                                                       , obj.rect.height
                                                        ), true);
        this.nodes[1] = new BinNode(null, this, new Rect(
                                                     rect.x
                                                   , rect.y + this.obj.rect.height
                                                   , rect.width
                                                   , rect.height - obj.rect.height
                                                    ), false);
        rect.width = obj.rect.width;
        rect.height = obj.rect.height;

        return true;
    }

    public bool CanPack(Rect rect)
    {
        return (rect.width <= this.rect.width && rect.height <= this.rect.height);
    }
}

public class RoomPacker
{
    private BinNode _root;
    private List<BinNode> _packedNodes;

    public int maxPackWidth { get; set; }
    public int maxPackHeight { get; set; }

    public List<BinNode> packedNodes
    {
        get { return _packedNodes; }
        set { _packedNodes = value; }
    }

    public float width { get; set; }
    public float height { get; set; }

    public RoomPacker(int width, int height, int maxWidth, int maxHeight)
    {
        maxPackWidth = maxWidth;
        maxPackHeight = maxHeight;

        packedNodes = new List<BinNode>();
        _root = CreateNode(null, new Rect(0, 0, width, height), false);
    }

    private void UpdateOverlappingRect(BinNode currNode, ref Rect rect)
    {
        if (currNode.obj != null)
        {
            UpdateOverlappingRect(currNode.nodes[0], ref rect);
        }

        adjustRectToAvoidIntersection(ref currNode.rect, ref rect, (currNode.obj != null));

        if (currNode.obj != null)
        {
            UpdateOverlappingRect(currNode.nodes[1], ref rect);
        }
    }

    private void UpdateOverlappingRect(ref Rect rect)
    {
        UpdateOverlappingRect(_root, ref rect);
    }

    private int CheckRectPosition(Rect rect1, Rect rect2)
    {
        if ((!rect2.Contains(new Vector2(rect1.x, rect1.y)) || !rect2.Contains(new Vector2(rect1.width, rect1.y))))
        {
            if (rect1.x <= rect2.x)
            {
                return 1;
            }
            else if (rect1.x > rect2.x)
            {
                return 2;
            }
        }
        if (rect1.y <= rect2.y)
        {
            return 3;
        }
        else if (rect1.y > rect2.y)
        {
            return 4;
        }
        return 0;
    }

    private void adjustRectToAvoidIntersection(ref Rect otherRect, ref Rect currentRect, bool hasObject = false)
    {
        float delWidth = 0;
        float delHeight = 0;

        if (otherRect.GetHashCode() != currentRect.GetHashCode() && otherRect.Overlaps(currentRect))
        {
            // if overlapping other objects
            if (hasObject)
            {
                currentRect.width = currentRect.height = 0;
            }
            //if overlapping other rects
            else
            {
                switch (CheckRectPosition(otherRect, currentRect))
                {
                    case 0:
                        break;

                    case 1:
                        delWidth = (otherRect.x + otherRect.width - currentRect.x);
                        otherRect.width -= delWidth;
                        break;

                    case 2:
                        delWidth = (currentRect.x + currentRect.width - otherRect.x);
                        otherRect.x += delWidth;
                        otherRect.width -= delWidth;
                        break;

                    case 3:
                        delHeight = (otherRect.y + otherRect.height - currentRect.y);
                        otherRect.height -= delHeight;
                        break;

                    case 4:
                        otherRect.height = 0;
                        break;
                }
            }

            if (otherRect.width < 0)
                otherRect.width = 0;
            if (otherRect.height < 0)
                otherRect.height = 0;
        }
    }

    private bool Add(PackingObject obj, BinNode currNode)
    {
        if (currNode.obj != null)
        {
            if (Add(obj, currNode.nodes[0]) || Add(obj, currNode.nodes[1]))
            {
                return true;
            }
        }
        else if (currNode.obj == null && currNode.CanPack(obj.rect))
        {
            currNode.SetObject(obj);
            UpdateOverlappingRect(ref currNode.nodes[1].rect);
            return true;
        }

        return false;
    }

    private bool Grow(BinNode currNode, Rect rect)
    {
        if (currNode.obj != null)
        {
            if (Grow(currNode.nodes[0], rect) || Grow(currNode.nodes[1], rect))
            {
                return true;
            }
        }
        else if (currNode.obj == null && currNode.CanGrow(rect, maxPackWidth, maxPackHeight))
        {
            return currNode.Grow(rect);
        }
        return false;
    }

    private BinNode CreateNode(PackingObject obj, Rect rect, bool isRightNode)
    {
        return new BinNode(obj, null, rect, isRightNode);
    }

    private void PackNode(BinNode currNode)
    {
        if (currNode.nodes[0].obj != null)
        {
            PackNode(currNode.nodes[0]);
        }

        _packedNodes.Add(currNode);

        if (currNode.nodes[1].obj != null)
        {
            PackNode(currNode.nodes[1]);
        }
    }

    public void Pack()
    {
        if (_root != null)
        {
            PackNode(_root);
        }
    }

    public void StartPacking(List<PackingObject> objects)
    {
        foreach (PackingObject obj in objects)
        {
            //pack object
            if (Add(obj, _root))
            {

            }
            else
            {
                //if not able to pack, grow the bin until it can pack the obj
                do
                {
                    if (Grow(_root, obj.rect))
                    {

                    }
                    else
                    {
                        Debug.Log("Failed To Grow");
                    }
                }
                while (!Add(obj, _root));
            }
        }
    }

    public void StepPacking(PackingObject obj)
    {
        //pack object
        if (Add(obj, _root))
        {

        }
        else
        {
            //if not able to pack, grow the bin until it can pack the obj
            do
            {
                Grow(_root, obj.rect);
            }
            while (!Add(obj, _root));
        }
    }
}
