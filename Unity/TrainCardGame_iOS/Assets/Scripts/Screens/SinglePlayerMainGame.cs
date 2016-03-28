using UnityEngine;
using System.Collections;

public class SinglePlayerMainGame : SceneMonoBehaviour
{
    override public void Init()
    {
        base.Init();
        BridgeDebugger.Log("[ SinglePlayerMainGame ] - Init()");
    }
}
