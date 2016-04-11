using UnityEngine;
using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

public class Utility
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

    public static void DelayedCall(GameObject target, GameObject callbackTarget, string callback, float time, float delay = 0.0f)
    {
        iTween.MoveBy(target, iTween.Hash("x", 0, "time", time, "delay", delay,
                "oncomplete", callback, "oncompletetarget", callbackTarget));
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
}