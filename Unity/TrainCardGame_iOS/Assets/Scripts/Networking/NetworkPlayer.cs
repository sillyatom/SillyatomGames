using UnityEngine;
using System.Collections;
using System;

[Serializable]
public class NetworkPlayer
{
    public string Name{ get; set; }

    public string PlayerId{ get; set; }

    public override string ToString()
    {
        return string.Format("[NetworkPlayer: Name={0}, PlayerId={1}]", Name, PlayerId);
    }
}