using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MatchSelectionScreen : GameScreenMonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void findMatches(bool isHost, int matchType);

    public RectTransform gameLayout;

    public Button hostMatch;
    public Button autoMatchBtn;
    public Button inviteBtn;
    public Button singlePlayerBtn;

    public override void OnSetToView()
    {
        base.OnSetToView();

        hostMatch.enabled = true;
        autoMatchBtn.enabled = true;
        inviteBtn.enabled = true;
        singlePlayerBtn.enabled = true;
    }

    override public void Init()
    {
        base.Init();
        hostMatch.onClick.AddListener(() =>
            {
                OnClick(hostMatch);
            });
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

    private void CreateMultiplayerGame()
    {
        MultiplayerMainGame game = gameLayout.gameObject.AddComponent<MultiplayerMainGame>();

        //reference dealer
        {
            GameObject[] gos = GameObject.FindGameObjectsWithTag("Dealer");
            if (gos.Length > 1)
            {
                throw(new UnityException("Multiple Dealers Found !!! "));
            }
            game.dealer = gos[0].AddComponent<Dealer>();
        }

        game.network = SingletonManager.reference.network;
    }

    public void OnClick(Button btn)
    {
        if (btn == autoMatchBtn)
        {
            CreateMultiplayerGame();
            #if UNITY_EDITOR
            MoveToScene(TagConstants.TAG_MAIN_GAME);
            #else
            findMatches(false, GameSelectionScreen.GetSweepCount());
            #endif
        }
        else if (btn == hostMatch)
        {
            CreateMultiplayerGame();
            #if UNITY_EDITOR
            MoveToScene(TagConstants.TAG_MAIN_GAME);
            #else
            findMatches(true, GameSelectionScreen.GetSweepCount());
            #endif
        }
        else if (btn == inviteBtn)
        {
            //TODO
        }
        else if (btn == singlePlayerBtn)
        {
            SinglePlayerMainGame game = gameLayout.gameObject.AddComponent<SinglePlayerMainGame>();

            //reference dealer
            {
                GameObject[] gos = GameObject.FindGameObjectsWithTag("Dealer");
                if (gos.Length > 1)
                {
                    throw(new UnityException("Multiple Dealers Found !!! "));
                }
                game.dealer = gos[0].AddComponent<Dealer>();
            }

            game.network = SingletonManager.reference.network;

            MoveToScene(TagConstants.TAG_MAIN_GAME);
        }

        btn.enabled = false;
    }

    override protected void OnGameEvent(GameEvent gEvent)
    {
        BridgeDebugger.Log("[ MatchSelectionScreen OnGameEvent type ] " + gEvent.type);

        if (gEvent.type == GameEvent.DETERMINING_HOST)
        {
            SingletonManager.reference.popupManager.CreateGenericPopup("Host Selection", "Determining Host...");
        }
        else if (gEvent.type == GameEvent.MATCH_STARTED)
        {
            SingletonManager.reference.popupManager.RemoveActivePopup();
            MoveToScene(TagConstants.TAG_MAIN_GAME);
        }
    }
}
