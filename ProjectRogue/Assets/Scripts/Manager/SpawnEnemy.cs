using UnityEngine;
using System.Collections;

public class SpawnEnemy : MonoBehaviour 
{

	public static SpawnEnemy instance;
	ObjectPoolingScript _pool;
	
	int count;
	bool _canUpdate;
	GameObject _player;
	
	const string POOL_KEY = "enemy1";
	
	public bool canUpdate
	{
		get
		{
			return this._canUpdate;
		}
		set
		{
			this._canUpdate = value;	
		}
	}
	void Awake()
	{
		instance = this;
	}
	
	// Use this for initialization
	void Start () 
	{
		count = 0;
		_canUpdate = false;
		
		_pool = ObjectPoolingScript.instance;
		_player = GameObject.FindGameObjectWithTag("Player");
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (!_canUpdate) return;
		
		if (count < 5)
		{
			CreateEnemy();
//			count++;
		}
	}
	
	void CreateEnemy()
	{
		GameObject enemy = _pool.getGameObject(POOL_KEY);
		if (enemy)
		{
			enemy.GetComponent<Rigidbody>().velocity = Vector3.zero;
			enemy.transform.position = new Vector3(_player.transform.position.x + Random.Range(20, 50), _player.transform.position.y, 
			                                       _player.transform.position.z + Random.Range(20, 50));
			enemy.transform.rotation = Quaternion.identity;
			enemy.GetComponent<FollowScript>()._followTransform = _player.transform;
			enemy.SetActive(true);
		}
	}
}
