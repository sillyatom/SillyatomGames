using System.Collections.Generic;
using UnityEngine;

public class BorderMesh : CustomMesh
{
    private List<Vector3> _wallVertices;
    private List<int> _wallTriangles;
    private Vector2[] _wallUVs;

    private Dictionary<int, List<Triangle>> _trianglesWithSharedVertex;
    public List<List<int>> _outlineVertices;
    private HashSet<int> _checkedVertices;

    public Vector3[] getWallVertices()
    {
        return _wallVertices.ToArray();
    }

    public int[] getWallTriangles()
    {
        return _wallTriangles.ToArray();
    }

    public Vector2[] getWallUVs()
    {
        return _wallUVs;
    }

    protected override void OnInit()
    {
        base.OnInit();
        _checkedVertices = new HashSet<int>();
        _outlineVertices = new List<List<int>>();
        _wallVertices = new List<Vector3>();
        _wallTriangles = new List<int>();
        _trianglesWithSharedVertex = new Dictionary<int, List<Triangle>>();
    }

    public BorderMesh(int width, int height, int quadSize, int borderSize) : base(width, height, quadSize, borderSize)
    {
    }

    public override void Generate()
    {
        base.Generate();
        //calculate mesh outlines
        CalculateMeshOutlines();

        //create walls from outline
        CreateWallFromOutline(quadSize);
    }

    protected override void OnCreatePolygon(Polygon polygon)
    {
        base.OnCreatePolygon(polygon);
        if (polygon.config >= 3)
        {
            Triangle triangle = new Triangle(polygon.triangles[0], polygon.triangles[1], polygon.triangles[2]);
            AddTriangle(polygon.triangles[0], triangle);
            AddTriangle(polygon.triangles[1], triangle);
            AddTriangle(polygon.triangles[2], triangle);
        }
        if (polygon.config == 4)
        {
            Triangle triangle = new Triangle(polygon.triangles[3], polygon.triangles[4], polygon.triangles[5]);
            AddTriangle(polygon.triangles[3], triangle);
            AddTriangle(polygon.triangles[4], triangle);
            AddTriangle(polygon.triangles[5], triangle);
        }
    }

    private void CreateWallFromOutline(int gridSize)
    {
        float wallHeight = 15;

        foreach (List<int> outline in _outlineVertices)
        {
            for (int i = 0; i < outline.Count - 1; i++)
            {
                int startIndex = _wallVertices.Count;
                _wallVertices.Add(_vertices[outline[i]]);
                _wallVertices.Add(_vertices[outline[i + 1]]);
                _wallVertices.Add(_vertices[outline[i]] - Vector3.up * wallHeight);
                _wallVertices.Add(_vertices[outline[i + 1]] - Vector3.up * wallHeight);

                _wallTriangles.Add(startIndex + 0);
                _wallTriangles.Add(startIndex + 2);
                _wallTriangles.Add(startIndex + 3);

                _wallTriangles.Add(startIndex + 3);
                _wallTriangles.Add(startIndex + 1);
                _wallTriangles.Add(startIndex + 0);
            }
        }

        int tileAmount = 1;
        _wallUVs = new Vector2[_wallVertices.Count];
        for (int i = 0; i < _wallVertices.Count; i++)
        {
            float percentX = Mathf.InverseLerp(-map.GetLength(0) / 2 * gridSize, map.GetLength(0) / 2 * gridSize, _wallVertices[i].x) * tileAmount;
            float percentY = Mathf.InverseLerp(-map.GetLength(1) / 2 * gridSize, map.GetLength(1) / 2 * gridSize, _wallVertices[i].y) * tileAmount;
            _wallUVs[i] = new Vector2(percentX, percentY);
        }
    }

    private void AddTriangle(int vertexIndex, Triangle triangle)
    {
        if (!_trianglesWithSharedVertex.ContainsKey(vertexIndex))
        {
            _trianglesWithSharedVertex[vertexIndex] = new List<Triangle>();
        }
        _trianglesWithSharedVertex[vertexIndex].Add(triangle);
    }

    int GetConnectedOutlineVertex(int vertexIndex)
    {
        if (_trianglesWithSharedVertex.ContainsKey(vertexIndex))
        {
            List<Triangle> triangleList = _trianglesWithSharedVertex[vertexIndex];

            for (int i = 0; i < triangleList.Count; i++)
            {
                Triangle triangle = triangleList[i];

                for (int j = 0; j < 3; j++)
                {
                    if (vertexIndex != triangle[j] && !_checkedVertices.Contains(triangle[j]) && isOutlineVertex(vertexIndex, triangle[j]))
                    {
                        return triangle[j];
                    }
                }
            }
        }

        return -1;
    }

    bool isOutlineVertex(int vertexA, int vertexB)
    {
        List<Triangle> triangleList = _trianglesWithSharedVertex[vertexA];
        int sharedCount = 0;

        for (int i = 0; i < triangleList.Count; i++)
        {
            if (triangleList[i].Contains(vertexB))
            {
                sharedCount++;

                if (sharedCount > 1)
                {
                    break;
                }
            }
        }

        return sharedCount == 1;
    }

    void CalculateMeshOutlines()
    {
        for (int vertexIndex = 0; vertexIndex < _vertices.Count; vertexIndex++)
        {
            if (!_checkedVertices.Contains(vertexIndex))
            {
                int connectedOutlineVertex = GetConnectedOutlineVertex(vertexIndex);

                if (connectedOutlineVertex != -1)
                {
                    _checkedVertices.Add(vertexIndex);

                    List<int> newOutline = new List<int>();
                    newOutline.Add(vertexIndex);
                    _outlineVertices.Add(newOutline);

                    FollowOutline(connectedOutlineVertex, _outlineVertices.Count - 1);
                    _outlineVertices[_outlineVertices.Count - 1].Add(vertexIndex);
                }
            }
        }
    }

    void FollowOutline(int vertexIndex, int outlineGroupIndex)
    {
        _outlineVertices[outlineGroupIndex].Add(vertexIndex);
        _checkedVertices.Add(vertexIndex);

        int nextOutlineVertex = GetConnectedOutlineVertex(vertexIndex);
        if (nextOutlineVertex != -1)
        {
            FollowOutline(nextOutlineVertex, outlineGroupIndex);
        }
    }

    protected override void generateMap(int row, int col, int borderSize)
    {
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
    }
}
