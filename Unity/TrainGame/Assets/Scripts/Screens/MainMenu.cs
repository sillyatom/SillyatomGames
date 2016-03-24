using UnityEngine;
using System.Collections;

public class MainMenu : SceneMonobehaviour
{
    public override void Init()
    {
        base.Init();
        GetComponent<Login>().Init();
        GetComponent<Login>().MoveToNextScene();
    }

    public override void MoveToScene(string tag)
    {
        base.MoveToScene(tag);
    }
}
