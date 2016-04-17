using UnityEngine;
using System.Collections;

public class SingletonManager : ExtMonoBehaviour
{
    public static GameObjectRef reference;

    public override void Init()
    {
        reference = GameObject.FindGameObjectWithTag("GameObjectReference").GetComponent<GameObjectRef>();
    }
}