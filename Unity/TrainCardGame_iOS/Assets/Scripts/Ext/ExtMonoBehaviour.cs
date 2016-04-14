using UnityEngine;
using System.Collections;

public class ExtMonoBehaviour : MonoBehaviour
{
    private bool _isInitialized = false;

    virtual public void Init()
    {
        if (!_isInitialized)
        {
            _isInitialized = true;
            EventManager.instance.AddListener<GameEvent>(OnGameEvent);
        }
        else
        {
            throw new UnityException(" SceneMono - Initializing Twice");
        }
    }

    virtual protected void OnGameEvent(GameEvent gEvent)
    {

    }
}