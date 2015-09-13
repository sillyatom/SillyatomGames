public class RoomMesh
{
    private RoomBorderMesh _borderMesh;

    public RoomBorderMesh roomBorderMesh
    {
        get { return _borderMesh; }
        set { _borderMesh = value; }
    }

    private FloorMesh _floorMesh;

    public FloorMesh floorMesh
    {
        get { return _floorMesh; }
        set { _floorMesh = value; }
    }

    public RoomMesh(int width, int height, int quadSize, int borderSize, int wallHeight)
    {
        _borderMesh = new RoomBorderMesh(width, height, quadSize, borderSize, wallHeight);
        _borderMesh.Generate();
        _floorMesh = new FloorMesh(width, height, quadSize, borderSize, _borderMesh.getMap());
        _floorMesh.Generate();
    }
}
