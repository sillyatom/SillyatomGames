using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MainScreen : GameScreenMonoBehaviour
{
    public Button playBtn;
    private Networking network;
    private int _signingStatus;

    override public void Init()
    {
        base.Init();
        network = SingletonManager.reference.network;
        SingletonManager.reference.popupManager.AddConnectingPopup();
    }

    private void AuthGC()
    {
        StartCoroutine(StartSignInProcess());
    }

    private IEnumerator StartSignInProcess()
    {
        SingletonManager.reference.popupManager.AddConnectingPopup();
        yield return new WaitForSeconds(1.0f);
        network.SignInGC();
    }

    override protected void OnInGameEvent(InGameEvent evt)
    {
        switch (evt.type)
        {
            case InGameEvent.GC_STATUS:
                _signingStatus = evt.status;
                SingletonManager.reference.popupManager.RemoveActivePopup();
                playBtn.onClick.AddListener(OnPlay);
                break;
        }
    }

    public override void OnSetToView()
    {
        base.OnSetToView();
        SingletonManager.reference.hud.gameObject.SetActive(true);
    }

    private void OnPlay()
    {
        if (_signingStatus == NetworkConstants.GC_SIGNING_STATUS_SUCCEEDED)
        {
            SingletonManager.reference.popupManager.RemoveActivePopup();
            MoveToScene(TagConstants.TAG_GAME_SELECTION_SCREEN);
        }
        else if (_signingStatus == NetworkConstants.GC_SIGNING_STATUS_NOT_INITIALIZED)
        {
            AuthGC();
        }
        else
        {
            BridgeDebugger.Log("[ Missed Case Main Screen ] ");
        }
    }
}
