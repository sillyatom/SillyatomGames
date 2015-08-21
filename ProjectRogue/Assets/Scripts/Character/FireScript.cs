using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class FireScript : MonoBehaviour 
{
	private bool _canFire;
	
	public float _fireThreshold;
	private float _lastFireTime;
	
	Rigidbody _body;
	ObjectPoolingScript _pool;
	CameraSmoothFollow _cameraScript;
	
	protected string POOL_KEY;
	protected bool _useTrajectory;
	
	void Start () 
	{
		Init();
	}
	
	public virtual void Init()
	{
		_lastFireTime = 0.0f;
		_cameraScript = Camera.main.GetComponent<CameraSmoothFollow>();
		_pool = ObjectPoolingScript.instance;
		POOL_KEY = "bullet1";
		_useTrajectory = false;
	}
	
	void OnDisabled()
	{
		_lastFireTime = _fireThreshold;
	}
	
	void FixedUpdate()
	{
		UpdateFire();
	}
	
	public virtual void UpdateFire()
	{
		if (_canFire && _lastFireTime >= _fireThreshold)
		{
			_lastFireTime = 0.0f;
			GameObject bullet = _pool.getGameObject(POOL_KEY);
			bullet.SetActive(true);
			
			bullet.transform.position = transform.position;
			bullet.transform.rotation = Quaternion.identity;
			bullet.transform.Rotate(new Vector3(0, MouseFacingDirScript.angle, 0));
			
			AddBulletVelocity(bullet);
			
			_cameraScript.Shake();	
		}
		else
		{
			_lastFireTime += Time.fixedDeltaTime;
		}
	}
	
	public virtual void AddBulletVelocity(GameObject bullet)
	{
		Rigidbody rb = bullet.GetComponent<Rigidbody>();
		rb.velocity = rb.transform.InverseTransformDirection(Vector3.right) *  50.0f;
	}
	
	// Update is called once per frame
	void Update () 
	{
		UpdateInput();
	}
	
	public virtual void UpdateInput()
	{
		if (Input.GetMouseButtonDown(0))
		{
			_canFire = true;
		}
		else if (Input.GetMouseButtonUp(0))
		{
			_canFire = false;
		}
	}
}
