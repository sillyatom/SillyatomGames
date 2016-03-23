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

    public override string ToString()
    {
        return _data.ToString();
    }
}

public class BinaryTree<T> : IEqualityComparer<T>
{
    public int numOfSiblings { get; set; }

    private BinaryTreeNode<T> _root;
    private List<T> _data;
    private List<BinaryTreeNode<T>> _nodes;

    public List<BinaryTreeNode<T>> nodes
    {
        get { return _nodes; }
        set { _nodes = value; }
    }


    public List<T> data
    {
        get { return _data; }
        set { _data = value; }
    }

    public BinaryTreeNode<T> root
    {
        get { return _root; }
        set { _root = value; }
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
        _nodes = new List<BinaryTreeNode<T>>();
        this.numOfSiblings = numOfSiblings;
    }

    public bool InsertNode(BinaryTreeNode<T> node, BinaryTreeNode<T> parent)
    {
        var length = node.nodes.Length;
        for (int index = 0; index < length; index++)
        {
            if (node.nodes[index] == null)
            {
                node.nodes[index] = node;
                break;
            }

            if (index == length - 1)
            {
                throw (new System.Exception(" Cannot Insert Node - Node length exceeding "));
            }
        }
        return true;
    }

    private bool ConnectWith(T connectingIndex, T connectTo, BinaryTreeNode<T> node)
    {
        if (node != null && (Equals(node.data, connectTo) || Equals(node.data, connectingIndex)))
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
                if (node.nodes[index] != null && ConnectWith(connectingIndex, connectTo, node.nodes[index]))
                {
                    return true;
                }
            }
        }

        return false;
    }

    public bool ConnectWith(T connectingIndex, T connectTo)
    {
        if (_root == null)
        {
            _root = new BinaryTreeNode<T>(connectingIndex, numOfSiblings);
        }
        if (IsConnectionExists(connectingIndex, connectTo) || Equals(connectingIndex, connectTo))
        {
            return true;
        }
        BinaryTreeNode<T> iter = Find(connectingIndex);
        if (iter != null)
        {
            return ConnectWith(connectTo, connectingIndex, iter);
        }
        iter = Find(connectTo);
        if (iter != null)
        {
            return ConnectWith(connectingIndex, connectTo, iter);
        }

        return false;
    }

    private void Print(BinaryTreeNode<T> node)
    {
        if (node != null)
        {
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

    private void PrintNode(BinaryTreeNode<T> node)
    {
        if (node != null)
        {
            _nodes.Add(node);

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

    public void PrintNodes()
    {
        if (_root != null)
        {
            _nodes.Clear();
            PrintNode(_root);
        }

    }

    public void PrintTree()
    {
        if (_root != null)
        {
            _data.Clear();
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

    public BinaryTreeNode<T> Find(T data)
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

    private BinaryTreeNode<T> GetParent(T data, BinaryTreeNode<T> node)
    {
        if (node != null)
        {
            var length = node.nodes.Length;
            for (int index = 0; index < length; index++)
            {
                if (node.nodes[index] != null && Equals(data, node.nodes[index].data))
                {
                    return node;
                }
                else
                {
                    GetParent(data, node.nodes[index]);
                }
            }
        }
        return null;
    }

    public BinaryTreeNode<T> GetParent(T data)
    {
        if (_root == null)
        {
            return null;
        }
        else
        {
            return GetParent(data, _root);
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