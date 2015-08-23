using UnityEngine;

[RequireComponent (typeof(MeshFilter), typeof(MeshRenderer))]
public class FogOfWar : MonoBehaviour 
{
    Transform _player;

    CustomPlane _plane;
    Mesh _mesh;

    public int explorerRangeX;
    public int explorerRangeY;

    void Start()
    {
        _player = GameObject.FindGameObjectWithTag("Player").transform;

        _mesh = GetComponent<MeshFilter>().mesh;
        _mesh.Clear();

        _plane = new CustomPlane(512, 512, 16);
        _mesh.vertices = _plane.getVertices();
        _mesh.triangles = _plane.getTriangles();
        _mesh.uv = _plane.getUVs();
        _mesh.colors32 = _plane.getColors();

        gameObject.transform.Translate(new Vector3(-_plane.width/2, 0, -_plane.height/2));
        MeshCollider collider = gameObject.AddComponent<MeshCollider>();
        collider.sharedMesh = _mesh;
    }

    void OnRenderObject()
    {
        Ray ray = new Ray(_player.position + Vector3.up * 20.0f, Vector3.down);
        Debug.DrawRay(_player.position + Vector3.up * 20.0f, Vector3.down * 5.0f, Color.white);
        RaycastHit hitInfo;
        if (Physics.Raycast(ray, out hitInfo, 5.0f))
        {
            Explore(hitInfo.textureCoord);
        }
    }

    void Explore(Vector2 texCoord)
    {
        Vector2 quadIndex = _plane.GetPolygonIndexFromTexCoord(texCoord);

        int indexX = (int)quadIndex.x;
        int indexY = (int)quadIndex.y;

        for (int x = -explorerRangeX; x < explorerRangeX; x++)
        {
            for (int y = -explorerRangeY; y < explorerRangeY; y++)
            {
                _plane.UpdatePolygonColorAtIndex(indexX + x, indexY + y, new Color32(255, 255, 255, 0));
            }
        }
        
        _mesh.colors32 = _plane.getColors();
    }
}
