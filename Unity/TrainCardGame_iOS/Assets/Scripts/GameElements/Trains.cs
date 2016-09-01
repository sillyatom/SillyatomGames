using UnityEngine;
using System.Collections.Generic;

public class Trains : MonoBehaviour
{
    public List<Train> trains;

    void Awake()
    {
        for (int index = 1; index < trains.Count; index++)
        {
            trains[index].gameObject.SetActive(false);
        }
    }

    public void EnableTrainById(int selectedIndex)
    {
        for (int index = 1; index < trains.Count; index++)
        {
            trains[index].gameObject.SetActive((selectedIndex == index));
        }
    }
}
