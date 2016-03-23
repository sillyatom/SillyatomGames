using UnityEngine;
using System.Collections;

public class EnemySpawnHandler : SpawnHandler
{
    public EnemySpawnHandler()
    {
        timeToFire = 5.0f;
    }

    public override void Fire()
    {
        base.Fire();

        GameObject enemy = _poolInstance.getGameObject("Enemy");
        if (enemy)
        {
            enemy.transform.position = _spawnPosForward;
            enemy.transform.rotation = Quaternion.identity;
            enemy.SetActive(true);
        }
    }
}
