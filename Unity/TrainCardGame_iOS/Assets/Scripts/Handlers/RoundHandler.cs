using UnityEngine;
using System.Collections;

public class RoundHandler : SceneMonoBehaviour
{
    public static int currentRound = 0;
    private float _elapsedTime;
    private bool _isRoundActive = false;

    public override void Init()
    {
        base.Init();

        _elapsedTime = 0.0f;
    }

    public void StartRound()
    {
        currentRound++;
        StartTimer();
    }

    public void StopTimer()
    {
        _isRoundActive = false;
        StopRound();
    }

    private void StopRound()
    {

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
