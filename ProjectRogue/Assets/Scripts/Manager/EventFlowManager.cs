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
                _eventDispatcher.Raise(new GameEvent(GameEvent.START_POOLING));

                //start FOW
                GameEvent fowEvent = new GameEvent(GameEvent.GENERATE_FOW);
                fowEvent.width = e.width;
                fowEvent.height = e.height;
                fowEvent.gridSize = e.gridSize;
                _eventDispatcher.Raise(fowEvent);

                break;
        }
    }
}