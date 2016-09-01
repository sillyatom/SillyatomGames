using UnityEngine;
using System.Collections;

public class SharedMainGame : ExtMonoBehaviour
{
    public GameObject hud;
    public Trains trains;

    public override void Init()
    {
        base.Init();
    }

    public void DisableHud()
    {
        hud.SetActive(false);
    }

    public void EnableHud()
    {
        hud.SetActive(true);
    }
}
