using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MeshScript : MonoBehaviour
{

	// Use this for initialization
	void Start ()
    {
        gameObject.AddComponent<MeshFilter>();
        gameObject.AddComponent<MeshRenderer>();
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.Clear();

        CustomPlane plane = new CustomPlane(512, 512, 16);
        mesh.vertices = plane.getVertices();
        mesh.triangles = plane.getTriangles();
        mesh.uv = plane.getUVs();
        mesh.colors32 = plane.getColors();

        Renderer renderer = gameObject.GetComponent<Renderer>();
        Shader shader = Shader.Find("Custom/VertexAlphaFow");
        renderer.material = new Material(shader);
    }

    // Update is called once per frame
    void Update ()
    {
	
	}
}
