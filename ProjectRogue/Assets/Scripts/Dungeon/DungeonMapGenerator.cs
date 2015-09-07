using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class DungeonMapGenerator : MonoBehaviour
{
    public int roomWidth;
    public int roomHeight;
    public int quadSize;
    public int borderSize;
    public int maxNumFloors;
    public int maxNumRooms;

    private List<Room> _rooms;

    void Start ()
    {
        _rooms = new List<Room>();

        for (int floorIndex = 0; floorIndex < maxNumFloors; floorIndex++)
        {
            int numRooms = UnityEngine.Random.Range(maxNumRooms - 1, maxNumRooms);
            for (int roomIndex = 0; roomIndex < numRooms; roomIndex++)
            {
                Room room = new Room("Prefabs/Room", roomWidth, roomHeight, quadSize, borderSize);
                room.floorIndex = floorIndex;
                room.roomIndex = roomIndex;
                room.generateMesh();
                room.gameObject.transform.position = new Vector3(roomIndex * roomWidth, 0, floorIndex * roomHeight);
                _rooms.Add(room);
            }
        }
    }

    void OnDrawGizmos()
    {
        if (_rooms == null) return;
        foreach(Room room in _rooms)
        {
            Vector3[] vertices = room.meshData.getVertices();
            foreach (List<int> outline in room.meshData._outlineVertices)
            {
                for (int i = 0; i < outline.Count - 1; i++)
                {
                    Gizmos.DrawCube(vertices[outline[i]], Vector3.one * 0.5f);
                }
            }
        }
    }
}
