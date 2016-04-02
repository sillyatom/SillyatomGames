using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TestScript : MonoBehaviour
{
    // Use this for initialization
    void Awake()
    {
        List<string> data = new List<string>(new string[]{ "A", "B", "C" });
        List<string> clone = Utility.DeepCopyList<string>(data);
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
	
    // Update is called once per frame
    void Update()
    {
	
    }
}
