using UnityEngine;

class Room
{
    public GameObject gameObject { get; set; }
    public int floorIndex { get; set; }
    public int roomIndex { get; set; }
    public int width { get; set; }
    public int height { get; set; }
    public int quadSize { get; set; }
    public int borderSize { get; set; }

    private Mesh _ceilingMesh;
    private Mesh _wallMesh;

    private GameObject _ceiling;
    private GameObject _wall;

    public RoomMesh meshData { get; set; }

    public Room(string prefab, int width, int height, int quadSize, int borderSize)
    {
        this.width = width;
        this.height = height;
        this.borderSize = borderSize;
        this.quadSize = quadSize;

        gameObject = GameObject.Instantiate(Resources.Load(prefab) as GameObject);

        _ceiling = gameObject.GetComponent<RoomScript>().border;
        _ceilingMesh = gameObject.GetComponent<RoomScript>().border.GetComponent<MeshFilter>().mesh;
        _ceilingMesh.Clear();

        _wall = gameObject.GetComponent<RoomScript>().wall;
        _wallMesh = gameObject.GetComponent<RoomScript>().wall.GetComponent<MeshFilter>().mesh;
        _wallMesh.Clear();
    }

    protected virtual RoomMesh getRoomData()
    {
        return new RoomMesh(width, height, quadSize, borderSize);
    }

    public void generateMesh()
    {
        meshData = getRoomData();
        _ceilingMesh.vertices = meshData.roomBorderMesh.getVertices();
        _ceilingMesh.triangles = meshData.roomBorderMesh.getTriangles();
        _ceilingMesh.uv = meshData.roomBorderMesh.getUVs();
        _ceilingMesh.colors32 = meshData.roomBorderMesh.getColors();

        MeshCollider collider = _ceiling.AddComponent<MeshCollider>();
        collider.sharedMesh = _ceilingMesh;

        _wallMesh.vertices = meshData.roomBorderMesh.getWallVertices();
        _wallMesh.triangles = meshData.roomBorderMesh.getWallTriangles();
        _wallMesh.uv = meshData.roomBorderMesh.getWallUVs();

        MeshCollider wallCollider = _wall.AddComponent<MeshCollider>();
        wallCollider.sharedMesh = _wallMesh;
    }
}
