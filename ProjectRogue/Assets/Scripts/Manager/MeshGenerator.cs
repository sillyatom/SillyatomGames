using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MeshGenerator : MonoBehaviour {
	
	public class Node
	{
		public Vector3 _position;
		public int _vertexIndex;
		
		public Node(Vector3 position)
		{
			_position = position;
			_vertexIndex = -1;
		}
	}
	
	public class ControlNode : Node
	{
		public bool _active;
		public Node _up;
		public Node _right;
		
		public ControlNode(Vector3 position, bool active, float squareSize):base(position)
		{
			_active = active;
			
			_up = new Node(position + Vector3.forward * squareSize/2f);
			_right = new Node(position + Vector3.right * squareSize/2f);		
		}
	}
	
	public class Square
	{
		public ControlNode _topLeft, _topRight, _bottomLeft, _bottomRight;
		public Node _centerTop, _centerLeft, _centerBottom, _centerRight;
		
		public int _configuration;
		
		public Square(ControlNode topLeft, ControlNode topRight, ControlNode bottomRight, ControlNode bottomLeft)
		{
			_configuration = 0;
			
			_topLeft = topLeft;
			_topRight = topRight;
			_bottomLeft = bottomLeft;
			_bottomRight = bottomRight;
			
			_centerLeft = bottomLeft._up;
			_centerBottom = bottomLeft._right;
			_centerTop = topLeft._right;
			_centerRight = bottomRight._up;
			
			if (_topLeft._active)
			{
				_configuration += 8;
			}
			if (_topRight._active)
			{
				_configuration += 4;
			}
			if (_bottomRight._active)
			{
				_configuration += 2;
			}
			if (_bottomLeft._active)
			{
				_configuration += 1;
			}
		}
	}
	
	public class SquareGrid
	{
		public Square[,] _squares;
		
		public SquareGrid(int [,] map, float gridSize)
		{
			int lenX = map.GetLength(0);
			int lenY = map.GetLength(1);
			
			float mapWidth = lenX * gridSize;
			float mapHeight = lenY * gridSize;
			
			ControlNode[,] controlNodes = new ControlNode[lenX,lenY];
			
			for (int x = 0; x < lenX; x++)
			{
				for (int y = 0; y < lenY; y++)
				{
					controlNodes[x,y] = new ControlNode(new Vector3(-mapWidth/2f + x * gridSize + gridSize/2f, 0, -mapHeight/2f + y * gridSize + gridSize/2f), (map[x,y] == 1), gridSize);
				}
			}
			
			_squares = new Square[lenX-1,lenY-1];
			
			for (int x = 0; x < lenX-1; x++)
			{
				for (int y = 0; y < lenY-1; y++)
				{
					_squares[x, y] = new Square(controlNodes[x, y+1], controlNodes[x+1, y+1], controlNodes[x+1, y], controlNodes[x, y]);
				}
			}
		}
	}
	
	struct Triangle
	{
		public int _vertexA;
		public int _vertexB;
		public int _vertexC;
		
		int [] _vertices;
		
		public Triangle(int a, int b, int c)
		{
			_vertexA = a;
			_vertexB = b;
			_vertexC = c;
			
			_vertices = new int[3];
			_vertices[0] = _vertexA;
			_vertices[1] = _vertexB;
			_vertices[2] = _vertexC;
		}
		
		public bool Contains(int vertex)
		{
			return (_vertexA == vertex || _vertexB == vertex || _vertexC == vertex);
		}
		
		public int this[int i]
		{
			get
			{
				return _vertices[i];
			}
		}
	}
	
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------
	//
	//								Mesh Generator
	//
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------
	public MeshFilter wallMesh;
	public MeshFilter caveMesh;
	public MeshFilter navMesh;
	
	SquareGrid _squareGrid;
	List<Vector3> _vertices;
	List<int> _triangles;
	
	Dictionary<int,List<Triangle>> _trianglesThatSharedVertexIndex = new Dictionary<int, List<Triangle>>();
	List<List<int>> _outlineVertices = new List<List<int>>();
	HashSet<int> _checkedVertices = new HashSet<int>();
	
	public void GenerateNavMesh(int[,] map, float gridSize)
	{
		_squareGrid = new SquareGrid(map, gridSize);
		_vertices = new List<Vector3>();
		_triangles = new List<int>();
		
		_trianglesThatSharedVertexIndex.Clear();
		_outlineVertices.Clear();
		_checkedVertices.Clear();
		
		for (int x = 0; x < _squareGrid._squares.GetLength(0); x++)
		{
			for (int y = 0; y < _squareGrid._squares.GetLength(1); y++)
			{
				TriangulateSquare(_squareGrid._squares[x, y]);
			}
		}
		
		Mesh mesh = new Mesh();
		navMesh.mesh = mesh;
		
		mesh.vertices = _vertices.ToArray();
		mesh.triangles = _triangles.ToArray();
		mesh.RecalculateNormals();
		
		int tileAmount = 10;
		Vector2[] uvs = new Vector2[_vertices.Count];
		for (int i =0; i < _vertices.Count; i ++) {
			float percentX = Mathf.InverseLerp(-map.GetLength(0)/2*gridSize,map.GetLength(0)/2*gridSize,_vertices[i].x) * tileAmount;
			float percentY = Mathf.InverseLerp(-map.GetLength(0)/2*gridSize,map.GetLength(0)/2*gridSize,_vertices[i].z) * tileAmount;
			uvs[i] = new Vector2(percentX,percentY);
		}
		mesh.uv = uvs;
		
		BoxCollider collider = navMesh.gameObject.AddComponent<BoxCollider>();
		collider.material.dynamicFriction = 1f;
		collider.material.dynamicFriction2 = 1f;
		collider.material.staticFriction = 1f;
		collider.material.staticFriction2 = 1f;
	}
	
	public void GenerateMesh(int[,] map, float gridSize)
	{
		_squareGrid = new SquareGrid(map, gridSize);
		_vertices = new List<Vector3>();
		_triangles = new List<int>();
		
		_trianglesThatSharedVertexIndex.Clear();
		_outlineVertices.Clear();
		_checkedVertices.Clear();
		
		for (int x = 0; x < _squareGrid._squares.GetLength(0); x++)
		{
			for (int y = 0; y < _squareGrid._squares.GetLength(1); y++)
			{
				TriangulateSquare(_squareGrid._squares[x, y]);
			}
		}
		
		Mesh mesh = new Mesh();
		caveMesh.mesh = mesh;
		
		mesh.vertices = _vertices.ToArray();
		mesh.triangles = _triangles.ToArray();
		mesh.RecalculateNormals();
		
		int tileAmount = 10;
		Vector2[] uvs = new Vector2[_vertices.Count];
		for (int i =0; i < _vertices.Count; i ++) {
			float percentX = Mathf.InverseLerp(-map.GetLength(0)/2*gridSize,map.GetLength(0)/2*gridSize,_vertices[i].x) * tileAmount;
			float percentY = Mathf.InverseLerp(-map.GetLength(0)/2*gridSize,map.GetLength(0)/2*gridSize,_vertices[i].z) * tileAmount;
			uvs[i] = new Vector2(percentX,percentY);
		}
		mesh.uv = uvs;
		
		CreateWallMesh(map, gridSize);
	}
	void CreateWallMesh(int[,] map, float gridSize)
	{
		CalculateMeshOutlines();

		List<Vector3>vertices = new List<Vector3>();
		List<int>triangles = new List<int>();
		
		Mesh mesh = new Mesh();
		wallMesh.mesh = mesh;
		
		float wallHeight = 15;
		
		foreach( List<int> outline in _outlineVertices)
		{
			for (int i = 0; i < outline.Count-1; i++)
			{
				int startIndex = vertices.Count;
				vertices.Add(_vertices[outline[i]]);
				vertices.Add(_vertices[outline[i+1]]);
				vertices.Add(_vertices[outline[i]] - Vector3.up * wallHeight);
				vertices.Add(_vertices[outline[i+1]] - Vector3.up * wallHeight);
				
				triangles.Add(startIndex + 0);
				triangles.Add(startIndex + 2);
				triangles.Add(startIndex + 3);
				
				triangles.Add(startIndex + 3);
				triangles.Add(startIndex + 1);
				triangles.Add(startIndex + 0);
				
			}
		}
		mesh.vertices = vertices.ToArray();
		mesh.triangles = triangles.ToArray();
		
		int tileAmount = 10;
		Vector2[] uvs = new Vector2[vertices.Count];
		for (int i =0; i < vertices.Count; i ++) {
			float percentX = Mathf.InverseLerp(-map.GetLength(0)/2*gridSize,map.GetLength(0)/2*gridSize,vertices[i].x) * tileAmount;
			float percentY = Mathf.InverseLerp(-map.GetLength(1)/2*gridSize,map.GetLength(1)/2*gridSize,vertices[i].y) * tileAmount;
			uvs[i] = new Vector2(percentX,percentY);
		}
		mesh.uv = uvs;
		
		MeshCollider wallCollider = wallMesh.gameObject.AddComponent<MeshCollider>();
		wallCollider.sharedMesh = mesh;
	}
	
	void TriangulateSquare(Square square)
	{
		switch(square._configuration)
		{
			case 0:
				break;
			
			//one point
			case 1:
				MeshFromPoints(square._centerLeft, square._centerBottom, square._bottomLeft);
				break;
			case 2:
				MeshFromPoints(square._bottomRight, square._centerBottom, square._centerRight);
				break;
			case 4:
				MeshFromPoints(square._topRight, square._centerRight, square._centerTop);
				break;
			case 8:
				MeshFromPoints(square._topLeft, square._centerTop, square._centerLeft);
				break;
				
			//two points
			case 3:
				MeshFromPoints(square._centerRight, square._bottomRight, square._bottomLeft, square._centerLeft);
				break;
			case 6:
				MeshFromPoints(square._centerTop, square._topRight, square._bottomRight, square._centerBottom);
				break;
			case 9:
				MeshFromPoints(square._topLeft, square._centerTop, square._centerBottom, square._bottomLeft);
				break;
			case 12:
				MeshFromPoints(square._topLeft, square._topRight, square._centerRight, square._centerLeft);
				break;
			case 5:
				MeshFromPoints(square._centerTop, square._topRight, square._centerRight, square._centerBottom, square._bottomLeft, square._centerLeft);
				break;
			case 10:
				MeshFromPoints(square._topLeft, square._centerTop, square._centerRight, square._bottomRight, square._centerBottom, square._centerLeft);
				break;	
				
			//three points
			case 7:
				MeshFromPoints(square._centerTop, square._topRight, square._bottomRight, square._bottomLeft, square._centerLeft);
				break;
			case 11:
				MeshFromPoints(square._topLeft, square._centerTop, square._centerRight, square._bottomRight, square._bottomLeft);
				break;
			case 13:
				MeshFromPoints(square._topLeft, square._topRight, square._centerRight, square._centerBottom, square._bottomLeft);
				break;
			case 14:
				MeshFromPoints(square._topLeft, square._topRight, square._bottomRight, square._centerBottom, square._centerLeft);
				break;
			
			//four points
			case 15:
				MeshFromPoints(square._topLeft, square._topRight, square._bottomRight, square._bottomLeft);
				
				_checkedVertices.Add(square._topLeft._vertexIndex);
				_checkedVertices.Add(square._topRight._vertexIndex);
				_checkedVertices.Add(square._bottomRight._vertexIndex);
				_checkedVertices.Add(square._bottomLeft._vertexIndex);
				break;
		}
	}
	
	void MeshFromPoints(params Node[] points)
	{
		AssignVertices(points);
		
		if (points.Length >= 3)
		{
			CreateTriangle(points[0], points[1], points[2]);
		}
		if (points.Length >= 4)
		{
			CreateTriangle(points[0], points[2], points[3]);
		}
		if (points.Length >= 5)
		{
			CreateTriangle(points[0], points[3], points[4]);
		}
		if (points.Length >= 6)
		{
			CreateTriangle(points[0], points[4], points[5]);
		}
	}
	
	void AssignVertices(Node[] points)
	{
		for (int i = 0; i < points.Length; i++)
		{
			if (points[i]._vertexIndex == -1)
			{
				points[i]._vertexIndex = _vertices.Count;
				_vertices.Add(points[i]._position);
			}
		}
	}
	
	void CreateTriangle(Node a, Node b, Node c)
	{
		_triangles.Add(a._vertexIndex);
		_triangles.Add(b._vertexIndex);
		_triangles.Add(c._vertexIndex);
		
		Triangle triangle = new Triangle(a._vertexIndex, b._vertexIndex, c._vertexIndex);
		AddTriangleToDictionary(a._vertexIndex, triangle);
		AddTriangleToDictionary(b._vertexIndex, triangle);
		AddTriangleToDictionary(c._vertexIndex, triangle);
	}
	
	void AddTriangleToDictionary(int index, Triangle triangle)
	{
		if (_trianglesThatSharedVertexIndex.ContainsKey(index))
		{
			_trianglesThatSharedVertexIndex[index].Add(triangle);
		}
		else
		{
			_trianglesThatSharedVertexIndex[index] = new List<Triangle>();
			_trianglesThatSharedVertexIndex[index].Add(triangle);
		}
	}
	
	int GetConnectedOutlineVertex(int vertexIndex)
	{
		List<Triangle> triangleList = _trianglesThatSharedVertexIndex[vertexIndex];
		
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
		
		return -1;
	}
	
	bool isOutlineVertex(int vertexA, int vertexB)
	{
		List<Triangle> triangleList = _trianglesThatSharedVertexIndex[vertexA];
		int sharedCount = 0;
		
		for (int i = 0; i < triangleList.Count; i++)
		{
			if (triangleList[i].Contains(vertexB))
			{
				sharedCount ++;
				
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
					
					FollowOutline(connectedOutlineVertex, _outlineVertices.Count-1);
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
	
	/*void OnDrawGizmos()
	{
		if (_squareGrid != null)
		{
			for (int x = 0; x < _squareGrid._squares.GetLength(0); x++)
			{
				for (int y = 0; y < _squareGrid._squares.GetLength(1); y++)
				{
					Gizmos.color = (_squareGrid._squares[x, y]._topLeft._active) ? Color.black : Color.white;
					Gizmos.DrawCube(_squareGrid._squares[x, y]._topLeft._position, Vector3.one * 0.4f);
					
					Gizmos.color = (_squareGrid._squares[x, y]._topRight._active) ? Color.black : Color.white;
					Gizmos.DrawCube(_squareGrid._squares[x, y]._topRight._position, Vector3.one * 0.4f);
					
					Gizmos.color = (_squareGrid._squares[x, y]._bottomLeft._active) ? Color.black : Color.white;
					Gizmos.DrawCube(_squareGrid._squares[x, y]._bottomLeft._position, Vector3.one * 0.4f);
					
					Gizmos.color = (_squareGrid._squares[x, y]._bottomRight._active) ? Color.black : Color.white;
					Gizmos.DrawCube(_squareGrid._squares[x, y]._bottomRight._position, Vector3.one * 0.4f);
					
					Gizmos.color = Color.grey;
					Gizmos.DrawCube(_squareGrid._squares[x, y]._centerTop._position, Vector3.one * 0.15f);
					Gizmos.DrawCube(_squareGrid._squares[x, y]._centerBottom._position, Vector3.one * 0.15f);
					Gizmos.DrawCube(_squareGrid._squares[x, y]._centerLeft._position, Vector3.one * 0.15f);
					Gizmos.DrawCube(_squareGrid._squares[x, y]._centerRight._position, Vector3.one * 0.15f);
				}
			}
		}
	}*/
}
