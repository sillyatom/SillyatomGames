﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SceneTransitionManager : SceneMonoBehaviour
{
    private RectTransform _activeScreen;
    public RectTransform startScreen;
    public List<RectTransform> screens;

    private int SPACE = 2000;

    public override void Init()
    {
        base.Init();
        SetActiveScreen(startScreen);
    }

    public void SetActiveScreen(RectTransform screen)
    {
        _activeScreen = screen;
        RearrangeScreens();
    }

    public void SetActiveScreen(string tag)
    {
        GameObject go = GameObject.FindGameObjectWithTag(tag);
        SetActiveScreen(go.GetComponent<RectTransform>());
        SceneMonoBehaviour sceneMono = go.GetComponent<SceneMonoBehaviour>();
        bool isInitialized = sceneMono.isInitialized;
        if (!isInitialized)
        {
            if (sceneMono != null)
            {
                sceneMono.Init();
            }
            else
            {
                BridgeDebugger.Log(string.Format(" Screen {0} doesn't have Scene Monobehaviour to Init()", go.name));
            }
        }
        if (sceneMono != null)
        {
            sceneMono.OnSetToView();
        }
    }

    private void RearrangeScreens()
    {
        Vector3 position = Vector3.zero;
        foreach (RectTransform screen in screens)
        {
            if (screen == _activeScreen)
            {
                screen.localPosition = Vector3.zero;
            }
            else
            {
                position.x += screen.rect.width + SPACE;
                screen.localPosition = position;
            }
        }
    }
}
