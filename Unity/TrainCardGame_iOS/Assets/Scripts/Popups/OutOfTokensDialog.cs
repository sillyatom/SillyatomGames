using UnityEngine;
using System.Collections;

public class OutOfTokensDialog : BaseDialog
{
    public override void OnRemove()
    {
        base.OnRemove();
        transform.SetParent(_parentTransform);
        transform.position = _initPosition;
    }
}
