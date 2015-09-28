using System.Collections.Generic;

public class BinaryTreeNode
{
    public BinaryTreeNode[] nodes;
    private int _data;

    public int data
    {
        get { return _data; }
        set { _data = value; }
    }

    public BinaryTreeNode(int data, int numNodes)
    {
        this.data = data;
        this.nodes = new BinaryTreeNode[numNodes];
    }
}

public class BinaryTree
{
    public int numOfSiblings { get; set; }

    private BinaryTreeNode _root;
    private List<int> _data;

    public List<int> data
    {
        get { return _data; }
        set { _data = value; }
    }


    public BinaryTree(int numOfSiblings)
    {
        _root = null;
        _data = new List<int>();
        this.numOfSiblings = numOfSiblings;
    }

    private bool Connect(int connectingIndex, int connectTo, BinaryTreeNode node)
    {
        if (node != null && node.data == connectTo)
        {
            var length = node.nodes.Length;
            for (int index = 0; index < length; index++)
            {
                if (node.nodes[index] == null)
                {
                    node.nodes[index] = new BinaryTreeNode(connectingIndex, numOfSiblings);
                    break;
                }

                if (index == length - 1)
                {
                    throw (new System.Exception());
                }
            }

            return true;
        }
        else
        {
            var length = node.nodes.Length;
            for (int index = 0; index < length; index++)
            {
                if (node.nodes[index] != null && Connect(connectingIndex, connectTo, node.nodes[index]))
                {
                    return true;
                }
            }
        }

        return false;
    }

    public bool Connect(int connectingIndex, int connectTo)
    {
        if (_root == null)
        {
            _root = new BinaryTreeNode(connectTo, numOfSiblings);
        }

        return Connect(connectingIndex, connectTo, _root);
    }

    private void Print(BinaryTreeNode node)
    {
        if (node != null)
        {
            //Debug.Log(" Value at node : " + node.data);
            _data.Add(node.data);

            int length = node.nodes.Length;

            for (int index = 0; index < length; index++)
            {
                if (node.nodes[index] != null)
                {
                    Print(node.nodes[index]);
                }
            }
        }
    }

    public void PrintTree()
    {
        if (_root != null)
        {
            _data.Clear();
            _data = new List<int>();
            Print(_root);
        }

    }

    private BinaryTreeNode Find(int data, BinaryTreeNode node)
    {
        if (node != null && node.data == data)
        {
            return node;
        }
        else
        {
            var length = node.nodes.Length;
            for (int index = 0; index < length; index++)
            {
                if (node.nodes[index] != null)
                {
                    BinaryTreeNode retNode = Find(data, node.nodes[index]);
                    if (retNode != null)
                    {
                        return retNode;
                    }
                }
            }
        }
        return null;
    }

    private BinaryTreeNode Find(int data)
    {
        if (_root == null)
        {
            return null;
        }
        else
        {
            return Find(data, _root);
        }
    }

    public bool IsConnectionExists(int connectingIndex, int connectedTo)
    {
        BinaryTreeNode node = Find(connectingIndex);
        if (node != null && Find(connectedTo, node) != null)
        {
            return true;
        }

        node = Find(connectedTo);
        if (node != null && Find(connectingIndex, node) != null)
        {
            return true;
        }
        return false;
    }
}