using UnityEngine;
using System.Collections;

public class ExtMonoBehaviour : MonoBehaviour
{
    private bool _isInitialized = false;

    public bool isInitialized{ get { return _isInitialized; } }

    virtual public void Init()
    {
        if (!_isInitialized)
        {
            _isInitialized = true;
        }
        else
        {
            throw new UnityException(" SceneMono - Initializing Twice");
        }
    }

    virtual public void AddListeners()
    {
        EventManager.instance.AddListener<GameEvent>(OnGameEvent);
    }

    virtual public void RemoveListeners()
    {
        EventManager.instance.RemoveListener<GameEvent>(OnGameEvent);
    }

    public void DelayedCall(float delay, System.Action callback)
    {
        StartCoroutine(StartDelay(delay, callback));        
    }

    private IEnumerator StartDelay(float delay, System.Action callback)
    {
        yield return new WaitForSeconds(delay);
        callback();
    }

    public void DelayedCallWithArgs<T>(float delay, System.Action<T> callback, T arg)
    {
        StartCoroutine(StartDelayWithArgs<T>(delay, callback, arg));        
    }

    private IEnumerator StartDelayWithArgs<T>(float delay, System.Action<T> callback, T arg)
    {
        yield return new WaitForSeconds(delay);
        callback(arg);
    }

    public void DelayedCallWithArgs<T, U>(float delay, System.Action<T, U> callback, T arg1, U arg2)
    {
        StartCoroutine(StartDelayWithArgs<T, U>(delay, callback, arg1, arg2));        
    }

    private IEnumerator StartDelayWithArgs<T, U>(float delay, System.Action<T, U> callback, T arg1, U arg2)
    {
        yield return new WaitForSeconds(delay);
        callback(arg1, arg2);
    }

    virtual protected void OnGameEvent(GameEvent gEvent)
    {

    }

    virtual public void OnMoveOutOfView()
    {
        RemoveListeners();
    }

    virtual public void OnSetToView()
    {
        AddListeners();
    }
}