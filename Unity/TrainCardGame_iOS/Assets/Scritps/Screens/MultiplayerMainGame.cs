using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MultiplayerMainGame : SceneMonoBehaviour
{
    public Dealer dealer;
    private List<Player> _players;

    override public void Init()
    {
        base.Init();
        BridgeDebugger.Log("[ MultiplayerMainGame ] - Init()");

        //Init Dealer
        dealer.Init();
    }
}
