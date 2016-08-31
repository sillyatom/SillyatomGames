using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HUD : ExtMonoBehaviour
{
    public Text tokenText;
    public Text xpText;

    public override void Init()
    {
        base.Init();
        AddListeners();
    }

    protected override void OnGameEvent(GameEvent gEvent)
    {
        base.OnGameEvent(gEvent);

        switch (gEvent.type)
        {
            case GameEvent.PLAYER_MODEL_UPDATED:
                tokenText.text = LocalPlayerModel.GetInstance().tokens.ToString();
                xpText.text = LocalPlayerModel.GetInstance().xp.ToString();
                break;
        }
    }
}
