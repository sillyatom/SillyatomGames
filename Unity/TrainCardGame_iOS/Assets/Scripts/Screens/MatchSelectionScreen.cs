using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MatchSelectionScreen : SceneMonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void findMatches();

    public RectTransform multiplayerLayout;
    public RectTransform singleplayerLayout;

    public Button autoMatchBtn;
    public Button inviteBtn;
    public Button singlePlayerBtn;

    override public void Init()
    {
        base.Init();

        autoMatchBtn.onClick.AddListener(() =>
            {
                OnClick(autoMatchBtn);
            });
        inviteBtn.onClick.AddListener(() =>
            {
                OnClick(inviteBtn);
            });
        singlePlayerBtn.onClick.AddListener(() =>
            {
                OnClick(singlePlayerBtn);
            });
    }

    public void OnClick(Button btn)
    {
        if (btn == autoMatchBtn)
        {
            multiplayerLayout.gameObject.SetActive(true);
            singleplayerLayout.gameObject.SetActive(false);

            #if UNITY_EDITOR
            MoveToScene(TagConstants.TAG_MAIN_MULTIPLAYER_GAME, true);
            #else
            findMatches();
            #endif
        }
        else if (btn == inviteBtn)
        {
            //TODO
        }
        else if (btn == singlePlayerBtn)
        {
            multiplayerLayout.gameObject.SetActive(false);
            singleplayerLayout.gameObject.SetActive(true);
            #if UNITY_EDITOR
            MoveToScene(TagConstants.TAG_MAIN_SINGLEPLAYER_GAME, true);
            #else 
            #endif
        }
        btn.enabled = false;
    }

    override protected void OnGameEvent(GameEvent gEvent)
    {
        if (gEvent.type == GameEvent.MATCH_STARTED)
        {
            MoveToScene(TagConstants.TAG_MAIN_MULTIPLAYER_GAME, true);
        }
    }
}
