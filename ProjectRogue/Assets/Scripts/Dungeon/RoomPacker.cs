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
    public Rect rect;
    public PackingObject obj;
    public bool isPackedRight;

    public BinNode(PackingObject obj, Rect rect, bool isRightNode)
    {
        this.nodes = new BinNode[2];
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

    public bool SetObject(PackingObject obj)
    {
        Debug.Assert((this.nodes[0] == null && this.nodes[1] == null));

        this.obj = obj;
        this.nodes[0] = new BinNode(null, new Rect(
                                                         rect.x + this.obj.rect.width
                                                       , rect.y
                                                       , rect.width - obj.rect.width
                                                       , obj.rect.height
                                                        ), true);
        this.nodes[1] = new BinNode(null, new Rect(
                                                     rect.x
                                                   , rect.y + this.obj.rect.height
                                                   , rect.width
                                                   , rect.height - obj.rect.height
                                                    ), false);
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
    private bool _canPackRight;

    public List<BinNode> packedNodes
    {
        get { return _packedNodes; }
        set { _packedNodes = value; }
    }

    public float width { get; set; }
    public float height { get; set; }

    public RoomPacker(int width, int height)
    {
        packedNodes = new List<BinNode>();
        _root = CreateNode(null, new Rect(0, 0, width, height), false);
        _canPackRight = true;
    }

    private bool Add(PackingObject obj, BinNode currNode)
    {
        if (currNode.obj != null)
        {
            if (Add(obj, currNode.nodes[0]))
            {
                return true;
            }
            else if (Add(obj, currNode.nodes[1]))
            {
                return true;
            }
        }
        else if (currNode.obj == null && currNode.CanPack(obj.rect))
        {
            return currNode.SetObject(obj);
        }

        return false;
    }

    private bool Grow(BinNode currNode, Rect rect)
    {
        if (currNode.obj != null)
        {
            if (_canPackRight && Grow(currNode.nodes[0], rect))
            {
                return true;
            }
            else if (!_canPackRight && Grow(currNode.nodes[1], rect))
            {
                return true;
            }
        }
        else if (currNode.obj == null)
        {
            return currNode.Grow(rect);
        }
        return false;
    }

    private BinNode CreateNode(PackingObject obj, Rect rect, bool isRightNode)
    {
        return new BinNode(obj, rect, isRightNode);
    }

    private void PackNode(BinNode currNode)
    {
        if (currNode.nodes[0].obj != null)
        {
            PackNode(currNode.nodes[0]);
        }
        //Debug.Log("Printing Node id : " + currNode.obj.id + " --- x : " + currNode.rect.x + " --- y : " + currNode.rect.y);
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
                    Grow(_root, obj.rect);
                    _canPackRight = !_canPackRight;
                }
                while (!Add(obj, _root));
            }
        }
    }
}
