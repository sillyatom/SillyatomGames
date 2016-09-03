using UnityEngine;
using System.Collections;

public class GameModel
{
    public int sweepCount{ get; set; }

    public bool isGameOver{ get; set; }

    private static GameModel _model = null;

    public static GameModel Instance
    {
        get
        {
            if (_model == null)
            {
                _model = new GameModel();
            }

            return _model;
        }
    }

    public GameModel()
    {
        EventManager.instance.AddListener<GameEvent>(OnGameEvent);
    }

    public void Reset()
    {
        _model.sweepCount = 0;
        _model.isGameOver = false;
    }

    private void OnGameEvent(GameEvent gEvent)
    {
        switch (gEvent.type)
        {
            case GameEvent.UPDATE_SWEEP_COUNT:
                _model.sweepCount = gEvent.val;
                EventManager.instance.Raise(new GameEvent(GameEvent.SWEEP_COUNT_UPDATED, _model.sweepCount));
                break;
        }
    }
}