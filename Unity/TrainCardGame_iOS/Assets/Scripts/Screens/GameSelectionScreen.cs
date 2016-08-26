using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class GameSelectionScreen : GameScreenMonoBehaviour
{
    public Button next;
    public Button play;
    public Button previous;

    public List<GameObject> _train = new List<GameObject>();
    public List<int> entryFees = new List<int>();
    private int _runningId = 0;
    public RectTransform mask;
    public GameObject info;
    public Text entryText;

    public override void Init()
    {
        base.Init();

        for (int index = 0; index < _train.Count; index++)
        {
            Vector3 pos = _train[index].transform.localPosition;
            pos.x = index * mask.rect.width;
            _train[index].transform.localPosition = pos;
        }

        UpdateInteractivity();
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
        _runningId = 0;
    }

    private bool UpdateIndex(int del)
    {
        _runningId += del;

        if (_runningId >= _train.Count)
        {
            _runningId = _train.Count - 1;
            return false;
        }
        else if (_runningId < 0)
        {
            _runningId = 0;
            return false;
        }
        info.SetActive((_runningId != 0));
        entryText.text = entryFees[_runningId].ToString();

        return true;
    }

    private void UpdateInteractivity()
    {
        next.interactable = (_runningId != _train.Count - 1);
        previous.interactable = (_runningId != 0);
        play.interactable = (_runningId != 0);
    }

    public void Next()
    {
        if (UpdateIndex(1))
        {
            MoveBy(-mask.rect.width);
        }
        UpdateInteractivity();
    }

    public void Previous()
    {
        if (UpdateIndex(-1))
        {
            MoveBy(mask.rect.width);
        }
        UpdateInteractivity();
    }

    public void Play()
    {
        MoveToScene(TagConstants.TAG_MATCH_SELECTION_SCREEN);
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
