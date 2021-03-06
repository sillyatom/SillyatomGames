﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class MatchSelectionScreen : SceneMonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void findMatches();

    public RectTransform gameLayout;

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
            MultiplayerMainGame game = gameLayout.gameObject.AddComponent<MultiplayerMainGame>();

            //reference dealer
            {
                GameObject[] gos = GameObject.FindGameObjectsWithTag("Dealer");
                if (gos.Length > 1)
                {
                    throw(new UnityException("Multiple Dealers Found !!! "));
                }
                game.dealer = gos[0].GetComponent<Dealer>();
            }
            //reference network
            {
                GameObject[] gos = GameObject.FindGameObjectsWithTag("Network");
                if (gos.Length > 1)
                {
                    throw(new UnityException("Multiple Network Objects Found !!! "));
                }
                game.network = gos[0].GetComponent<Networking>();
            }

            #if UNITY_EDITOR
            MoveToScene(TagConstants.TAG_MAIN_GAME, true);
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
            SinglePlayerMainGame game = gameLayout.gameObject.AddComponent<SinglePlayerMainGame>();

            //reference dealer
            {
                GameObject[] gos = GameObject.FindGameObjectsWithTag("Dealer");
                if (gos.Length > 1)
                {
                    throw(new UnityException("Multiple Dealers Found !!! "));
                }
                game.dealer = gos[0].GetComponent<Dealer>();
            }

            MoveToScene(TagConstants.TAG_MAIN_GAME, true);
        }
        btn.enabled = false;
    }

    override protected void OnGameEvent(GameEvent gEvent)
    {
        if (gEvent.type == GameEvent.MATCH_STARTED)
        {
            MoveToScene(TagConstants.TAG_MAIN_GAME, true);
        }
    }
}
