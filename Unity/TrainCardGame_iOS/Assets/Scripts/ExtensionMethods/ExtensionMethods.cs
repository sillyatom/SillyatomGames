using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public static class ExtensionMethods
{
    private static readonly System.Random rnd = new System.Random();

    public static void Shuffle<T>(this IList<T> list)
    {
        int n = list.Count;
        while (n > 1)
        {
            int k = (rnd.Next(0, n) % n);
            n--;
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }
    }

    public static T Back<T>(this IList<T> list)
    {
        int n = list.Count;
        if (n > 0)
        {
            return list[n - 1];
        }
        return default(T);
    }
}