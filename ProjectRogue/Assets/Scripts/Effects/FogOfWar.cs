using UnityEngine;

[RequireComponent (typeof(MeshFilter), typeof(MeshRenderer))]
public class FogOfWar : MonoBehaviour 
{
    Transform _player;

    CustomPlane _plane;
    Mesh _mesh;

    public int explorerRangeX;
    public int explorerRangeY;

    TVec2<int> _lastExploredIndex;

    void Awake()
    {
        _player = GameObject.FindGameObjectWithTag("Player").transform;

        _mesh = GetComponent<MeshFilter>().mesh;
        _mesh.Clear();

        Events.instance.AddListener<GameEvent>(GenerateFogOfWar);
    }

    void GenerateFogOfWar(GameEvent e)
    {
        if (e.type == GameEvent.GENERATE_FOW)
        {
            Events.instance.RemoveListener<GameEvent>(GenerateFogOfWar);

            _plane = new CustomPlane(e.width * e.gridSize, e.height * e.gridSize, (e.width * 8 / 512));
            _mesh.vertices = _plane.getVertices();
            _mesh.triangles = _plane.getTriangles();
            _mesh.uv = _plane.getUVs();
            _mesh.colors32 = _plane.getColors();

            gameObject.transform.Translate(new Vector3(-_plane.width / 2, 0, -_plane.height / 2));
            MeshCollider collider = gameObject.AddComponent<MeshCollider>();
            collider.sharedMesh = _mesh;

            _lastExploredIndex = new TVec2<int>(-1, -1);
        }
    }

    void OnRenderObject()
    {
        Ray ray = new Ray(_player.position + Vector3.up * 20.0f, Vector3.down);
        RaycastHit hitInfo;
        if (Physics.Raycast(ray, out hitInfo, 5.0f))
        {
            Explore(gameObject.transform.InverseTransformPoint(hitInfo.point));
        }
    }

    void UpdatePolygonColorAtIndex(int indexX, int indexY, int rangeX, int rangeY, byte alpha, bool isBorder = false)
    {
        for (int x = -rangeX; x <= rangeX; x++)
        {
            for (int y = -rangeY; y <= rangeY; y++)
            {
                if (isBorder)
                {
                    if (x != -rangeX && x != rangeX && y != -rangeY && y != rangeY)
                    {
                        continue;
                    }
                }
                if (
                    _plane.isWithinRange((indexX + x), (indexY + y)) &&
                    _plane[indexX+x, indexY+y].getAlpha() > alpha)
                {
                    _plane.UpdatePolygonColorAtIndex(indexX + x, indexY + y, new Color32(0, 0, 0, alpha));
                }
            }
        }
    }

    void Explore(Vector3 position)
    {
        Vector2 quadIndex = _plane.GetPolygonIndexFromPosition(position);

        int indexX = (int)quadIndex.x;
        int indexY = (int)quadIndex.y;

        if (_lastExploredIndex.x == indexX && _lastExploredIndex.y == indexY)
        {
            //don't update
        }
        else
        {
            UpdatePolygonColorAtIndex(indexX, indexY, explorerRangeX + 1, explorerRangeY + 1, 64, true);
            UpdatePolygonColorAtIndex(indexX, indexY, explorerRangeX, explorerRangeY, 0, false);

            UpdatePolygonColorAtIndex(indexX, indexY, explorerRangeX + 3, explorerRangeY, 64, true);
            UpdatePolygonColorAtIndex(indexX, indexY, explorerRangeX + 2, explorerRangeY - 1, 0, false);

            UpdatePolygonColorAtIndex(indexX, indexY, explorerRangeX, explorerRangeY + 2, 64, true);
            UpdatePolygonColorAtIndex(indexX, indexY, explorerRangeX - 1, explorerRangeY + 1, 0, false);

            _mesh.colors32 = _plane.getColors();

            _lastExploredIndex.Set(indexX, indexY);
        }
    }
}
