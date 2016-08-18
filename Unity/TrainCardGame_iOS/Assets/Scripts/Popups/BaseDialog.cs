using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BaseDialog : ExtMonoBehaviour
{
    public Button closeBtn;
    public Button okBtn;

    protected Vector3 _initPosition;
    protected Transform _parentTransform;

    public override void Init()
    {
        base.Init();

        _initPosition = transform.position;
        _parentTransform = transform.parent;

        if (closeBtn != null)
        {
            closeBtn.onClick.AddListener(OnClickCloseBtn);
        }

        if (okBtn != null)
        {
            okBtn.onClick.AddListener(OnClickOkBtn);
        }
    }

    virtual protected void OnClickCloseBtn()
    {
        SingletonManager.reference.popupManager.RemoveActivePopup();        
    }

    virtual protected void OnClickOkBtn()
    {
        SingletonManager.reference.popupManager.RemoveActivePopup();        
    }

    virtual public void OnRemove()
    {
        
    }
}
