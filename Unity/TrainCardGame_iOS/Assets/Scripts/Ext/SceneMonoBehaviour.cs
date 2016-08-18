using UnityEngine;
using System.Collections;

public class SceneMonoBehaviour : ExtMonoBehaviour
{
    private SceneTransitionManager sceneTransitionManager;

    override public void Init()
    {
        base.Init();
        sceneTransitionManager = SingletonManager.reference.sceneTransitionManager;
    }

    public override void AddListeners()
    {
        base.AddListeners();
        EventManager.instance.AddListener<InGameEvent>(OnInGameEvent);
    }

    public override void RemoveListeners()
    {
        base.RemoveListeners();
        EventManager.instance.RemoveListener<InGameEvent>(OnInGameEvent);
    }

    virtual public void MoveToScene(string tag)
    {
        OnMoveOutOfView();
        sceneTransitionManager.SetActiveScreen(tag);
    }

    override protected void OnGameEvent(GameEvent gEvent)
    {
        base.OnGameEvent(gEvent);
    }

    virtual protected void OnInGameEvent(InGameEvent evt)
    {
        
    }
}
