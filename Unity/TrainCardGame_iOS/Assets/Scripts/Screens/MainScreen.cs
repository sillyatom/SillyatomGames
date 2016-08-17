using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MainScreen : SceneMonoBehaviour
{
    public Button playBtn;
    private Networking network;
    private int _signingStatus;

    override public void Init()
    {
        base.Init();
        network = SingletonManager.reference.network;
    }

    private void AuthGC()
    {
        SingletonManager.reference.popupManager.CreateGenericPopup("Connecting", "Signing in Game Center");
        StartCoroutine(StartSignInProcess());
    }

    private IEnumerator StartSignInProcess()
    {
        yield return new WaitForSeconds(1.0f);
        network.SignInGC();
    }

    protected override void OnGameEvent(GameEvent gEvent)
    {
        base.OnGameEvent(gEvent);
        BridgeDebugger.Log(" [ MainScreen OnGameEvent ] " + gEvent.type);
    }

    override protected void OnInGameEvent(InGameEvent evt)
    {
        switch (evt.type)
        {
            case InGameEvent.GC_STATUS:
                _signingStatus = evt.status;
                playBtn.onClick.AddListener(OnPlay);
                break;
        }
    }

    private void OnPlay()
    {
        BridgeDebugger.Log("status : " + _signingStatus);
        if (_signingStatus == NetworkConstants.GC_SIGNING_STATUS_SUCCEEDED)
        {
            SingletonManager.reference.popupManager.RemoveActivePopup();
            MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
        }
        else if (_signingStatus == NetworkConstants.GC_SIGNING_STATUS_NOT_INITIALIZED)
        {
            AuthGC();
        }
        else
        {
            BridgeDebugger.Log("Missed Case Main Screen");
        }
    }
}
