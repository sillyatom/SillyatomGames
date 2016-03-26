using UnityEngine;
using System.Collections;

public class MainMenu : SceneMonoBehaviour
{
    public override void Init()
    {
        base.Init();
        GetComponent<Login>().Init();
    }

    public override void MoveToScene(string tag)
    {
        base.MoveToScene(tag);
    }
}
