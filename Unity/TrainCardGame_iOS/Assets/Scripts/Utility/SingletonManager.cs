using UnityEngine;
using System.Collections;

public class SingletonManager : MonoBehaviour
{
    public static GameObjectRef reference;

    void Awake()
    {
        reference = GameObject.FindGameObjectWithTag("GameObjectReference").GetComponent<GameObjectRef>();
    }
}