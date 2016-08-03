using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class ExecutionOrderManager : MonoBehaviour
{
    public List<SceneMonoBehaviour> _monos;
    public List<ExtMonoBehaviour> _extMonos;
    private bool _didInit = false;

    public void Init(string data)
    {
        if (!_didInit)
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

        GCStatusVO vo = JsonConvert.DeserializeObject<GCStatusVO>(data);
        InGameEvent evt = new InGameEvent(InGameEvent.GC_STATUS, vo.SigningStatus);
        EventManager.instance.Raise(evt);
    }
}
