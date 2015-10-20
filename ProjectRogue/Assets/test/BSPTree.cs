using System.Collections.Generic;
using UnityEngine;

public class BSPNode
{
    public CustomRect rect { get; set; }
    public BSPNode[] childNodes;
    static int runningIndex = 0;
    public bool isBlocked = false;
    public int id;

    public BSPNode()
    {
        rect = null;
        childNodes = null;
    }

    public BSPNode(CustomRect rect)
    {
        this.rect = rect;
        childNodes = null;
        id = runningIndex++;
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
        _randomGen = new System.Random("sillyatom".GetHashCode() + UnityEngine.Random.Range(0, 10000));

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

    public void PrintTree()
    {
        _data.Clear();
        Print(_root);
    }
}
