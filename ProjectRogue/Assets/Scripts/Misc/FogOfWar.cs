using UnityEngine;
using System.Collections;

public class Tile
{
    public int x { get; set; }
    public int y { get; set; }
    public int size { get; set; }
    public byte alpha { get; set; }

    public Tile(int xIndex, int yIndex, int gridSize, byte pixelAlpha)
    {
        x = xIndex;
        y = yIndex;
        size = gridSize;
        alpha = pixelAlpha;
    }
}

public class Explore
{
    private Tile[,] _tiles;

    public Explore(Texture2D tex, int gridSize)
    {
        int width = tex.width;
        int height = tex.height;

        _tiles = new Tile[width, height];

        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                _tiles[x, y] = new Tile(x, y, gridSize, 255);
            }
        }
    }

    public void ExploreAt(int tileX, int tileY, byte alpha, int rangeX, int rangeY)
    {
        
    }
}

public class FogOfWar : MonoBehaviour 
{
    public Transform _player;
    public LayerMask _mask;

    private Explore _explorer;
    private Texture2D _texture;

    public int explorerRangeX;
    public int explorerRangeY;

    void Start()
    {
        _texture = gameObject.GetComponent<Renderer>().material.mainTexture as Texture2D;
        _explorer = new Explore(_texture, 16);
    }

    void OnRenderObject()
    {
        Ray ray = new Ray(_player.position + Vector3.up * 20.0f, Vector3.down);
        RaycastHit hitInfo;
        if (Physics.Raycast(ray, out hitInfo, 50.0f, _mask))
        {
            Explore(hitInfo.textureCoord);
        }
    }

    void Explore(Vector2 texCoord)
    {
        int tileX = Mathf.CeilToInt(texCoord.x * _texture.width);
        int tileY = Mathf.CeilToInt(texCoord.y * _texture.height);
        //_explorer.ExploreAt(tileX, tileY, 255, explorerRangeX, explorerRangeY);
        Mesh mesh = gameObject.GetComponent<MeshFilter>().mesh;

        Color32[] color = mesh.colors32;
        Color32[] newColor = new Color32[color.Length];
        Debug.Log(color.Length);
        for (int index = 0; index < color.Length; index++)
        {
            newColor[index] = color[index];
            newColor[index].a = 50;
        }
        mesh.colors32 = newColor;
    }
}
