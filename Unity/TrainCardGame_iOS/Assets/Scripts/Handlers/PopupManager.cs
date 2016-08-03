using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class PopupManager : ExtMonoBehaviour
{
    public Image blocker;
    public GameObject genericPopup;

    private List<GameObject> _popups;
    private GameObject _activePopup;

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
        popup.SetActive(false);
        ShowPopup();
    }

    public void RemovePopup(GameObject popup)
    {
        _popups.RemoveAt(_popups.IndexOf(popup));
        Destroy(popup);
        blocker.gameObject.SetActive(false);
        _activePopup = null;
    }

    public void RemoveActivePopup()
    {
        if (_activePopup != null)
        {
            RemovePopup(_activePopup);
            ShowPopup();
        }
    }

    private void ShowPopup()
    {
        if (_popups.Count > 0 && _activePopup == null)
        {
            blocker.gameObject.SetActive(true);
            _activePopup = _popups[_popups.Count - 1];
            _activePopup.SetActive(true);

            _activePopup.transform.SetParent(transform);
            _activePopup.transform.localScale = Vector3.one;
            _activePopup.transform.localPosition = Vector3.zero;
        }
    }

    public GameObject CreateGenericPopup(string header, string body)
    {
        GameObject popup = Instantiate<GameObject>(genericPopup);
        popup.GetComponent<GenericPopup>().UpdateData(header, body);
        AddPopup(popup);
        return popup;
    }
}
