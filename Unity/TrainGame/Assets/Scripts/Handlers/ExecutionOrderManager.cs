using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ExecutionOrderManager : MonoBehaviour
{
    public List<SceneMonobehaviour> _monos;

    void Awake()
    {
        foreach (var mono in _monos)
        {
            mono.Init();
        }
    }
}
