using UnityEngine;
using System.Collections;

public class RoundHandler : SceneMonoBehaviour
{
    public static int currentRound = 0;

    private float _elapsedTime;
    private bool _isRoundActive = false;
    private string _activePlayerId = "";

    public string GetActivePlayerId{ get { return _activePlayerId; } }

    public int GetRoundNumber{ get { return currentRound; } }

    public override void Init()
    {
        base.Init();
        _elapsedTime = 0.0f;

        EventManager.instance.AddListener<InGameEvent>(OnInGameEvent);
    }

    private void OnInGameEvent(InGameEvent evt)
    {
        switch (evt.type)
        {
            case InGameEvent.Round_Active_Player:
                _activePlayerId = evt.playerId;
                break;
        }
    }

    public void StartMatch()
    {
        currentRound = 0;
        StartRound();
    }

    public void StartRound()
    {
        currentRound++;
        StartTimer();
        Debug.Log("--------------START ROUND!!!-------------");
    }

    public void StopTimer()
    {
        _isRoundActive = false;
        StopRound();
    }

    private void StopRound()
    {
        Debug.Log("--------------STOP ROUND!!!-------------");
    }

    private void StartTimer()
    {
        _elapsedTime = 0.0f;
        _isRoundActive = true;
    }

    void Update()
    {
        if (_isRoundActive)
        {
            _elapsedTime += Time.deltaTime;
            if (_elapsedTime >= GameConstants.ROUND_TIME)
            {
                StopTimer();
            }
        }
    }
}
