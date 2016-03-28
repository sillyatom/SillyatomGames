using UnityEngine;
using System;
using System.Reflection;
using System.Collections;
using System.Collections.Generic;

public class Utility
{
    public static object DeepCopy(object obj)
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
                copied.SetValue(DeepCopy(array.GetValue(i)), i);
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
                field.SetValue(toret, DeepCopy(fieldValue));
            }
            return toret;
        }
        else
            throw new ArgumentException("Unknown type");
    }

    public static List<T> DeepCopy<T>(List<T> list)
    {
        List<T> retList = new List<T>();

        foreach (var item in list)
        {
            retList.Add((T)DeepCopy(item));    
        }

        return retList;
    }
}