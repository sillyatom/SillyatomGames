using UnityEngine;

public class DungeonMapGenerator : MonoBehaviour
{

    public int minPackWidth = 30;
    public int maxPackWidth = 200;

    public int minPackHeight = 30;
    public int maxPackHeight = 200;

    public int quadSize;
    public int borderSize;
    public int wallHeight;

    public int numOfPacks = 8;

    private GameObject _floor;
    SteerRoomPacker _packer;

    void Start()
    {
        _floor = gameObject.transform.FindChild("Floor").gameObject;
        _packer = new SteerRoomPacker(numOfPacks, minPackWidth, minPackHeight, maxPackWidth, maxPackHeight, quadSize);

        foreach (var pack in _packer.packs)
        {
            Room room = new Room("Prefabs/Room", Mathf.CeilToInt(pack.rect.width), Mathf.CeilToInt(pack.rect.height), quadSize, borderSize, wallHeight, null);
            room.generateMesh();
            room.gameObject.transform.position = new Vector3(pack.rect.x, 1, pack.rect.y);
        }

        CreateMapFloor(_packer.GetMapRect());
    }

    void CreateMapFloor(Rect mapRect)
    {
        Mesh floorMesh = _floor.GetComponent<MeshFilter>().mesh;
        floorMesh.Clear();

        CustomMesh floorMeshData = new CustomMesh(Mathf.CeilToInt(mapRect.width) + 250, Mathf.CeilToInt(mapRect.height) + 250, Mathf.CeilToInt((10.0f / 500.0f) * Mathf.Max(mapRect.width, mapRect.height)), borderSize);
        floorMeshData.Generate();
        floorMesh.vertices = floorMeshData.getVertices();
        floorMesh.triangles = floorMeshData.getTriangles();
        floorMesh.uv = floorMeshData.getUVs();

        MeshCollider floorCollider = _floor.AddComponent<MeshCollider>();
        floorCollider.sharedMesh = floorMesh;

        _floor.transform.position = new Vector3(mapRect.center.x - floorMeshData.width / 2, 0, mapRect.center.y - floorMeshData.height / 2);
    }

    void OnDrawGizmos()
    {
        if (_packer != null)
        {
            foreach (var pack in _packer.packs)
            {
                DrawNodeRect(pack.rect, Color.green);
            }
        }
    }

    void DrawNodeRect(Rect rect, Color color)
    {
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y + rect.height), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y), color);
        Debug.DrawLine(new Vector3(rect.x + rect.width, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
    }
}
