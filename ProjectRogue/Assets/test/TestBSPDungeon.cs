using System.Collections.Generic;
using UnityEngine;

public class TestBSPDungeon : MonoBehaviour
{
    public int width = 2000;
    public int height = 2000;

    public int minWidth = 30;
    public int maxWidth = 200;

    public int minHeight = 30;
    public int maxHeight = 200;

    public int quadSize = 5;
    public int borderSize = 2;
    public int wallHeight = 15;

    public int numOfPacks = 8;

	public bool drawGirds = false;
	public bool showExitPositions = false;
	public bool showSingleExit = false;
	public bool showConnection = false;
	public bool showDebugRoom = false;
    
    BSPTree _tree;
    List<Room> _rooms;
    Dictionary<int, List<BSPNode>> regions;
    
    void Start()
    {
        _tree = new BSPTree(0, 0, width, height, minWidth, minHeight, maxWidth, maxHeight, quadSize);

        int roomsCreated = 0;
        while (roomsCreated != numOfPacks)
        {
            if (_tree.Iterate())
            {
                roomsCreated++;
            }
        }
        _tree.PrintTree();

        CreateRooms(_tree.data);

        //process data
        int runningRegionId = 0;
        foreach (var item in _tree.data)
        {
            if (item.regionId == -1)
            {
                item.regionId = runningRegionId++;
            }
            foreach (var connection in item.connectedNodes)
            {
                connection.regionId = item.regionId;
                connection.color = item.color;
            }
        }

        //create regions
        regions = new Dictionary<int, List<BSPNode>>();
        foreach (var item in _tree.data)
        {
            if (!regions.ContainsKey(item.regionId))
            {
                regions[item.regionId] = new List<BSPNode>();
            }
            regions[item.regionId].Add(item);
        }

        //connect regions till no missing regions
        while (regions.Count != 1)
        {
            int key = GetKeyAtIndex(0);
            ConnectRegions(key);
        }

        //find single exit rooms
        Dictionary<int, int> numConnections = new Dictionary<int, int>();
        foreach (var item in _tree.data)
        {
            int roomId = item.id;
            foreach (var room in _tree.data)
            {
                if (room.id != roomId)
                {
                    foreach (var connection in room.connectedNodes)
                    {
                        if (connection.id == roomId)
                        {
                            if (!numConnections.ContainsKey(roomId))
                            {
                                numConnections[roomId] = 0;
                            }
                            numConnections[roomId]++;
                        }
                    }
                }
                else
                {
                    if (!numConnections.ContainsKey(roomId))
                    {
                        numConnections[roomId] = 0;
                    }
                    numConnections[roomId] += room.connectedNodes.Count;
                }
            }
        }

        foreach (KeyValuePair<int, int> numConnect in numConnections)
        {
            if (numConnect.Value == 1)
            {
                BSPNode node = FindRoomWithId(numConnect.Key);
                node.hasSingleExit = true;
            }
        }

        //create exit config
        BSPPathGenerator pathGenerator = new BSPPathGenerator();
        pathGenerator.UpdatePathData(_tree.data);

        //create room mesh
        _rooms = new List<Room>();
        foreach (var pack in _tree.data)
        {
            Room room = new Room("Prefabs/Room", Mathf.CeilToInt(pack.rect.width), Mathf.CeilToInt(pack.rect.height), quadSize, borderSize, wallHeight, pack);
            room.generateMesh();
            room.gameObject.transform.position = new Vector3(pack.rect.x, 1, pack.rect.y);
            _rooms.Add(room);
        }
    }

    BSPNode FindRoomWithId(int id)
    {
        foreach (var item in _tree.data)
        {
            if (item.id == id)
            {
                return item;
            }
        }
        return null;
    }

    int GetKeyAtIndex(int index)
    {
        int counter = 0;
        foreach (KeyValuePair<int, List<BSPNode>> iter in regions)
        {
            if (counter == index)
            {
                return iter.Key;
            }
            ++counter;
        }
        return -1;
    }

    void ConnectRegions(int to)
    {
        BSPNode nearFromNode = null;
        BSPNode nearToNode = null;
        float nearDistance = -1;

        foreach (KeyValuePair<int, List<BSPNode>> iter in regions)
        {
            int from = iter.Key;

            if (from != to)
            {
                List<BSPNode> fromRegion = regions[from];
                List<BSPNode> toRegion = regions[to];

                foreach (var fromNode in fromRegion)
                {
                    foreach (var toNode in toRegion)
                    {
                        float distance = Vector2.Distance(fromNode.rect.center, toNode.rect.center);
                        if (nearDistance == -1 || distance < nearDistance)
                        {
                            nearDistance = distance;
                            nearFromNode = fromNode;
                            nearToNode = toNode;
                        }
                    }
                }
            }
        }

        nearToNode.AddConnection(nearFromNode);
        MergeRegions(nearToNode.regionId, nearFromNode.regionId);
    }

    void MergeRegions(int to, int from)
    {
        List<BSPNode> fromRegion = regions[from];
        List<BSPNode> toRegion = regions[to];
        BSPNode toNode = toRegion[0];
        foreach (var connection in fromRegion)
        {
            connection.regionId = toNode.regionId;
            connection.color = toNode.color;
            toRegion.Add(connection);
        }
        regions.Remove(from);
    }

    void CreateRooms(List<BSPNode> nodes)
    {
        foreach (var node in nodes)
        {
            node.roomRect = node.rect * 0.9f;
        }
    }

    void OnDrawGizmos()
    {
        if (_tree != null)
        {
            if (_tree.data != null)
            {
                foreach (var item in _tree.data)
                {
                	//draw debug room
                	if (showDebugRoom)
                	{
	                    DrawNodeRect(item.rect, Color.red);
	
	                    UnityEditor.Handles.BeginGUI();
	                    UnityEditor.Handles.color = Color.black;
	                    UnityEditor.Handles.Label(new Vector3(item.rect.center.x, 1, item.rect.center.y), item.id.ToString());
	                    UnityEditor.Handles.EndGUI();
	
	                    Gizmos.color = item.color;
	                    Gizmos.DrawCube(new Vector3(item.roomRect.center.x, 1, item.roomRect.center.y), new Vector3(item.roomRect.width, 1, item.roomRect.height));
					}
					
                    //draw connections
                    if (showConnection)
                    {
	                    for (int index = 0; index < item.connectingPositions.Count - 1; index += 2)
	                    {
	                        Debug.DrawLine(item.connectingPositions[index], item.connectingPositions[index + 1]);
	                    }
                    }
                    
                    //draw single exit node
					if (showSingleExit && item.hasSingleExit)
                    {
                        Gizmos.color = Color.white;
                        Gizmos.DrawCube(new Vector3(item.roomRect.center.x, 5, item.roomRect.center.y), new Vector3(item.roomRect.width * 0.25f, 5, item.roomRect.height * 0.25f));
                    }

                    //draw exit position
                    if (showExitPositions)
                    {
						foreach (var point in item.exitPositions)
						{
							Gizmos.color = Color.red;
							Gizmos.DrawCube(point, new Vector3(25.0f, 25.0f, 25.0f));
							Debug.Log(point);
						}
                    }
                }
            }
            
            if (drawGirds && _rooms.Count > 1)
            {
                foreach (Room room in _rooms)
                {
                    Gizmos.color = Color.white;
                    
                    int[,] map = room.meshData.roomBorderMesh.getMap();
                    
                    for (int row = 0; row < map.GetLength(0); row++)
                    {
                    	for (int col = 0; col < map.GetLength(1); col++)
                    	{
                    		Gizmos.DrawWireCube(new Vector3(room.packData.rect.x + row * room.quadSize, 5, room.packData.rect.y + col * room.quadSize), new Vector3(room.quadSize, 1, room.quadSize));
                    	}
                    }
                }
            }
        }
    }

    void DrawNodeRect(CustomRect rect, Color color)
    {
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y + rect.height), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y), color);
        Debug.DrawLine(new Vector3(rect.x + rect.width, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
    }
}
