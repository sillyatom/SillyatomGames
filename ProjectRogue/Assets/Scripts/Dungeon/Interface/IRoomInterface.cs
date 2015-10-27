using System.Collections.Generic;
using UnityEngine;

public class IRoomInterface
{
    public List<BSPNode> connectedNodes;
    public List<ExitConfig> exitConfig;
    public CustomRect rect { get; set; }
    public bool hasSingleExit = false;
    public bool isBlocked = false;
    public BSPNode[] childNodes;
    public CustomRect roomRect;
    public Color color;
    public int regionId;
    public int id;
}