using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Trains : MonoBehaviour
{
    public List<GameObject> trains;
    private Train _activeTrain;

    public List<Vector3> positions;
    public List<Vector3> scale;

    void Awake()
    {
        EventManager.instance.AddListener<GameEvent>(OnGameEvent);
    }

    private Train GetActiveTrain()
    {
        return _activeTrain;
    }

    private void OnGameEvent(GameEvent gEvent)
    {
        switch (gEvent.type)
        {
            case GameEvent.SWEEP_COUNT_UPDATED:
                GetActiveTrain().EnableCompartmentById(gEvent.val);
                break;
        }
    }

    public void RemoveActiveTrain()
    {
        Destroy(_activeTrain.gameObject);
        _activeTrain = null;        
    }

    public void EnableTrainById(int selectedIndex)
    {
        GameObject trainObj = Instantiate<GameObject>(trains[selectedIndex]);
        _activeTrain = trainObj.GetComponent<Train>();
        trainObj.transform.SetParent(transform);
        trainObj.transform.localScale = scale[selectedIndex];
        trainObj.transform.localPosition = positions[selectedIndex];
    }
}
