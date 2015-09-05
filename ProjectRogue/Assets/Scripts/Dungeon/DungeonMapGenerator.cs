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
            int numRooms = UnityEngine.Random.Range(maxNumRooms - 1, maxNumRooms + 1);
            for (int roomIndex = 0; roomIndex < numRooms; roomIndex++)
            {
                Room room = new Room("Prefabs/Room", roomWidth, roomHeight, quadSize, borderSize);
                room.gameObject.transform.position = new Vector3(roomIndex * roomWidth, 0, floorIndex * roomHeight);
                _rooms.Add(room);
            }
        }
    }
}
