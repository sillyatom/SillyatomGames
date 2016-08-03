using UnityEngine;
using System.Collections;

public class Main : MonoBehaviour
{
    public ExecutionOrderManager _exec;

    void Awake()
    {
        #if (UNITY_EDITOR)
        {
            _exec.Init(@"{'SigningStatus' : 2}");
        }
        #endif
    }
}
