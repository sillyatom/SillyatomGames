using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Train : MonoBehaviour
{
    public List<GameObject> compartments;

    void Awake()
    {
        DisableAll();
    }

    public void EnableCompartmentById(int index)
    {
        compartments[index].GetComponent<GrayColorToggle>().SetGrayEffect(0.0f);
        compartments[index].GetComponent<Animator>().SetBool("canAnimate", true);
    }

    public void DisableCompartmentById(int index)
    {
        compartments[index].GetComponent<GrayColorToggle>().SetGrayEffect(1.0f);
        compartments[index].GetComponent<Animator>().SetBool("canAnimate", false);
    }

    public void DisableAll()
    {
        for (int index = 1; index < compartments.Count; index++)
        {
            DisableCompartmentById(index);
        }
    }
}
