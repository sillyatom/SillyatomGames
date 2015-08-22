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
}
