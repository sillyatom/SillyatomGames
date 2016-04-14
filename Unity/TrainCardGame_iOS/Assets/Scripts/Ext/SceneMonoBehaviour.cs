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
            EventManager.instance.AddListener<InGameEvent>(OnInGameEvent);
        }
        else
        {
            throw new UnityException(" SceneMono - Initializing Twice");
        }
    }

    virtual public void MoveToScene(string tag, bool doInit = false)
    {
        sceneTransitionManager.SetActiveScreen(tag, doInit);
    }

    virtual protected void OnGameEvent(GameEvent gEvent)
    {
        
    }

    virtual protected void OnInGameEvent(InGameEvent evt)
    {
        
    }
}
