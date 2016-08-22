using UnityEngine;
using System.Collections;

public class LocalPlayerModel
{
    public string localPlayerId{ get; set; }

    public string localPlayerName{ get; set; }

    public string localPlayerUID{ get; set; }

    public int tokens{ get; set; }

    public int xp{ get; set; }

    private static LocalPlayerModel _model = null;

    public static LocalPlayerModel GetInstance()
    {
        if (_model == null)
        {
            _model = new LocalPlayerModel();
        }

        return _model;
    }

    public void UpdateModel(GCStatusVO vo)
    {
        _model.localPlayerId = vo.localPlayerId;
        _model.localPlayerName = vo.localPlayerName;
        _model.localPlayerUID = vo.uid;
    }
}