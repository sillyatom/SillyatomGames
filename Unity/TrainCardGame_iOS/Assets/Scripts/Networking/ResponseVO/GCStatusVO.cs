using UnityEngine;
using System.Collections;

[System.Serializable]
public class GCStatusVO
{
    public int SigningStatus{ get; set; }

    public string uid{ get; set; }

    public string localPlayerId{ get; set; }

    public string localPlayerName{ get; set; }
}
