using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ExecutionOrderManager : MonoBehaviour
{
    public List<SceneMonoBehaviour> _monos;

    void Awake()
    {
        foreach (var mono in _monos)
        {
            mono.Init();
        }
    }
}
