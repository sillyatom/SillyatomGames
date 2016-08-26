using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class ExecutionOrderManager : MonoBehaviour
{
    public List<ExtMonoBehaviour> _extMonos;
    public List<SceneMonoBehaviour> _monos;

    GCStatusVO _vo;
    private bool _didInit = false;
    private LocalPlayerModel _playerModel;

    public void Init(string data)
    {
        if (!_didInit)
        {
            _didInit = true;

            foreach (var mono in _extMonos)
            {
                mono.Init();
            }

            foreach (var mono in _monos)
            {
                mono.Init();
            }
        }
        SingletonManager.reference.sceneTransitionManager.SetActiveScreen(TagConstants.TAG_MAIN_SCREEN);

        _vo = JsonConvert.DeserializeObject<GCStatusVO>(data);

        _playerModel = LocalPlayerModel.GetInstance();
        _playerModel.UpdatePlayerDetails(_vo);

        #if !UNITY_EDITOR
        WWWForm form = new WWWForm();
        form.AddField(RemoteAPIConstants.API, RemoteAPIConstants.INIT_CALL);
        form.AddField(RemoteAPIConstants.PLAYER_UID, _playerModel.localPlayerUID);
        form.AddField(RemoteAPIConstants.PLAYER_NAME, _playerModel.localPlayerName);

        SingletonManager.reference.postMethod.StartRequest(form, OnDataReceived);
        #else
        InGameEvent evt = new InGameEvent(InGameEvent.GC_STATUS, _vo.SigningStatus);
        EventManager.instance.Raise(evt);
        #endif
    }

    private void OnDataReceived(bool success, string result)
    {
        if (success)
        {
            RemoteInitVO vo = JsonConvert.DeserializeObject<RemoteInitVO>(result);
            {
                InGameEvent evt = new InGameEvent(InGameEvent.GC_STATUS, _vo.SigningStatus);
                EventManager.instance.Raise(evt);
            }
            {
                GameEvent evt = new GameEvent(GameEvent.UPDATE_PLAYER_MODEL, new LocalPlayerModelVO(vo.tokens, vo.xp));
                EventManager.instance.Raise(evt);
            }
        }
        else
        {
            Debug.LogError("Init Call Failed");
        }
    }
}
