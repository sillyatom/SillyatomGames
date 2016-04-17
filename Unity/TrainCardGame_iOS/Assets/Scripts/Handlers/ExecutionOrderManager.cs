using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ExecutionOrderManager : MonoBehaviour
{
    public List<SceneMonoBehaviour> _monos;
    public List<ExtMonoBehaviour> _extMonos;

    void Awake()
    {
        foreach (var mono in _extMonos)
        {
            mono.Init();
        }

        foreach (var mono in _monos)
        {
            mono.Init();
        }
    }
}
