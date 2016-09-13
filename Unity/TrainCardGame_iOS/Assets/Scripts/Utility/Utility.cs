using UnityEngine;
using UnityEngine.UI;
using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

public class Utility : MonoBehaviour
{
    private static readonly System.Random random = new System.Random(
                                                       "com.sillyatomgames".GetHashCode() + UnityEngine.Random.Range(0, 1000000)
                                                   );

    public static float SinInterpolate(float timeElapsed, float from, float to, float duration)
    {
        float v = timeElapsed / duration;
        v = Mathf.Sin(v * Mathf.PI / 2.0f);
        return (from * v) + (to * (1 - v));
    }

    public static float GetRandomNumber(double minimum, double maximum)
    { 
        return (float)(random.NextDouble() * (maximum - minimum) + minimum);
    }

    public static int GetRandomNumber(int minimum, int maximum)
    { 
        return (random.Next() * (maximum - minimum) + minimum);
    }

    public static void DelayedCallWithArgs(GameObject target, GameObject callbackTarget, string callback, object args, float time, float delay = 0.0f)
    {
        iTween.MoveBy(target, iTween.Hash("x", 0, "time", time, "delay", delay,
                "oncomplete", callback, "oncompletetarget", callbackTarget, "oncompleteparams", args));
    }

    public static List<T> DeepCloneList<T>(List<T> list)
    {
        List<T> retList = new List<T>();

        foreach (var item in list)
        {
            retList.Add(item.DeepClone());    
        }

        return retList;
    }

    public void PlayCoinAnimation(RectTransform from, RectTransform to, int amount, float time)
    {
        for (int index = 0; index < amount; index++)
        {
            GameObject go = Instantiate<GameObject>(SingletonManager.reference.coin);
            go.transform.SetParent(SingletonManager.reference.overlay);
            go.transform.position = Vector3.zero;
            go.transform.localScale = Vector3.one;
            go.transform.position = from.transform.position;
            Hashtable cArgs = new Hashtable();
            cArgs.Add("go", go);
            iTween.MoveTo(go, iTween.Hash("x", to.transform.position.x, "y", to.transform.position.y, "time", time, "delay", index * 0.2f,
                    "OnComplete", "OnReachDestination", "OnCompleteTarget", gameObject, "OnCompleteParams", cArgs));
        }
    }

    public void RollNumbers(Text textField, long frm, long to, float time)
    {
        StartCoroutine(UpdateText(textField, frm, to, time));
    }

    private IEnumerator UpdateText(Text textField, long frm, long to, float time)
    {
        long start = frm;

        while (start <= to)
        {
            textField.text = start.ToString();
            start++;
            yield return null;
        }

        yield break;
    }

    private void OnReachDestination(object cArgs)
    {
        Hashtable table = (Hashtable)cArgs;
        GameObject go = (GameObject)table["go"];
        Destroy(go);
    }
}