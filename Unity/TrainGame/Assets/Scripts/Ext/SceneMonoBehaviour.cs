using UnityEngine;
using System.Collections;

public class SceneMonoBehaviour : MonoBehaviour
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
