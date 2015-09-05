using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEditor;

public class MapGenerator : MonoBehaviour
{

	struct Coord
	{
		public int _tileX;
		public int _tileY;
		
		public Coord(int x, int y)
		{
			_tileX = x;
			_tileY = y;
		}
	}
	
	public int _width;
	public int _height;
	public int _gridSize;
    public bool _useRandomSeed;
    public int walkThreshold;
    public int wallThreshold;

    private string _seed;
	
	[Range(0, 100)]
	public int _randomPercentage;
	float _randomOffset = 0;
	
	int [,] map;
    public static int[,] borderedMap;

    void Start ()
	{	
		
	}

    void OnEnable()
    {
        Events.instance.AddListener<GameEvent>(OnGenerateMap);
    }
	
    void OnDisable()
    {
        Events.instance.RemoveListener<GameEvent>(OnGenerateMap);
    }

    private void OnGenerateMap(GameEvent e)
    {
        if (e.type == GameEvent.GENERATE_MAP)
        {
            GenerateMap();
        }
    }

    void GenerateMap ()
	{
		map = new int[_width, _height];
        _randomOffset += UnityEngine.Random.Range(0, 1000);
		if (_useRandomSeed)
		{
			_randomOffset = UnityEngine.Random.Range(_randomOffset, _randomOffset + 100);
			_seed = (_randomOffset + Time.time).ToString();
		}
		else
		{
			_seed = "Sillyatom";
		}
		
		System.Random pseudoRandom = new System.Random(_seed.GetHashCode());
		
		for (int x = 0; x < _width; x++) 
		{
			for (int y = 0; y < _height; y++) 
			{
				if (x == 0 || x == _width - 1 || y == 0 || y == _height - 1)
				{
					map[x,y] = 1;			
				}
				else
				{
					map[x,y] = pseudoRandom.Next(0, 100) < _randomPercentage ? 1 : 0;
				}
			}
		}
		
		SmoothMap();
		
		ProcessMap();
		
		int borderSize = 1;
		borderedMap = new int[_width + borderSize * 2, _height + borderSize * 2];
		
		for (int x = 0; x < borderedMap.GetLength(0); x++) 
		{
			for (int y = 0; y < borderedMap.GetLength(1); y++) 
			{
				if (x >= borderSize && x <_width + borderSize && y >= borderSize && y < _height + borderSize)
				{
					borderedMap[x,y] = map[x-borderSize, y-borderSize];
				}
				else
				{
					borderedMap[x,y] = 1;
				}
			}
		}
		
		GetComponent<MeshGenerator>().GenerateMesh(borderedMap, _gridSize);
		
		//for testing
		int [,] walkableMap = new int[borderedMap.GetLength(0), borderedMap.GetLength(1)];
		
		for (int x = 0; x < borderedMap.GetLength(0); x++) 
		{
			for (int y = 0; y < borderedMap.GetLength(1); y++) 
			{
				walkableMap[x, y] = (borderedMap[x, y] == 1) ? 0 : 1;
			}
		}
		GetComponent<MeshGenerator>().GenerateNavMesh(walkableMap, _gridSize);
		
		NavMeshBuilder.BuildNavMesh();

        Events.instance.Raise(new GameEvent(GameEvent.BUILD_NAVMESH_COMPLETE, borderedMap.GetLength(0), borderedMap.GetLength(1), _gridSize));
	}
	
	void SmoothMap()
	{
		for (int index = 0; index < 5; index++)
		{
			for (int x = 0; x < _width; x++) 
			{
				for (int y = 0; y < _height; y++) 
				{
					map[x, y] = GetSurroundingWallCount(x, y) > 4 ? 1 : 0;
				}
			}
		}
	}
	
	int GetSurroundingWallCount(int gridX, int gridY)
	{
		int wallCount = 0;
		
		for (int x = gridX - 1; x <= gridX + 1; x++)
		{
			for (int y = gridY - 1; y <= gridY + 1; y++)
			{
				if (isCoordWithinMapRange(x, y))
				{
					wallCount += map[x, y];
				}
				else
				{
					wallCount++;
				}
			}
		}
		return wallCount;
	}
	
	void ProcessMap()
	{
		List<List<Coord>> wallRegions = GetRegions(1);
		
		foreach(List<Coord>wallRegion in wallRegions)
		{
			if (wallRegion.Count < wallThreshold)
			{
				foreach (Coord tile in wallRegion)
				{
					map[tile._tileX, tile._tileY] = 0;
				}
			}
		}
		
		List<List<Coord>> walkRegions = GetRegions(0);
		List<Room> survivedRooms = new List<Room>();
		
		foreach(List<Coord>walkRegion in walkRegions)
		{
			if (walkRegion.Count <= walkThreshold)
			{
				for (int i = 0; i < walkRegion.Count; i++)
				{
					map[walkRegion[i]._tileX, walkRegion[i]._tileY] = 1;
				}
			}
			else
			{
				survivedRooms.Add(new Room(walkRegion, map));
			}
		}
		
		survivedRooms.Sort();
		survivedRooms[0]._isMainRoom = true;
		survivedRooms[0]._isAccessibleFromMainRoom = true;
		
		ConnectClosestRooms(survivedRooms);
	}
	
	void ConnectClosestRooms(List<Room> allRooms, bool forceAccessibilityFromMainRoom = false)
	{
		int bestDistance = 0;
		Coord bestTileA = new Coord();
		Coord bestTileB = new Coord();
		Room bestRoomA = new Room();
		Room bestRoomB = new Room();
		bool possibleConnectionFound = false;
		
		List<Room> roomListA = new List<Room>();
		List<Room> roomListB = new List<Room>();
		
		if (forceAccessibilityFromMainRoom)
		{
			foreach(Room room in allRooms)
			{
				if (room._isAccessibleFromMainRoom)
				{
					roomListB.Add(room);
				}
				else
				{
					roomListA.Add(room);
				}
			}
		}
		else
		{
			roomListA = allRooms;
			roomListB = allRooms;
		}
		
		foreach (Room roomA in roomListA)
		{
			if (!forceAccessibilityFromMainRoom)
			{
				possibleConnectionFound = false;
				
				if (roomA._connectedRooms.Count > 0)
				{
					continue;
				}
			}
			
			foreach (Room roomB in roomListB)
			{
				if (roomA == roomB || roomA.isConnected(roomB))
				{
					continue;
				}
				
				for (int tileIndexA = 0; tileIndexA < roomA._edgeTiles.Count; tileIndexA++)
				{
					for (int tileIndexB = 0; tileIndexB < roomB._edgeTiles.Count; tileIndexB++)
					{
						Coord tileA = roomA._edgeTiles[tileIndexA];
						Coord tileB = roomB._edgeTiles[tileIndexB];
						
						int distanceBetweenTIles = (int)(Mathf.Pow(tileB._tileX - tileA._tileX, 2) + Mathf.Pow(tileB._tileY - tileA._tileY, 2));
						if (distanceBetweenTIles < bestDistance || !possibleConnectionFound)
						{
							bestDistance = distanceBetweenTIles;
							possibleConnectionFound = true;
							bestTileA = tileA;
							bestTileB = tileB;
							bestRoomA = roomA;
							bestRoomB = roomB;
						}
					}
				}
			}
			
			if (possibleConnectionFound && !forceAccessibilityFromMainRoom)
			{
				CreatePassagePath(bestTileA, bestTileB, bestRoomA, bestRoomB);
			}
		}
		
		if (possibleConnectionFound && forceAccessibilityFromMainRoom)
		{
			CreatePassagePath(bestTileA, bestTileB, bestRoomA, bestRoomB);
			ConnectClosestRooms(allRooms, true);
		}
		
		if (!forceAccessibilityFromMainRoom)
		{
			ConnectClosestRooms(allRooms, true);	
		}
	}
	
	void CreatePassagePath(Coord tileA, Coord tileB, Room roomA, Room roomB)
	{
		Room.connectRooms(roomA, roomB);
//		Debug.DrawLine(CoordToWorldPoint(tileA), CoordToWorldPoint(tileB), Color.green, 100);
		
		List<Coord> lines = GetLines(tileA, tileB);
		foreach(Coord tile in lines)
		{
			DrawCircle(tile, 5);
		}
	}
	
	void DrawCircle(Coord c, int radius)
	{
		for (int x = -radius; x <= radius; x++)
		{
			for (int y = -radius; y <= radius; y++)
			{
				if (x*x + y*y <= radius*radius)
				{
					int drawX = c._tileX + x;
					int drawY = c._tileY + y;
					
					if (isCoordWithinMapRange(drawX, drawY))
					{
						map[drawX, drawY] = 0;
					}
				}
			}
		}
	}
	
	List<Coord> GetLines(Coord from, Coord to)
	{
		List<Coord> lines = new List<Coord>();
	
		int x = from._tileX;
		int y = from._tileY;
		
		int dx = to._tileX - from._tileX;
		int dy = to._tileY - from._tileY;
		
		int step = Math.Sign(dx);
		int gradientStep = Math.Sign(dy);
		
		int longest = Mathf.Abs(dx);
		int shortest = Mathf.Abs(dy);
		
		bool isInverted = false;
		
		if (longest < shortest)
		{
			isInverted = true;
			
			longest = Mathf.Abs(dy);
			shortest = Mathf.Abs(dx);
			
			step = Math.Sign(dy);
			gradientStep = Math.Sign(dx);
		}
		
		int gradientAccumulation = longest / 2;
		
		for (int i = 0; i < longest; i++)
		{
			lines.Add(new Coord(x, y));
			
			if (isInverted)
			{
				y += step;
			}
			else
			{
				x += step;
			}
			
			gradientAccumulation += shortest;
			if (gradientAccumulation >= longest)
			{
				if (isInverted)
				{
					x += gradientStep;
				}
				else
				{
					y += gradientStep;
				}
				
				gradientAccumulation -= longest;
			}
		}
		
		return lines;
	}
	
	Vector3 CoordToWorldPoint(Coord tile)
	{
		return new Vector3(-_width/2 + 0.5f + tile._tileX, 2, -_height/2 + 0.5f + tile._tileY);
	}
	
	List<List<Coord>> GetRegions(int tileType)
	{
		List<List<Coord>>regions = new List<List<Coord>>();
		int [,]mapFlags = new int [_width, _height];
		
		for (int x = 0; x< _width; x++)
		{
			for (int y = 0; y < _height; y++)
			{
				if (mapFlags[x,y] == 0 && map[x,y] == tileType)
				{
					List<Coord> newRegion = GetRegionTiles(x, y);
					regions.Add(newRegion);
					
					foreach(Coord tile in newRegion)
					{
						mapFlags[tile._tileX, tile._tileY] = 1;
					}
				}
			}
		}
		return regions;
	}
	
	List<Coord> GetRegionTiles(int tileX, int tileY)
	{
		List<Coord>regionTiles = new List<Coord>();
		int [,] mapFlags = new int[_width,_height];
		int tileType = map[tileX,tileY];
		
		Queue<Coord> queue = new Queue<Coord>();
		queue.Enqueue(new Coord(tileX, tileY));
		mapFlags[tileX, tileY] = 1;
		
		while(queue.Count > 0)
		{
			Coord tile = queue.Dequeue();
			regionTiles.Add(tile);
			
			for (int x = tile._tileX - 1 ; x <= tile._tileX + 1; x++)
			{
				for (int y = tile._tileY - 1 ; y <= tile._tileY + 1; y++)
				{
					if (isCoordWithinMapRange(x, y) && (x == tile._tileX || y == tile._tileY))
					{
						if (mapFlags[x,y] == 0 && map[x,y] == tileType)
						{
							mapFlags[x, y] = 1;
							queue.Enqueue(new Coord(x, y));
						}
					}
				}
			}
		}
		return regionTiles;
	}
	
	bool isCoordWithinMapRange(int x, int y)
	{
		return (x >= 0 && x < _width && y>=0 && y < _height);
	}
	
	public bool _enabledGenerateMap;
	
	void Update()
	{
		if (_enabledGenerateMap && (Input.GetMouseButtonUp(1) || Input.GetMouseButtonUp(0)))
		{
			GenerateMap();
		}
	}
	
	class Room : IComparable<Room>
	{
		public List<Coord> _tiles;
		public List<Coord> _edgeTiles;
		public List<Room> _connectedRooms;
		public int _roomSize;
		
		public bool _isAccessibleFromMainRoom;
		public bool _isMainRoom;
		
		public Room()
		{
		}

		public Room(List<Coord>tiles, int[,] map)
		{
			_tiles = tiles;
			_roomSize = _tiles.Count;
			_connectedRooms = new List<Room>();
			_edgeTiles = new List<Coord>();
			
			foreach(Coord tile in _tiles)
			{
				for (int x = tile._tileX-1; x <= tile._tileX+1; x++)
				{
					for (int y = tile._tileY-1; y <= tile._tileY; y++)
					{
						if (x == tile._tileX || y == tile._tileY)
						{
							if (map[x,y] == 1)
							{
								_edgeTiles.Add(tile);
							}
						}
					}
				}
			}
		}
		
		public void SetAccessibleFromMainRoom()
		{
			if (!_isAccessibleFromMainRoom)
			{
				_isAccessibleFromMainRoom = true;
				
				foreach(Room room in _connectedRooms)
				{
					room.SetAccessibleFromMainRoom();
				}
			}
		}
		
		public int CompareTo(Room otherRoom)
		{
			return otherRoom._roomSize.CompareTo(_roomSize);
		}
		
		public bool isConnected(Room room)
		{
			return _connectedRooms.Contains(room);
		}
		
		public static void connectRooms(Room roomA, Room roomB)
		{
			if (roomA._isAccessibleFromMainRoom)
			{
				roomB.SetAccessibleFromMainRoom();
			}
			else if (roomB._isAccessibleFromMainRoom)
			{
				roomA.SetAccessibleFromMainRoom();
			}
			roomA._connectedRooms.Add(roomB);
			roomB._connectedRooms.Add(roomA);
		}
	}
}
