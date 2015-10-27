public enum ExitConfig
{
    LEFT = 1,
    RIGHT = 2,
    TOP = 3,
    BOTTOM = 4
}

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

    public RoomMesh(int width, int height, int quadSize, int borderSize, int wallHeight, BSPNode data)
    {
        _borderMesh = new RoomBorderMesh(width, height, quadSize, borderSize, wallHeight, data);
        _borderMesh.Generate();
        _floorMesh = new FloorMesh(width, height, 4, borderSize, _borderMesh.getMap());
        _floorMesh.Generate();
    }
}
