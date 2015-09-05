using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using System.Collections;

class Room
{
    public GameObject gameObject { get; set; }

    public Room(string prefab, int width, int height, int quadSize, int borderSize)
    {
        gameObject = GameObject.Instantiate(Resources.Load(prefab) as GameObject);
        Mesh _mesh = gameObject.GetComponent<MeshFilter>().mesh;
        _mesh.Clear();

        BorderMesh room = new BorderMesh(width, height, quadSize, borderSize);
        _mesh.vertices = room.getVertices();
        _mesh.triangles = room.getTriangles();
        _mesh.uv = room.getUVs();
        _mesh.colors32 = room.getColors();

        gameObject.transform.Translate(new Vector3(-room.width / 2, 0, -room.height / 2));
        MeshCollider collider = gameObject.AddComponent<MeshCollider>();
        collider.sharedMesh = _mesh;
    }
}
