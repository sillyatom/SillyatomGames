using UnityEngine;
using System.Collections;

public class MeshScript : MonoBehaviour
{

	// Use this for initialization
	void Start ()
    {
        gameObject.AddComponent<MeshFilter>();
        gameObject.AddComponent<MeshRenderer>();
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        mesh.vertices = new Vector3[] 
        {
            new Vector3(0, 0, 0), new Vector3(0, 5, 0), new Vector3(5, 0, 0),
            new Vector3(5, 5, 0)
        };
        mesh.triangles = new int[] 
        {
            0, 1, 2,
            2, 1, 3
        };
        mesh.colors32 = new Color32[]
        {
            new Color32(255, 0, 0, 255),
            new Color32(0, 255, 0, 255),
            new Color32(0, 0, 255, 255),
            new Color32(0, 0, 0, 255)
        };
        Renderer renderer = gameObject.GetComponent<Renderer>();
        //Shader shader = Shader.Find("Custom/NewShader");
        Shader shader = Shader.Find("Custom/VertexAlphaFow");
        renderer.material = new Material(shader);
    }
	
	// Update is called once per frame
	void Update ()
    {
	
	}
}
