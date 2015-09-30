using System.Collections.Generic;

public class BinaryTreeNode<T>
{
    public BinaryTreeNode<T>[] nodes;
    private T _data;

    public T data
    {
        get { return _data; }
        set { _data = value; }
    }

    public BinaryTreeNode(T data, int numNodes)
    {
        this.data = data;
        this.nodes = new BinaryTreeNode<T>[numNodes];
    }
}

public class BinaryTree<T> : IEqualityComparer<T>
{
    public int numOfSiblings { get; set; }

    private BinaryTreeNode<T> _root;
    private List<T> _data;

    public List<T> data
    {
        get { return _data; }
        set { _data = value; }
    }

    public bool Equals(T data1, T data2)
    {
        return data1.GetHashCode() == data2.GetHashCode();
    }

    public int GetHashCode(T obj)
    {
        return obj.GetHashCode();
    }


    public BinaryTree(int numOfSiblings)
    {
        _root = null;
        _data = new List<T>();
        this.numOfSiblings = numOfSiblings;
    }

    private bool Connect(T connectingIndex, T connectTo, BinaryTreeNode<T> node)
    {
        if (node != null && Equals(node.data, connectTo))
        {
            var length = node.nodes.Length;
            for (int index = 0; index < length; index++)
            {
                if (node.nodes[index] == null)
                {
                    node.nodes[index] = new BinaryTreeNode<T>(connectingIndex, numOfSiblings);
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

    public bool Connect(T connectingIndex, T connectTo)
    {
        if (_root == null)
        {
            _root = new BinaryTreeNode<T>(connectTo, numOfSiblings);
        }

        return Connect(connectingIndex, connectTo, _root);
    }

    private void Print(BinaryTreeNode<T> node)
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
            _data = new List<T>();
            Print(_root);
        }

    }

    private BinaryTreeNode<T> Find(T data, BinaryTreeNode<T> node)
    {
        if (node != null && Equals(node.data, data))
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
                    BinaryTreeNode<T> retNode = Find(data, node.nodes[index]);
                    if (retNode != null)
                    {
                        return retNode;
                    }
                }
            }
        }
        return null;
    }

    private BinaryTreeNode<T> Find(T data)
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

    public bool IsConnectionExists(T connectingIndex, T connectedTo)
    {
        BinaryTreeNode<T> node = Find(connectingIndex);
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