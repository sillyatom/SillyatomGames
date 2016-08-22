using UnityEngine;
using System.Collections;

public interface IRemoteVO
{
    string api{ get; set; }
}

public class RemoteInitVO : IRemoteVO
{
    public string api{ get; set; }

    public string id{ get; set; }

    public int tokens{ get; set; }

    public int xp{ get; set; }
}