using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameSelectionScreen : SceneMonoBehaviour
{
    public Button autoMatchBtn;
    public Button inviteBtn;
    public Button localBtn;
    public Button singleBtn;

    public override void Init()
    {
        base.Init();

        autoMatchBtn.onClick.AddListener(AutoMatch);
        inviteBtn.onClick.AddListener(Invite);
        localBtn.onClick.AddListener(LocalMatch);
        singleBtn.onClick.AddListener(SingleGame);
    }

    private void AutoMatch()
    {
        OnSelectMatch(autoMatchBtn);
    }

    private void Invite()
    {
        OnSelectMatch(inviteBtn);
    }

    private void LocalMatch()
    {
        OnSelectMatch(localBtn);
    }

    private void SingleGame()
    {
        OnSelectMatch(singleBtn);
    }

    private void OnSelectMatch(Button btn)
    {
        if (btn == autoMatchBtn)
        {
            MultiPlayerController.Instance.StartchMatchMaking((uint)(NetworkConstants.ENUM_GameTypes.TRAIN));
        }

        btn.enabled = false;
    }
}
