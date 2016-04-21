using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

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

    public string SetActivePlayerId{ set { _activePlayerId = value; } }

    public bool IsActivePlayerLocal{ get { return (_activePlayerId == Networking.localId); } }

    public override void Init()
    {
        base.Init();
        _elapsedTime = 0.0f;

        EventManager.instance.AddListener<GameEvent>(OnGameEvent);
        EventManager.instance.AddListener<InGameEvent>(OnInGameEvent);
    }

    override protected void OnGameEvent(GameEvent evt)
    {
        switch (evt.type)
        {
            case GameEvent.START_ROUND:
                RoundVO vo = JsonConvert.DeserializeObject<RoundVO>(evt.response.data);
                _activePlayerId = vo.playerIdForRound;
                BridgeDebugger.SillyLog(" On received next player : " + _activePlayerId);
                StartRound();
                break;
        }
    }

    protected void OnInGameEvent(InGameEvent evt)
    {
        switch (evt.type)
        {
            case InGameEvent.UPDATE_ROUND_DATA:
                _activePlayerId = evt.playerId;
                StartRound();
                break;
        }
    }

    public void StartMatch()
    {
        currentRound = 0;
        _activePlayerId = Networking.hostId;
        StartRound();
    }

    public void StartRound()
    {
        currentRound++;

        //update player details
        currentPlayerName.text = SingletonManager.reference.network.GetPlayerById(_activePlayerId).Name;
        progressBar.fillAmount = 0.0f;

        StartTimer(); 
    }

    public void StopTimer()
    {
        _isRoundActive = false;
        StopRound();
    }

    private void StopRound()
    {
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
        BridgeDebugger.SillyLog(" OnRoundEnd : " + _activePlayerId);
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