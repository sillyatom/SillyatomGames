using UnityEngine;
using System.Collections;

public class FollowScript : MonoBehaviour {

	public Transform _followTransform;
	
	NavMeshAgent agent;
	Rigidbody _body;
	
	void Start()
	{
		_body = gameObject.GetComponent<Rigidbody>();
	}
	
	// Use this for initialization
	void OnEnable () 
	{
		agent = gameObject.GetComponent<NavMeshAgent>();
	}
	
	void OnDisable()
	{
		agent = null;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (agent)
		{
			agent.SetDestination(_followTransform.position);		
		}
	}
	
	void OnCollisionEnter(Collision collision)
	{
		if (collision.gameObject.tag == "Bullet")
		{
			_body.velocity = collision.relativeVelocity;
			Invoke("Reset", 0.2f);
		}
	}
	
	void Reset()
	{
		gameObject.SetActive(false);
		CancelInvoke();
		
		GameObject splash = (GameObject)Instantiate(Resources.Load("prefabs/splash"));
		Vector3 splashPos = _body.transform.position;
		splashPos.y = 0.1f;
		splash.transform.position = splashPos;
	}
}
