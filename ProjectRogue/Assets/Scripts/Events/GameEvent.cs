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

    public const string GENERATE_MAP= "GenerateMap";
    public const string START_POOLING= "StartPooling";
    public const string BUILD_NAVMESH_COMPLETE = "NavMeshGenerated";

    public GameEvent(string type)
    {
        _type = type;
    }
}
