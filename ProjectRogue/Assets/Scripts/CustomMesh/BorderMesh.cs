using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BorderMesh
{
    private List<Polygon> _polygons;

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
    public int[,] map;

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

    public BorderMesh(int width, int height, int quadSize, int borderSize = 5)
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
        _polygons = new List<Polygon>();

        map = new int[row, col];

        //generate map 
        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                if (x < borderSize || y < borderSize || x >= row - borderSize || y >= col - borderSize)
                {
                    map[x, y] = 1;
                }
                else if (x == borderSize || y == borderSize || x == row - borderSize - 1 || y == col - borderSize - 1)
                {
                    map[x, y] = (UnityEngine.Random.Range(0, 100) < 50) ? 0 : 1;
                }
                else
                {
                    map[x, y] = 0;
                }
            }
        }

        //generate vertices
        Vertex[,] vertices = new Vertex[row, col];
        int runningIndex = 0;
        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                vertices[x, y] = (new Vertex(new Vector3(x * quadSize, 0, y * quadSize), runningIndex++, map[x, y]));
                _vertices.Add(vertices[x, y].position);
            }
        }

        //generate polygons
        for (int x = 0; x < row - 1; x++)
        {
            for (int y = 0; y < col - 1; y++)
            {
                if (map[x, y] == 1)
                {
                    Polygon polygon = new Polygon(vertices[x, y], vertices[x, y + 1], vertices[x + 1, y + 1], vertices[x + 1, y], new Color32(255, 0, 0, 0));
                    _polygons.Add(polygon);
                    _triangles.InsertRange(_triangles.Count, polygon.triangles);
                }
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
}
