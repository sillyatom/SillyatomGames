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
    public int wallHeight { get; set; }

    private GameObject _ceiling;
    private Mesh _ceilingMesh;

    private GameObject _floor;
    private Mesh _floorMesh;

    private GameObject _wall;
    private Mesh _wallMesh;


    public RoomMesh meshData { get; set; }

    public Room(string prefab, int width, int height, int quadSize, int borderSize, int wallHeight)
    {
        this.width = width;
        this.height = height;
        this.borderSize = borderSize;
        this.quadSize = quadSize;
        this.wallHeight = wallHeight;

        gameObject = GameObject.Instantiate(Resources.Load(prefab) as GameObject);

        _ceiling = gameObject.GetComponent<RoomScript>().border;
        _ceiling.transform.Translate(new Vector3(0.0f, wallHeight, 0.0f));
        _ceilingMesh = gameObject.GetComponent<RoomScript>().border.GetComponent<MeshFilter>().mesh;
        _ceilingMesh.Clear();

        _wall = gameObject.GetComponent<RoomScript>().wall;
        _wall.transform.Translate(new Vector3(0.0f, wallHeight, 0.0f));
        _wallMesh = gameObject.GetComponent<RoomScript>().wall.GetComponent<MeshFilter>().mesh;
        _wallMesh.Clear();

        _floor = gameObject.GetComponent<RoomScript>().floor;
        _floorMesh = gameObject.GetComponent<RoomScript>().floor.GetComponent<MeshFilter>().mesh;
        _floorMesh.Clear();
    }

    protected virtual RoomMesh getRoomData()
    {
        return new RoomMesh(width, height, quadSize, borderSize, wallHeight);
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

        _floorMesh.vertices = meshData.floorMesh.getVertices();
        _floorMesh.triangles = meshData.floorMesh.getTriangles();
        _floorMesh.uv = meshData.floorMesh.getUVs();

        MeshCollider floorCollider = _floor.AddComponent<MeshCollider>();
        floorCollider.sharedMesh = _floorMesh;
    }
}
