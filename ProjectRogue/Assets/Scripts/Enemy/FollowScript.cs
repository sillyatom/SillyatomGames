using UnityEngine;
using System.Collections;

public class FollowScript : MonoBehaviour {

	Transform _followTransform;
	NavMeshAgent agent;
	
    void Awake()
    {
        _followTransform = (GameObject.FindGameObjectWithTag("Player") as GameObject).transform;
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
