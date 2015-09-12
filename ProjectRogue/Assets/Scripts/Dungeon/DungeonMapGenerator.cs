#define DEBUG_PACKING

using System.Collections.Generic;
using UnityEngine;

public class DungeonMapGenerator : MonoBehaviour
{
    public int roomWidth;
    public int roomHeight;
    public int quadSize;
    public int borderSize;
    public int maxNumFloors;
    public int maxNumRooms;

    private List<Room> _rooms;
    private RoomPacker _packer;

    void Start()
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

        _packer = new RoomPacker();
        List<PackingObject> testObjects = new List<PackingObject>();
        testObjects.Add(new PackingObject(testObjects.Count, new Rect(0, 0, 50, 50), new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f)));
        testObjects.Add(new PackingObject(testObjects.Count, new Rect(0, 0, 50, 50), new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f)));
        testObjects.Add(new PackingObject(testObjects.Count, new Rect(0, 0, 50, 50), new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f)));
        testObjects.Add(new PackingObject(testObjects.Count, new Rect(0, 0, 50, 50), new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f)));
        testObjects.Add(new PackingObject(testObjects.Count, new Rect(0, 0, 50, 50), new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f)));
        _packer.StartPacking(testObjects);
        _packer.Pack();
    }

    //To Draw Vertices
    void OnDrawGizmos()
    {
#if (DRAW_VERTICES)
        if (_rooms == null) return;
        foreach (Room room in _rooms)
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
#endif
#if (DEBUG_PACKING)
        if (_packer != null)
        {
            foreach (BinNode node in _packer.packedNodes)
            {
                Gizmos.color = node.obj.color;
                Gizmos.DrawCube(new Vector3(node.rect.x + node.obj.rect.width / 2, 1, node.rect.y + node.obj.rect.height / 2), new Vector3(node.obj.rect.width, 1, node.obj.rect.height));
            }
        }
#endif
    }
}
