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

    public static T DeepCopyList<T>(T obj)
    {
        return (T)DeepCopyList(obj);    
    }

    private static object DeepCopyList(object obj)
    {
        if (obj == null)
            return null;
        Type type = obj.GetType();

        if (type.IsValueType)
        {
            return obj;
        }
        else if (type == typeof(string))
        {
            return String.Copy((string)obj);
        }
        else if (type.IsArray)
        {
            Type elementType = Type.GetType(
                                   type.FullName.Replace("[]", string.Empty));
            var array = obj as Array;
            Array copied = Array.CreateInstance(elementType, array.Length);
            for (int i = 0; i < array.Length; i++)
            {
                copied.SetValue(DeepCopyList(array.GetValue(i)), i);
            }
            return Convert.ChangeType(copied, obj.GetType());
        }
        else if (type.IsClass)
        {

            object toret = Activator.CreateInstance(obj.GetType());
            FieldInfo[] fields = type.GetFields(BindingFlags.Public |
                                     BindingFlags.NonPublic | BindingFlags.Instance);
            foreach (FieldInfo field in fields)
            {
                object fieldValue = field.GetValue(obj);
                if (fieldValue == null)
                    continue;
                field.SetValue(toret, DeepCopyList(fieldValue));
            }
            return toret;
        }
        else
            throw new ArgumentException("Unknown type");
    }

    public static List<T> DeepCopyList<T>(List<T> list)
    {
        List<T> retList = new List<T>();

        foreach (var item in list)
        {
            retList.Add((T)DeepCopyList(item));    
        }

        return retList;
    }

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
}