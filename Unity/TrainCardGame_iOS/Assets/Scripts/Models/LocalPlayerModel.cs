using UnityEngine;
using System.Collections;

public class LocalPlayerModelVO : System.Object
{
    public int tokens{ get; set; }

    public int xp{ get; set; }

    public LocalPlayerModelVO(int tokens, int xp)
    {
        this.tokens = tokens;
        this.xp = xp;
    }
}

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

    public LocalPlayerModel()
    {
        EventManager.instance.AddListener<GameEvent>(OnGameEvent);
    }

    private void OnGameEvent(GameEvent gameEvent)
    {
        if (gameEvent.type == GameEvent.UPDATE_PLAYER_MODEL)
        {
            UpdateModel(gameEvent.vo as LocalPlayerModelVO);
        }
    }

    private void UpdateModel(LocalPlayerModelVO vo)
    {
        _model.tokens = vo.tokens;
        _model.xp = vo.xp;
    }

    public void UpdatePlayerDetails(GCStatusVO vo)
    {
        _model.localPlayerId = vo.localPlayerId;
        _model.localPlayerName = vo.localPlayerName;
        _model.localPlayerUID = vo.uid;
    }
}