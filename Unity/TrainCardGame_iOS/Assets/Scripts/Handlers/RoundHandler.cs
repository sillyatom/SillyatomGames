using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RoundHandler : ExtMonoBehaviour
{
    public static int currentRound = 0;

    private float _elapsedTime;
    private bool _isRoundActive = false;
    private string _activePlayerId = "";

    public Image progressBar;
    public Text currentPlayerName;

    public System.Action OnRoundCompleteCallback{ get; set; }

    public int GetRoundNumber{ get { return currentRound; } }

    public string GetActivePlayerId{ get { return _activePlayerId; } }

    public bool IsActivePlayerLocal{ get { return (_activePlayerId == Networking.localId); } }

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

        //update player details
        currentPlayerName.text = SingletonManager.reference.network.GetPlayerById(_activePlayerId).Name;
        progressBar.fillAmount = 0.0f;

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
        OnRoundCompleteCallback();
    }

    private void StartTimer()
    {
        _elapsedTime = 0.0f;
        _isRoundActive = true;
    }

    public void OnRoundEnd()
    {
        _activePlayerId = "";
    }

    void Update()
    {
        if (_isRoundActive)
        {
            _elapsedTime += Time.deltaTime;
            progressBar.fillAmount = 1.0f / GameConstants.ROUND_TIME * _elapsedTime;
            if (_elapsedTime >= GameConstants.ROUND_TIME)
            {
                progressBar.fillAmount = 1.0f;
                StopTimer();
            }
        }
    }
}
