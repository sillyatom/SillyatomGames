using UnityEngine;
using System.Collections;

public class SceneMonoBehaviour : MonoBehaviour
{
    private SceneTransitionManager sceneTransitionManager;

    virtual public void Init()
    {
        sceneTransitionManager = GameObject.FindGameObjectWithTag("SceneTransitionHandler").GetComponent<SceneTransitionManager>();
        EventManager.instance.AddListener<GameEvent>(OnGameEvent);
    }

    virtual public void MoveToScene(string tag, bool doInit = false)
    {
        sceneTransitionManager.SetActiveScreen(tag, doInit);
    }

    virtual protected void OnGameEvent(GameEvent gEvent)
    {
        
    }
}
