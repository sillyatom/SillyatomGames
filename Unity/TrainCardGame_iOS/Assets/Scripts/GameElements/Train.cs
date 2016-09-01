using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Train : MonoBehaviour
{
    public List<GameObject> compartments;

    void Awake()
    {
        for (int index = 0; index < compartments.Count; index++)
        {
            compartments[index].GetComponent<GrayColorToggle>().SetGrayEffect(1.0f);
            compartments[index].GetComponent<Animator>().SetBool("canAnimate", false);
        }
    }

    public void EnableCompartmentById(int index)
    {
        compartments[index].GetComponent<GrayColorToggle>().SetGrayEffect(0.0f);
        compartments[index].GetComponent<Animator>().SetBool("canAnimate", true);
    }
}
