using System.Collections.Generic;
using UnityEngine;

public class BSPNode : IRoomInterface
{
    private List<BSPNode> _connectedNodes;
    public List<BSPNode> connectedNodes
    {
        get { return _connectedNodes; }
        set { _connectedNodes = value; }
    }
    private List<ExitConfig> _exitConfig;

    public List<ExitConfig> exitConfig
    {
        get { return _exitConfig; }
        set { _exitConfig = value; }
    }

    private List<Vector3> _connectingPositions;

    public List<Vector3> connectingPositions
    {
        get { return _connectingPositions; }
        set { _connectingPositions = value; }
    }

    private List<Vector3> _exitPositions;

    public List<Vector3> exitPositions
    {
        get { return _exitPositions; }
        set { _exitPositions = value; }
    }

    public CustomRect rect { get; set; }
    public bool hasSingleExit { get; set; }
    public bool isBlocked { get; set; }
    public BSPNode[] childNodes { get; set; }
    public CustomRect roomRect { get; set; }
    public Color color { get; set; }
    public int regionId { get; set; }
    public int id { get; set; }

    static int runningIndex = 0;

    public BSPNode()
    {
        rect = null;
        regionId = -1;
        roomRect = null;
        childNodes = null;
        exitConfig = new List<ExitConfig>();
        exitPositions = new List<Vector3>();
        connectedNodes = new List<BSPNode>();
        _connectingPositions = new List<Vector3>();
        color = new Color(UnityEngine.Random.Range(0, 255) / 255.0f, UnityEngine.Random.Range(0, 255) / 255.0f, UnityEngine.Random.Range(0, 255) / 255.0f);
    }

    public BSPNode(CustomRect rect)
    {
        regionId = -1;
        this.rect = rect;
        this.roomRect = null;
        childNodes = null;
        id = runningIndex++;
        exitConfig = new List<ExitConfig>();
        exitPositions = new List<Vector3>();
        connectedNodes = new List<BSPNode>();
        _connectingPositions = new List<Vector3>();
        color = new Color(UnityEngine.Random.Range(0, 255) / 255.0f, UnityEngine.Random.Range(0, 255) / 255.0f, UnityEngine.Random.Range(0, 255) / 255.0f);
    }

    public void AddConnection(BSPNode node)
    {
        foreach (var connection in connectedNodes)
        {
            if (connection.id == node.id)
            {
                return;
            }
        }
        connectedNodes.Add(node);
    }
    public float Area
    {
        get
        {
            return rect.width * rect.height;
        }
    }

    public bool SplitAt(int position, int direction, float minWidth, float minHeight)
    {
        CustomRect rect1 = null;
        CustomRect rect2 = null;
        if (direction == 0) //Horizontal split  
        {
            rect1 = (new CustomRect(rect.x, rect.y, rect.width, position - rect.y));
            rect2 = (new CustomRect(rect.x, position, rect.width, rect.yMax - position));
        }
        else if (direction == 1)    // vertical split
        {
            rect1 = (new CustomRect(rect.x, rect.y, position - rect.x, rect.height));
            rect2 = (new CustomRect(position, rect.y, rect.xMax - position, rect.height));
        }
        if ((rect1.width >= minWidth && rect1.height >= minHeight) && (rect2.width >= minWidth && rect2.height >= minHeight))
        {
            childNodes = new BSPNode[2];
            childNodes[0] = new BSPNode(rect1);
            childNodes[1] = new BSPNode(rect2);

            rect = CustomRect.Zero;
            return true;
        }
        return false;
    }
}

public class BSPTree
{
    const int HORIZONTAL_SPLIT = 0;
    const int VERTICAL_SPLIT = 1;

    private BSPNode _root;

    private float _width;
    private float _height;

    private float _minWidth;
    private float _minHeight;

    private float _maxWidth;
    private float _maxHeight;

    private System.Random _randomGen;
    private List<BSPNode> _data;

    public BSPTree(float x, float y, float width, float height, float minWidth, float minHeight, float maxWidth, float maxHeight)
    {
        _root = null;
        _data = new List<BSPNode>();

        _width = width;
        _height = height;

        _minWidth = minWidth;
        _maxWidth = maxWidth;

        _minHeight = minHeight;
        _maxHeight = maxHeight;

        // To-Do update the seed each run
        int seed = "sillyatom".GetHashCode() + UnityEngine.Random.Range(0, 10000);
        seed = 1180484270;
        _randomGen = new System.Random(seed);
        Debug.Log(" Seed " + seed);

        _root = new BSPNode(new CustomRect(x, y, width, height));
    }

    public List<BSPNode> data
    {
        get
        {
            return _data;
        }
    }

    private bool SplitNode(BSPNode node)
    {
        int randDir = _randomGen.Next(0, 100);
        randDir = (randDir < 50) ? 0 : 1;

        int minValue = 0;
        int maxValue = 0;
        int selectedValue = 0;

        if (randDir == HORIZONTAL_SPLIT)
        {
            //find a value between allowed height and available height
            //allowed height == rect y position + _minHeight required
            minValue = Mathf.CeilToInt(node.rect.y + _minHeight);
            maxValue = Mathf.CeilToInt(node.rect.yMax);
        }
        else if (randDir == VERTICAL_SPLIT)
        {
            //find a value between allowed width and available width
            //allowed width == rect x position + _minWidth required
            minValue = Mathf.CeilToInt(node.rect.x + _minWidth);
            maxValue = Mathf.CeilToInt(node.rect.xMax);
        }
        if (minValue > maxValue)
        {
            node.isBlocked = true;
            return false;
        }
        selectedValue = _randomGen.Next(minValue, maxValue);
        if (!node.SplitAt(selectedValue, randDir, _minWidth, _minHeight))
        {
            return false;
        }
        return true;
    }

    private bool Divide(BSPNode node)
    {
        if (node.childNodes == null && !node.isBlocked)
        {
            return SplitNode(node);
        }
        else
        {
            if (Divide(node.childNodes[0]))
            {
                return true;
            }
            else if (Divide(node.childNodes[1]))
            {
                return true;
            }
        }
        return false;
    }

    private int FindNodeAtLevel(BSPNode node, CustomRect rect, ref int level)
    {
        if (node == null)
        {
            return 0;
        }
        if (rect.GetHashCode() == node.rect.GetHashCode())
        {
            return level;
        }
        level++;
        int downLevel = FindNodeAtLevel(node.childNodes[0], rect, ref level);
        if (downLevel != 0)
        {
            return downLevel;
        }
        level++;
        downLevel = FindNodeAtLevel(node.childNodes[1], rect, ref level);
        return downLevel;
    }

    public int FindNodeAtLevel(int level)
    {
        return FindNodeAtLevel(_root, _data[0].rect, ref level);
    }

    private BSPNode FindNodeWithMoreArea(BSPNode node, ref BSPNode maxAreaNode)
    {
        if (node != null)
        {
            maxAreaNode = (node.rect.Area > maxAreaNode.Area) ? node : maxAreaNode;

            if (node.childNodes != null)
            {
                maxAreaNode = FindNodeWithMoreArea(node.childNodes[0], ref maxAreaNode);
                maxAreaNode = FindNodeWithMoreArea(node.childNodes[1], ref maxAreaNode);
            }
        }

        return maxAreaNode;
    }

    public bool Iterate()
    {
        BSPNode maxAreaNode = _root;
        BSPNode node = FindNodeWithMoreArea(_root, ref maxAreaNode);
        return Divide(node);
    }

    private void Print(BSPNode node)
    {
        if (node != null)
        {
            if (node.rect.Area > 0)
            {
                _data.Add(node);
            }

            if (node.childNodes != null)
            {
                int length = node.childNodes.Length;

                for (int index = 0; index < length; index++)
                {
                    if (node.childNodes[index] != null)
                    {
                        Print(node.childNodes[index]);
                    }
                }
            }
        }
    }

    void GetNearbyNode(BSPNode from, BSPNode to, ref BSPNode selectedNode, ref float distance)
    {
        if (from.Area != 0)
        {
            float newDistance = (Vector2.Distance(from.rect.center, to.rect.center));
            if (distance < 0 || newDistance < distance)
            {
                selectedNode = from;
                distance = newDistance;
            }
        }
        if (from.childNodes != null)
        {
            GetNearbyNode(from.childNodes[0], to, ref selectedNode, ref distance);
            GetNearbyNode(from.childNodes[1], to, ref selectedNode, ref distance);
        }
    }

    private void PrintConnections(BSPNode node)
    {
        if (node != null)
        {
            if (node.Area == 0)
            {
                if (node.childNodes != null)
                {
                    if (node.childNodes[0].Area != 0 && node.childNodes[1].Area != 0)
                    {
                        node.childNodes[0].AddConnection(node.childNodes[1]);
                        //_connectionsData.Add(new Vector3(node.childNodes[0].rect.center.x, 5, node.childNodes[0].rect.center.y));
                        //_connectionsData.Add(new Vector3(node.childNodes[1].rect.center.x, 5, node.childNodes[1].rect.center.y));
                    }
                    else if (node.childNodes[0].Area == 0 && node.childNodes[1].Area != 0)
                    {
                        BSPNode refNode = null;
                        float refDistance = -1;
                        GetNearbyNode(node.childNodes[0], node.childNodes[1], ref refNode, ref refDistance);
                        refNode.AddConnection(node.childNodes[1]);
                        //_connectionsData.Add(new Vector3(refNode.rect.center.x, 5, refNode.rect.center.y));
                        //_connectionsData.Add(new Vector3(node.childNodes[1].rect.center.x, 5, node.childNodes[1].rect.center.y));
                    }
                    else if (node.childNodes[1].Area == 0 && node.childNodes[0].Area != 0)
                    {
                        BSPNode refNode = null;
                        float refDistance = -1;
                        GetNearbyNode(node.childNodes[1], node.childNodes[0], ref refNode, ref refDistance);
                        refNode.AddConnection(node.childNodes[0]);
                        //_connectionsData.Add(new Vector3(refNode.rect.center.x, 5, refNode.rect.center.y));
                        //_connectionsData.Add(new Vector3(node.childNodes[0].rect.center.x, 5, node.childNodes[0].rect.center.y));
                    }
                    int length = node.childNodes.Length;

                    for (int index = 0; index < length; index++)
                    {
                        PrintConnections(node.childNodes[index]);
                    }
                }
            }
        }
    }

    private void PrintLevelConnections(BSPNode node, ref int level)
    {
    }

    public void PrintTree()
    {
        _data.Clear();

        Print(_root);
        PrintConnections(_root);
    }
}
