using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class TestScript : MonoBehaviour
{
    private bool cloneTest = false;
    // Use this for initialization
    void Awake()
    {
        if (cloneTest)
        {
            
            List<string> data = new List<string>(new string[]{ "A", "B", "C" });
            List<string> clone = Utility.DeepCloneList<string>(data);
            Debug.Log("-------CLONING LIST--------'");
            foreach (var item in clone)
            {
                Debug.Log(item);
            }
            Debug.Log("-------REMOVING INDEX IN CLONED LIST--------'");
            clone.RemoveAt(0);
            clone.RemoveAt(1);
            Debug.Log("-------ORIGINAL LIST--------'");
            foreach (var item in data)
            {
                Debug.Log(item);
            }
            Debug.Log("-------CLONING LIST AFTER REMOVE--------'");
            foreach (var item in clone)
            {
                Debug.Log(item);
            }
        }
    }

    public void TestPostURL()
    {
        WWWForm form = new WWWForm();
        form.AddField(RemoteAPIConstants.API, RemoteAPIConstants.INIT_CALL);
        form.AddField(RemoteAPIConstants.PLAYER_UID, "1234");
        form.AddField(RemoteAPIConstants.PLAYER_NAME, "test");
        transform.GetComponent<PostURL>().StartRequest(form, OnDataReceived);
    }

    private void OnDataReceived(bool success, string result)
    {
        if (success)
        {
            Debug.LogError("Result " + result);
            WWWForm form = new WWWForm();
            form.AddField(RemoteAPIConstants.API, RemoteAPIConstants.ADD_TOKENS);
            form.AddField(RemoteAPIConstants.PLAYER_UID, "1234");
            form.AddField(RemoteAPIConstants.PLAYER_NAME, "test");
            form.AddField(RemoteAPIConstants.PLAYER_ADD_TOKENS, -1000);

            transform.GetComponent<PostURL>().StartRequest(form, OnUpdateTokens);
        }
        else
        {
            Debug.LogError("Init Call Failed");
        }
    }

    private void OnUpdateTokens(bool success, string result)
    {
        Debug.LogError("result " + result);
    }
}
