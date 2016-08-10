using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class InGameInfoText : ExtMonoBehaviour
{
    public Text text;
    private Coroutine _removeCoroutine;

    public void Hide()
    {
        gameObject.SetActive(false);
    }

    public void ShowMessage(string msg, Action callback)
    {
        if (_removeCoroutine == null)
        {
            text.text = msg;
            gameObject.SetActive(true);
            _removeCoroutine = StartCoroutine(RemoveMessage(callback));
        }
    }

    private IEnumerator RemoveMessage(Action callback)
    {
        yield return new WaitForSeconds(1.5f);
        gameObject.SetActive(false);
        _removeCoroutine = null;

        if (callback != null)
        {
            callback();
        }
    }
}

