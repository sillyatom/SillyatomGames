using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class GameEvent
{
    private string _type;
    public string type
    {
        get
        {
            return _type;
        }
        set
        {
            _type = value;
        }
    }

    public int width { get; set; }
    public int height { get; set; }
    public int gridSize { get; set; }

    public const string GENERATE_MAP= "GenerateMap";
    public const string START_POOLING= "StartPooling";
    public const string BUILD_NAVMESH_COMPLETE = "NavMeshGenerated";
    public const string GENERATE_FOW = "GenerateFOW";

    public GameEvent(string type)
    {
        _type = type;
    }

    public GameEvent(string pType, int pWidth, int pHeight, int pGridSize)
    {
        _type = pType;
        width = pWidth;
        height = pHeight;
        gridSize = pGridSize;
    }
}
