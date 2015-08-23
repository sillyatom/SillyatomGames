using UnityEngine;
using System.Collections.Generic;

public class Vertex
{
    public Vector3 position;
    public int index;

    public Vertex(Vector3 pos, int nodeIndex = -1)
    {
        position = pos;
        index = nodeIndex;
    }
}
public class Polygon
{
    public Vertex bottomLeft;
    public Vertex bottomRight;
    public Vertex topLeft;
    public Vertex topRight;

    public Polygon(Vertex bl, Vertex tl, Vertex tr, Vertex br)
    {
        bottomLeft = bl;
        bottomRight = br;
        topLeft = tl;
        topRight = tr;
    }

    public static Vertex getNode(string node, int x, int y, int quadSize, int index = -1)
    {
        Vector3 retVec;

        float xPos = x * quadSize;
        float yPos = y * quadSize;

        switch (node)
        {
            case "tl":
                retVec = new Vector3(xPos, 0, yPos + quadSize);
                break;

            case "tr":
                retVec = new Vector3(xPos + quadSize, 0, yPos + quadSize);
                break;

            case "bl":
                retVec = new Vector3(xPos, 0, yPos);
                break;

            case "br":
                retVec = new Vector3(xPos + quadSize, 0, yPos);
                break;
            default:
                retVec = Vector3.zero;
                break;
        }
        return new Vertex(retVec, index);
    }
}

public class CustomPlane
{
    public Polygon[,] quads;

    private int _quadSize;
    public int quadSize
    {
        get
        {
            return _quadSize;
        }
        set
        {
            _quadSize = value;
        }
    }
    private int _width;
    public int width
    {
        get
        {
            return _width;
        }
        set
        {
            _width = value;
        }
    }

    private int _height;
    public int height
    {
        get
        {
            return _height;
        }
        set
        {
            _height = value;
        }
    }
    private List<Vector3> _vertices;
    private List<Vector2> _uvs;
    private List<int> _triangles;
    private List<Color32> _colors;

    public CustomPlane(int width, int height, int quadSize)
    {
        _quadSize = quadSize;
        _width = width;
        _height = height;

        _vertices = new List<Vector3>();
        _triangles = new List<int>();
        _uvs = new List<Vector2>();
        _colors = new List<Color32>();

        int row = Mathf.CeilToInt(_width / _quadSize);
        int col = Mathf.CeilToInt(_height / _quadSize);
        quads = new Polygon[row, col];

        int runningIndex = -1;

        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                int lastRunningIndex = runningIndex;
                Vertex bottomLeft = (x - 1 > -1) ? quads[x - 1, y].bottomRight : (y - 1 > -1) ? quads[x, y - 1].topLeft : Polygon.getNode("bl", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(bottomLeft.position);
                }

                lastRunningIndex = runningIndex;
                Vertex topLeft = (x - 1 > -1) ? quads[x - 1, y].topRight : Polygon.getNode("tl", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(topLeft.position);
                }

                lastRunningIndex = runningIndex;
                Vertex topRight = Polygon.getNode("tr", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(topRight.position);
                }

                lastRunningIndex = runningIndex;
                Vertex bottomRight = (y - 1 > -1) ? quads[x, y - 1].topRight : Polygon.getNode("br", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(bottomRight.position);
                }

                quads[x, y] = new Polygon(bottomLeft, topLeft, topRight, bottomRight);

                _triangles.Add(bottomLeft.index);
                _triangles.Add(topLeft.index);
                _triangles.Add(topRight.index);

                _triangles.Add(bottomRight.index);
                _triangles.Add(bottomLeft.index);
                _triangles.Add(topRight.index);
            }
        }

        //generate uv's & color
        int length = _vertices.Count;
        for (int index = 0; index < length; index++)
        {
            _uvs.Add(
                        new Vector2(
                                Mathf.InverseLerp(0, _width, _vertices[index].x),
                                Mathf.InverseLerp(0, _height, _vertices[index].z)
                            )
                );

            _colors.Add(new Color32(0, 0, 0, 255));
        }
    }

    public Vector3[] getVertices()
    {
        return _vertices.ToArray();
    }

    public int[] getTriangles()
    {
        return _triangles.ToArray();
    }

    public Vector2[] getUVs()
    {
        return _uvs.ToArray();
    }

    public Color32[] getColors()
    {
        return _colors.ToArray();
    }

}
