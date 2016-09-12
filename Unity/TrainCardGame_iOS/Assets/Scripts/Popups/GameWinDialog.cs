using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameWinDialog : BaseDialog
{
    public Text totalStarsEarned;
    public Text tokensEarned;
    public Image coinImage;
    public Image starImage;

    public void InitWithData(int starsEarned, int tokensEarned)
    {
        this.totalStarsEarned.text = starsEarned.ToString();
        this.tokensEarned.text = tokensEarned.ToString();
    }

    public override void OnRemove()
    {
        base.OnRemove();
        transform.SetParent(_parentTransform);
        transform.position = _initPosition;
    }
}
