using System.Collections.Generic;
using UnityEngine;

public enum PackType : int { LEFT_ALIGN, RIGHT_ALIGN, TOP_ALIGN, BOTTOM_ALIGN }

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

    public BinNode(PackingObject obj, BinNode parent, Rect rect)
    {
        this.nodes = new BinNode[2];
        this.parent = parent;
        this.obj = obj;
        this.rect = rect;
    }

    public bool CanGrow(Rect rect, int maxPackerWidth, int maxPackerHeight)
    {
        return (this.rect.x + rect.width <= maxPackerWidth && this.rect.y + rect.height <= maxPackerHeight);
    }

    public bool SetObject(PackingObject obj, PackType packType)
    {
        this.obj = obj;

        if (packType == PackType.LEFT_ALIGN)
        {

            this.nodes[0] = new BinNode(null, this, new Rect(
                                                             rect.x + this.obj.rect.width
                                                           , rect.y
                                                           , rect.width - obj.rect.width
                                                           , obj.rect.height
                                                            ));
            this.nodes[1] = new BinNode(null, this, new Rect(
                                                         rect.x
                                                       , rect.y + this.obj.rect.height
                                                       , rect.width
                                                       , rect.height - obj.rect.height
                                                        ));
        }
        else if (packType == PackType.RIGHT_ALIGN)
        {

            this.nodes[0] = new BinNode(null, this, new Rect(
                                                             rect.x
                                                           , rect.y
                                                           , rect.width - obj.rect.width
                                                           , obj.rect.height
                                                            ));
            this.nodes[1] = new BinNode(null, this, new Rect(
                                                         rect.x
                                                       , rect.y + this.obj.rect.height
                                                       , rect.width
                                                       , rect.height - obj.rect.height
                                                        ));
            this.rect.x = this.rect.x + this.rect.width - obj.rect.width;
        }

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
    public PackType packType { get; set; }

    public List<BinNode> packedNodes
    {
        get { return _packedNodes; }
        set { _packedNodes = value; }
    }

    public RoomPacker(int x, int y, int maxWidth, int maxHeight, PackType type = PackType.LEFT_ALIGN)
    {
        maxPackWidth = maxWidth;
        maxPackHeight = maxHeight;
        packType = type;
        packedNodes = new List<BinNode>();
        _root = CreateNode(null, new Rect(x, y, maxPackWidth, maxPackHeight));
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
            return currNode.SetObject(obj, packType);
        }

        return false;
    }

    private BinNode CreateNode(PackingObject obj, Rect rect)
    {
        return new BinNode(obj, null, rect);
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
        }
    }
}
