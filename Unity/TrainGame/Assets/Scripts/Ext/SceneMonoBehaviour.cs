using UnityEngine;
using System.Collections;

public class SceneMonobehaviour : MonoBehaviour
{
    public SceneTransitionManager sceneTransitionManager;

    virtual public void Init()
    {
        
    }

    virtual public void MoveToScene(string tag)
    {
        sceneTransitionManager.SetActiveScreen(tag);
    }
}
