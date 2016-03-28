using UnityEngine;
using System.Collections;

public class SceneMonoBehaviour : MonoBehaviour
{
    private SceneTransitionManager sceneTransitionManager;
    private bool _isInitialized;

    virtual public void Init()
    {
        if (!_isInitialized)
        {
            _isInitialized = true;
            sceneTransitionManager = GameObject.FindGameObjectWithTag("SceneTransitionHandler").GetComponent<SceneTransitionManager>();
            EventManager.instance.AddListener<GameEvent>(OnGameEvent);
        }
        else
        {
            throw new UnityException(" View - Initializing Twice");
        }
    }

    virtual public void MoveToScene(string tag, bool doInit = false)
    {
        sceneTransitionManager.SetActiveScreen(tag, doInit);
    }

    virtual protected void OnGameEvent(GameEvent gEvent)
    {
        
    }
}
