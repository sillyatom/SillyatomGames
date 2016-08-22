using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class PostURL : MonoBehaviour
{
    private readonly string _url = "http://sillyatomgames.com/games/trains/index.php";

    public void StartRequest(WWWForm form, Action<bool, string> callback = null)
    {
        WWW www = new WWW(_url, form);
        StartCoroutine(WaitForRequest(www, callback));
    }

    IEnumerator WaitForRequest(WWW www, Action<bool, string> callback = null)
    {
        yield return www;

        // check for errors
        if (www.error == null)
        {
            if (callback != null)
            {
                callback(true, www.text);
            }
        }
        else
        {
            callback(false, www.error);
        }    
    }

}
