using UnityEngine;
using System.Collections;
using System;

public class EventFlowManager : MonoBehaviour
{
    Events _eventDispatcher;

    void Awake()
    {
        _eventDispatcher = Events.instance;
    }

    void OnEnable()
    {
        _eventDispatcher.AddListener<GameEvent>(OnGameEvent);
    }

    void Start()
    {
        _eventDispatcher.Raise(new GameEvent(GameEvent.GENERATE_MAP));
    }

    void OnDisable()
    {
        _eventDispatcher.RemoveListener<GameEvent>(OnGameEvent);
    }

    private void OnGameEvent(GameEvent e)
    {
        switch (e.type)
        {
            case GameEvent.BUILD_NAVMESH_COMPLETE:
                //Start Pooling
                GameEvent poolEvent = new GameEvent(GameEvent.START_POOLING);
                poolEvent.width = e.width;
                poolEvent.height = e.height;
                poolEvent.gridSize = e.gridSize;
                _eventDispatcher.Raise(poolEvent);

                //start FOW
                GameEvent fowEvent = new GameEvent(GameEvent.GENERATE_FOW);
                fowEvent.width = e.width;
                fowEvent.height = e.height;
                fowEvent.gridSize = e.gridSize;
                _eventDispatcher.Raise(fowEvent);
                break;

            case GameEvent.POOLING_COMPLETED:
                //for testing
                //GameObject handler = (GameObject)Instantiate(Resources.Load("Prefabs/EnemySpawnHandler"));
                //handler.transform.position = Vector3.back * 5.0f;

                _eventDispatcher.Raise(new GameEvent(GameEvent.START_LEVEL_OBJECTS_GENERATOR));
                break;
        }
    }
}