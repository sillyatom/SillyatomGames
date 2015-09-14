using System.Collections.Generic;
using UnityEngine;

public class CustomMesh
{
    protected int[,] map;

    protected Vertex[,] customVertexData;
    protected List<Polygon> _polygons;
    protected List<Vector3> _vertices;
    protected List<Vector2> _uvs;
    protected List<int> _triangles;
    protected List<Color32> _colors;

    public int[,] getMap()
    {
        return map;
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

    public Vertex[,] getCustomVertexData()
    {
        return customVertexData;
    }

    public int width { get; set; }
    public int height { get; set; }
    public int row { get; set; }
    public int col { get; set; }
    public int quadSize { get; set; }
    public int borderSize { get; set; }

    public CustomMesh(int width, int height, int quadSize, int borderSize)
    {
        _vertices = new List<Vector3>();
        _triangles = new List<int>();
        _uvs = new List<Vector2>();
        _colors = new List<Color32>();
        _polygons = new List<Polygon>();

        this.width = width;
        this.height = height;
        this.quadSize = quadSize;
        this.borderSize = borderSize;

        this.row = Mathf.CeilToInt(width / quadSize) + 1;
        this.col = Mathf.CeilToInt(height / quadSize) + 1;

        map = new int[row, col];
        customVertexData = new Vertex[row, col];

        //init
        OnInit();
    }

    public bool isWithinRange(int x, int y)
    {
        return ((x >= 0 && x < row) && (y >= 0 && y < col));
    }

    public virtual void Generate()
    {
        //generate map
        generateMap(row, col, borderSize);

        //generate vertices
        generateVertices();

        //generate polygons
        generatePolygons();

        //generate uv's & color
        generateUVsAndColor();
    }

    protected virtual void OnInit()
    {

    }

    protected virtual void generateVertices()
    {
        int runningIndex = 0;
        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                customVertexData[x, y] = (new Vertex(new Vector3(x * quadSize, 0, y * quadSize), runningIndex++, map[x, y]));
                _vertices.Add(customVertexData[x, y].position);
            }
        }
    }

    protected virtual void generateUVsAndColor()
    {
        int length = _vertices.Count;
        for (int index = 0; index < length; index++)
        {
            _uvs.Add(
                        new Vector2(
                                Mathf.InverseLerp(0, width, _vertices[index].x),
                                Mathf.InverseLerp(0, height, _vertices[index].z)
                            )
                );

            _colors.Add(new Color32(0, 0, 0, 128));
        }
    }

    protected virtual void generatePolygons()
    {
        for (int x = 0; x < row - 1; x++)
        {
            for (int y = 0; y < col - 1; y++)
            {
                if (map[x, y] == 1)
                {
                    Polygon polygon = new Polygon(customVertexData[x, y], customVertexData[x, y + 1], customVertexData[x + 1, y + 1], customVertexData[x + 1, y], new Color32(255, 255, 255, 255));
                    _polygons.Add(polygon);

                    //triangles to draw
                    _triangles.InsertRange(_triangles.Count, polygon.triangles);

                    //callback on generate polygons
                    OnCreatePolygon(polygon);
                }
            }
        }
    }

    protected virtual void OnCreatePolygon(Polygon polygon)
    {

    }

    protected virtual void generateMap(int row, int col, int borderSize)
    {
        //generate map 
        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                map[x, y] = 1;
            }
        }
    }
}
