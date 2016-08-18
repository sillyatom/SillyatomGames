using UnityEngine;
using System.Collections;

public class GameFailDialog : BaseDialog
{
    public void InitWithData(int starsEarned, int tokensEarned)
    {
        
    }

    public override void OnRemove()
    {
        base.OnRemove();
        transform.SetParent(_parentTransform);
        transform.position = _initPosition;
    }
}
