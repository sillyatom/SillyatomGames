using UnityEngine;

[RequireComponent (typeof(MeshFilter), typeof(MeshRenderer))]
public class FogOfWar : MonoBehaviour 
{
    Transform _player;

    public int explorerRangeX;
    public int explorerRangeY;

    void Start()
    {
        _player = GameObject.FindGameObjectWithTag("Player").transform;

        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.Clear();

        CustomPlane plane = new CustomPlane(512, 512, 16);
        mesh.vertices = plane.getVertices();
        mesh.triangles = plane.getTriangles();
        mesh.uv = plane.getUVs();
        mesh.colors32 = plane.getColors();

        gameObject.transform.Translate(new Vector3(-plane.width/2, 0, -plane.height/2));
        MeshCollider collider = gameObject.AddComponent<MeshCollider>();
        collider.sharedMesh = mesh;
    }

    void Update()
    {
        Ray ray = new Ray(_player.position + Vector3.up * 20.0f, Vector3.down);
        Debug.DrawRay(_player.position + Vector3.up * 20.0f, Vector3.down * 5.0f, Color.white);
        RaycastHit hitInfo;
        if (Physics.Raycast(ray, out hitInfo, 5.0f))
        {
            Debug.Log(hitInfo.textureCoord);
        }
    }
}
