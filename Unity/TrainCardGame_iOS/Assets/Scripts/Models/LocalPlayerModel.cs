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
        switch (gameEvent.type)
        {
            case GameEvent.UPDATE_PLAYER_MODEL:
                UpdateModel(gameEvent.vo as LocalPlayerModelVO);
                break;

            case GameEvent.ADD_TOKENS:
                tokens += gameEvent.val;
                PostTokens();
                break;
        }

        EventManager.instance.Raise(new GameEvent(GameEvent.PLAYER_MODEL_UPDATED));
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

    private void PostTokens()
    {
        WWWForm form = new WWWForm();
        form.AddField(RemoteAPIConstants.API, RemoteAPIConstants.ADD_TOKENS);
        form.AddField(RemoteAPIConstants.PLAYER_UID, localPlayerUID);
        form.AddField(RemoteAPIConstants.PLAYER_NAME, localPlayerName);
        form.AddField(RemoteAPIConstants.PLAYER_ADD_TOKENS, tokens);

        SingletonManager.reference.postMethod.StartRequest(form);
    }
}