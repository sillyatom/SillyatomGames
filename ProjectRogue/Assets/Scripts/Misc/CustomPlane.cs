using UnityEngine;
using System.Collections.Generic;

public class Vertex
{
    public Vector3 position;
    private Color32 _color;
    public Color32 color
    {
        get
        {
            return _color;
        }
        set
        {
            _color.r = value.r;
            _color.g = value.g;
            _color.b = value.b;
            _color.a = value.a;
        }
    }
    public int index;

    public Vertex(Vector3 pos, int nodeIndex = -1)
    {
        position = pos;
        index = nodeIndex;
        _color = new Color32(255, 255, 255, 255);
    }
}
public class Polygon
{
    public Vertex bottomLeft;
    public Vertex bottomRight;
    public Vertex topLeft;
    public Vertex topRight;
    public Color32 color;

    public Polygon(Vertex bl, Vertex tl, Vertex tr, Vertex br, Color32 clr)
    {
        bottomLeft = bl;
        bottomRight = br;
        topLeft = tl;
        topRight = tr;
        color = clr;
    }

    public byte getAlpha() { return color.a;  }

    public void UpdateColor(Color32 clr)
    {
        bottomLeft.color = clr;
        bottomRight.color = clr;
        topLeft.color = clr;
        topRight.color = clr;
        color = clr; 
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
    private Polygon[,] _polygons;

    public Polygon this[int x, int y]
    {
        get
        {
            return _polygons[x, y];
        }
    }

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
        _polygons = new Polygon[row, col];

        int runningIndex = -1;

        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                int lastRunningIndex = runningIndex;
                Vertex bottomLeft = (x - 1 > -1) ? _polygons[x - 1, y].bottomRight : (y - 1 > -1) ? _polygons[x, y - 1].topLeft : Polygon.getNode("bl", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(bottomLeft.position);
                }

                lastRunningIndex = runningIndex;
                Vertex topLeft = (x - 1 > -1) ? _polygons[x - 1, y].topRight : Polygon.getNode("tl", x, y, quadSize, ++runningIndex);
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
                Vertex bottomRight = (y - 1 > -1) ? _polygons[x, y - 1].topRight : Polygon.getNode("br", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(bottomRight.position);
                }

                _polygons[x, y] = new Polygon(bottomLeft, topLeft, topRight, bottomRight, new Color32(0, 0, 0, 255));

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

            _colors.Add(new Color32(0, 0, 0, 128));
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

    public Vector2 GetPolygonIndexFromTexCoord(Vector2 texCoord)
    {
        int xIndex, yIndex = 0;

        xIndex = Mathf.CeilToInt((texCoord.x * _width) / _quadSize);
        yIndex = Mathf.CeilToInt((texCoord.y * _height) / _quadSize);

        return new Vector2(xIndex, yIndex);
    }

    public Vector2 GetPolygonIndexFromPosition(Vector3 position)
    {
        int xIndex, yIndex = 0;

        xIndex = Mathf.FloorToInt(position.x / _quadSize);
        yIndex = Mathf.FloorToInt(position.z / _quadSize);

        return new Vector2(xIndex, yIndex);
    }

    private void UpdateColorAt(int vertexIndex, Color32 color)
    {
        _colors[vertexIndex] = color;
    }

    public bool isWithinRange(int x, int y)
    {
        return ((x >= 0 && x < _polygons.GetLength(0)) && (y >= 0 && y < _polygons.GetLength(1)));
    }

    public void UpdatePolygonColorAtIndex(int x, int y, Color32 color)
    {
        Polygon poly = _polygons[x, y];

        //update polygon data
        poly.UpdateColor(color);

        //update render data from updated polygon
        UpdateColorAt(poly.bottomLeft.index, color);
        UpdateColorAt(poly.topLeft.index, color);
        UpdateColorAt(poly.topRight.index, color);
        UpdateColorAt(poly.bottomRight.index, color);
    }
}
