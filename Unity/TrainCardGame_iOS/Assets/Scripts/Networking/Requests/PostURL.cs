using UnityEngine;
using System.Collections;

public class PostURL : MonoBehaviour
{
    public void StartRequest(WWWForm form)
    {
        string url = "http://sillyatomgames.com/games/trains/index.php";
        WWW www = new WWW(url, form);
        StartCoroutine(WaitForRequest(www));
    }

    IEnumerator WaitForRequest(WWW www)
    {
        yield return www;

        // check for errors
        if (www.error == null)
        {
            Debug.Log("WWW Ok!: " + www.text);
        }
        else
        {
            Debug.Log("WWW Error: " + www.error);
        }    
    }

}
