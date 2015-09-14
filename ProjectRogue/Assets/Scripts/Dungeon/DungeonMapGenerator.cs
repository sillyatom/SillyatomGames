﻿#define xDEBUG_PACKING
#define DRAW_VERTICES

using System.Collections.Generic;
using UnityEngine;

public class DungeonMapGenerator : MonoBehaviour
{
    public int quadSize;
    public int borderSize;
    public int wallHeight;

    public int minRoomWidth = 50;
    public int minRoomHeight = 50;
    public int maxRoomWidth = 200;
    public int maxRoomHeight = 200;

    public int numRooms = 8;

    private List<Room> _rooms;
    private RoomPacker _packer;

    void Start()
    {
        List<PackingObject> testObjects = new List<PackingObject>();
        for (int index = 0; index < numRooms; index++)
        {
            testObjects.Add(new PackingObject(testObjects.Count, new Rect(0, 0, Random.Range(minRoomWidth, maxRoomWidth), Random.Range(101, 101)), new Color(Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f, Random.Range(0, 255) / 255.0f)));
        }

        _packer = new RoomPacker(Mathf.CeilToInt(Mathf.Sqrt(numRooms / 2 * maxRoomWidth / 2 + numRooms / 2 * maxRoomHeight / 2)), Mathf.CeilToInt(Mathf.Sqrt(numRooms / 2 * maxRoomWidth / 2 + numRooms / 2 * maxRoomHeight / 2)));
        _packer.StartPacking(testObjects);
        _packer.Pack();

        _rooms = new List<Room>();
        foreach (BinNode node in _packer.packedNodes)
        {
            Room room = new Room("Prefabs/Room", Mathf.CeilToInt(node.obj.rect.width), Mathf.CeilToInt(node.obj.rect.height), quadSize, borderSize, wallHeight);
            room.generateMesh();
            room.gameObject.transform.position = new Vector3(node.rect.x, 1, node.rect.y);
            _rooms.Add(room);
        }
    }

    //To Draw Vertices
    void OnDrawGizmos()
    {
#if (DRAW_VERTICES)
        if (_rooms == null) return;
        foreach (Room room in _rooms)
        {
            int[,] map = room.meshData.roomBorderMesh.getMap();
            Vertex[,] vertices = room.meshData.roomBorderMesh.getCustomVertexData();
            int row = map.GetLength(0);
            int col = map.GetLength(1);

            for (int x = 0; x < row; x++)
            {
                for (int y = 0; y < col; y++)
                {
                    if (map[x, y] == 1)
                    {
                        Gizmos.color = Color.red;
                    }
                    else
                    {
                        Gizmos.color = Color.green;
                    }

                    Gizmos.DrawCube(room.gameObject.transform.position + vertices[x, y].position, Vector3.one * 0.5f);
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
