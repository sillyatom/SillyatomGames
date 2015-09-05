using UnityEngine;
using System.Collections;

public class LevelObjectsGenerator : MonoBehaviour
{
    void Awake()
    {
        Events.instance.AddListener<GameEvent>(OnStartGenerator);
    }

    void OnStartGenerator(GameEvent e)
    {
        if (e.type == GameEvent.START_LEVEL_OBJECTS_GENERATOR)
        {
            Events.instance.RemoveListener<GameEvent>(OnStartGenerator);

            int lengthX = MapGenerator.borderedMap.GetLength(0);
            int lengthY = MapGenerator.borderedMap.GetLength(1);

            for (int x = 0; x < lengthX; x++)
            {
                for (int y = 0; y < lengthY; y++)
                {
                }
            }
        }
    }
}
