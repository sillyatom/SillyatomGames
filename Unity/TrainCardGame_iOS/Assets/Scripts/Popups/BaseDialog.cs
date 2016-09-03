using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BaseDialog : ExtMonoBehaviour
{
    protected Vector3 _initPosition;
    protected Transform _parentTransform;

    public override void Init()
    {
        base.Init();

        _initPosition = transform.position;
        _parentTransform = transform.parent;
    }

    virtual public void OnRemove()
    {
        
    }
}
