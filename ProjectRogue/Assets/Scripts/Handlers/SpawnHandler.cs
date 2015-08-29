using UnityEngine;
using System.Collections;

public class SpawnHandler : MonoBehaviour
{
    string FORWARD_SPAWN_POS = "ForwardSpawnPos";
    string BACK_SPAWN_POS = "BackSpawnPos";
    string RIGHT_SPAWN_POS = "RightSpawnPos";
    string LEFT_SPAWN_POS = "LeftSpawnPos";

    public float timeToFire { get; set; }
    //time elapsed since last fire
    public float timeElapsed { get; set; }
    public bool canUpdate { get; set; }

    protected ObjectPoolingScript _poolInstance;

    protected Vector3 _spawnPosRight;
    protected Vector3 _spawnPosLeft;
    protected Vector3 _spawnPosForward;
    protected Vector3 _spawnPosBack;

    public SpawnHandler()
    {
    }

    void Awake()
    {
        _poolInstance = ObjectPoolingScript.instance;

        for (int index = 0; index < transform.childCount; index++)
        {
            Transform child = transform.GetChild(index);

            if (child.name == FORWARD_SPAWN_POS)
            {
                _spawnPosForward = child.position;
            }
            else if (child.name == BACK_SPAWN_POS)
            {
                _spawnPosBack = child.position;
            }
            else if (child.name == LEFT_SPAWN_POS)
            {
                _spawnPosLeft = child.position;
            }
            else if(child.name == RIGHT_SPAWN_POS)
            {
                _spawnPosRight = child.position;
            }
        }
    }

    void Start()
    {
        timeElapsed = timeToFire = 0.0f;
    }

    void OnEnable()
    {
        canUpdate = true;
        Reset();
    }

    void OnDisable()
    {
        canUpdate = false;
        Reset();
    }

    public virtual void Reset()
    {
        timeElapsed = 0.0f;
    }

    void Update()
    {
        if (!canUpdate) return;

        timeElapsed += Time.deltaTime;

        if (timeElapsed >= timeToFire)
        {
            Fire();
        }
    }

    public virtual void Fire()
    {

    }
}
