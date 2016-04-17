using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MainScreen : SceneMonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void authenticateLocalPlayer();

    public Button playBtn;

    override public void Init()
    {
        base.Init();
        playBtn.onClick.AddListener(OnPlay);    
    }

    override protected void OnGameEvent(GameEvent gEvent)
    {
        if (
            gEvent.type == GameEvent.GC_AUTH_SUCCESS
            || gEvent.type == GameEvent.GC_AUTH_FAILED)
        {
            MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
        }
    }

    private void OnPlay()
    {
        #if UNITY_EDITOR
        MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
        #else
        authenticateLocalPlayer();
        #endif
        playBtn.enabled = false;
    }
}
