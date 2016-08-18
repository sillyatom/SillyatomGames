using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameWinDialog : BaseDialog
{
    public List<Image> stars;
    public Text totalStarsEarned;
    public Text tokensEarned;

    public void InitWithData(int starsEarned, int tokensEarned)
    {
        closeBtn.onClick.RemoveAllListeners();
        for (int i = stars.Count - 1; i >= 0; i--)
        {
            stars[i].enabled = (starsEarned == i + 1);
        }    
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
