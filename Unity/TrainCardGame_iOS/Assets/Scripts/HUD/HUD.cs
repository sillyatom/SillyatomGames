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

        if (gEvent.type == GameEvent.UPDATE_PLAYER_MODEL)
        {
            UpdateModel(gEvent.vo as LocalPlayerModelVO);
        }
    }

    private void UpdateModel(LocalPlayerModelVO vo)
    {
        tokenText.text = vo.tokens.ToString();
        xpText.text = vo.xp.ToString();
    }
}
