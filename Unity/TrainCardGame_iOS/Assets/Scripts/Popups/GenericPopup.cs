using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GenericPopup : BaseDialog
{
    public Text header;
    public Text body;

    public override void Init()
    {
        base.Init();
    }

    public void UpdateData(string header, string body)
    {
        this.header.text = header;
        this.body.text = body;
    }

    public override void OnRemove()
    {
        base.OnRemove();
        Destroy(gameObject);
    }
}
