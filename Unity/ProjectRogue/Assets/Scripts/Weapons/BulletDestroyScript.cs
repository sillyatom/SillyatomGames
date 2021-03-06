﻿using UnityEngine;
using System.Collections;

public class BulletDestroyScript : MonoBehaviour 
{
	Rigidbody _body;
	
	void Start()
	{
		_body = GetComponent<Rigidbody>();
	}
	
	void OnCollisionEnter(Collision collision)
	{
		_body.velocity = Vector3.zero;	
		gameObject.SetActive(false);
	}
}
