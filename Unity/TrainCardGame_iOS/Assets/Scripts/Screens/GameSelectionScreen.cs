using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class GameSelectionScreen : GameScreenMonoBehaviour
{
    public Button next;
    public Button play;
    public Button previous;
    public List<GameObject> _train = new List<GameObject>();
    private static List<int> entryFees = new List<int>(){ 0, 100, 150, 300 };
    private static int selectedIndex = 0;
    private static List<int> matchTypes = new List<int>(){ 0, 3, 5, 10 };
    public float maskWidth = 600;
    float xOffset = 0.0f;

    public static int GetSweepCount()
    {
        return matchTypes[selectedIndex];
    }

    public static int GetEntryFees()
    {
        return entryFees[selectedIndex];
    }

    public static int GetSelectedGameIndex()
    {
        return selectedIndex;
    }

    public override void Init()
    {
        base.Init();
    }

    override public void Reset()
    {
        base.Reset();
        if (xOffset == 0.0f)
        {
            xOffset = _train[0].transform.localPosition.x;
        }
        for (int index = 0; index < _train.Count; index++)
        {
            Vector3 pos = _train[index].transform.localPosition;
            pos.x = index * maskWidth;
            pos.x += xOffset;
            _train[index].transform.localPosition = pos;
        }

        selectedIndex = 0;
        UpdateInteractivity();
        SingletonManager.reference.hud.gameObject.SetActive(true);
    }

    protected override void OnGameEvent(GameEvent gEvent)
    {
        base.OnGameEvent(gEvent);
    }

    protected override void OnInGameEvent(InGameEvent evt)
    {
        base.OnInGameEvent(evt);
    }

    public override void OnSetToView()
    {
        base.OnSetToView();
        Reset();
    }

    private bool UpdateIndex(int del)
    {
        selectedIndex += del;

        if (selectedIndex >= _train.Count)
        {
            selectedIndex = _train.Count - 1;
            return false;
        }
        else if (selectedIndex < 0)
        {
            selectedIndex = 0;
            return false;
        }

        return true;
    }

    private void UpdateInteractivity()
    {
        next.interactable = (selectedIndex != _train.Count - 1);
        previous.interactable = (selectedIndex != 0);
        play.interactable = (selectedIndex != 0);
    }

    public void Next()
    {
        if (UpdateIndex(1))
        {
            MoveBy(-maskWidth);
        }
        UpdateInteractivity();
    }

    public void Previous()
    {
        if (UpdateIndex(-1))
        {
            MoveBy(maskWidth);
        }
        UpdateInteractivity();
    }

    public void Play()
    {
        if (LocalPlayerModel.GetInstance().tokens >= GetEntryFees())
        {
            MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
        }
        else
        {
            SingletonManager.reference.popupManager.ShowOutOfTokensPopup();
        }
    }

    private void MoveBy(float distance)
    {
        for (int index = 0; index < _train.Count; index++)
        {
            iTween.MoveTo(_train[index], iTween.Hash("oncomplete", "OnMoveComplete", "oncompletetarget", gameObject, "time", 0.2f, "islocal", true, "x", distance + _train[index].transform.localPosition.x));
        }
    }

    private void OnMoveComplete()
    {
        
    }
}
