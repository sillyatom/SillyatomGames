using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class PopupManager : ExtMonoBehaviour
{
    public Image blocker;
    public GameObject connectingPopup;
    public GameObject outOfTokensPopup;
    public GameObject determiningHostPopup;

    private List<GameObject> _popups;
    private GameObject _activePopup;

    public void ShowPurchasePopup()
    {
        RemoveActivePopup();
        BridgeDebugger.Log(" Show Purchase Popup ");
    }

    public void ShowRewardAds()
    {
        RemoveActivePopup();
        DelayedCall(1.0f, TriggerRewardAds);
    }

    private void TriggerRewardAds()
    {
        SingletonManager.reference.adsManager.ShowRewardedAd();
    }

    public void AddConnectingPopup()
    {
        AddPopup(connectingPopup);
    }

    public void AddDeterminingHostPopup()
    {
        AddPopup(determiningHostPopup);
    }

    public override void Init()
    {
        base.Init();
        blocker.gameObject.SetActive(false);
        _popups = new List<GameObject>();
        _activePopup = null;
    }

    public void AddPopup(GameObject popup)
    {
        _popups.Add(popup);
        popup.transform.localScale = Vector3.zero;
        popup.SetActive(false);
        ShowPopup();
    }

    public void RemovePopup(GameObject popup)
    {
        _popups.RemoveAt(0);
        BaseDialog dialog = popup.GetComponent<BaseDialog>();
        if (dialog != null)
        {
            dialog.OnRemove();
        }
        blocker.gameObject.SetActive(false);
        _activePopup = null;
    }

    public void RemoveActivePopup()
    {
        if (_activePopup != null)
        {
            StartCoroutine(RemovePopupAfterAnim());
        }
    }

    private IEnumerator RemovePopupAfterAnim()
    {
        _activePopup.GetComponent<Animation>().Play("popup_popIn");
        yield return new WaitForSeconds(1.1f);
        RemovePopup(_activePopup);
        ShowPopup();
    }

    private void ShowPopup()
    {
        if (_popups.Count > 0 && _activePopup == null)
        {
            blocker.gameObject.SetActive(true);
            _activePopup = _popups[0];
            _activePopup.SetActive(true);
            _activePopup.GetComponent<Animation>().Play("popup_popOut");
            _activePopup.transform.SetParent(transform);
            _activePopup.transform.localScale = Vector3.one;
            _activePopup.transform.localPosition = Vector3.zero;
        }
    }

    public void ShowOutOfTokensPopup()
    {
        AddPopup(outOfTokensPopup);
    }
}
