using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using System.Collections;

class Room
{
    public GameObject gameObject { get; set; }
    public int floorIndex { get; set; }
    public int roomIndex { get; set; }
    public int width { get; set; }
    public int height { get; set; }
    public int quadSize { get; set; }
    public int borderSize { get; set; }

    private Mesh _mesh;
    private Mesh _wallMesh;
    public BorderMesh meshData { get; set; }

    public Room(string prefab, int width, int height, int quadSize, int borderSize)
    {
        this.width = width;
        this.height = height;
        this.borderSize = borderSize;
        this.quadSize = quadSize;

        gameObject = GameObject.Instantiate(Resources.Load(prefab) as GameObject);

        _mesh = gameObject.GetComponent<RoomScript>().roomMesh.mesh;
        _mesh.Clear();

        _wallMesh = gameObject.GetComponent<RoomScript>().wallMesh.mesh;
        _wallMesh.Clear();
    }

    protected virtual BorderMesh getRoomData()
    {
        return new RoomBorderMesh(width, height, quadSize, borderSize);
    }

    public void generateMesh()
    {
        meshData = getRoomData();
        _mesh.vertices = meshData.getVertices();
        _mesh.triangles = meshData.getTriangles();
        _mesh.uv = meshData.getUVs();
        _mesh.colors32 = meshData.getColors();

        MeshCollider collider = gameObject.AddComponent<MeshCollider>();
        collider.sharedMesh = _mesh;

        _wallMesh.vertices = meshData.getWallVertices();
        _wallMesh.triangles = meshData.getWallTriangles();
        _wallMesh.uv = meshData.getWallUVs();

        MeshCollider wallCollider = gameObject.AddComponent<MeshCollider>();
        wallCollider.sharedMesh = _wallMesh;
    }
}
