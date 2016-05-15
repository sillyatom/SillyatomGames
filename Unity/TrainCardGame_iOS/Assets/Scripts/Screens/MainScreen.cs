using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MainScreen : SceneMonoBehaviour
{
    
    public Button playBtn;

    override public void Init()
    {
        base.Init();
        playBtn.onClick.AddListener(OnPlay);
    }

    private void AuthGC()
    {
        SingletonManager.reference.popupManager.CreateGenericPopup("Connecting", "Signing in Game Center");
        SingletonManager.reference.network.SignInGC();
    }

    override protected void OnGameEvent(GameEvent gEvent)
    {
        if (
            gEvent.type == GameEvent.GC_AUTH_SUCCESS
            || gEvent.type == GameEvent.GC_AUTH_FAILED)
        {
            SingletonManager.reference.popupManager.RemoveActivePopup();
            MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
        }
    }

    private void OnPlay()
    {
        MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
        playBtn.enabled = false;
    }
}
