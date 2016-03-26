using UnityEngine;
using System.Collections;

public class MultiplayerMainGame : SceneMonoBehaviour
{
    override public void Init()
    {
        base.Init();
        BridgeDebugger.Log("[ MultiplayerMainGame ] - Init()");
    }
}
