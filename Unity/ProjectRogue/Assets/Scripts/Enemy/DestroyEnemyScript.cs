using UnityEngine;
using System.Collections;

public class DestroyEnemyScript : MonoBehaviour 
{
	Rigidbody _body;
	
	void Start()
	{
		_body = gameObject.GetComponent<Rigidbody>();
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
	
	public void Destroy()
	{
		Reset();
	}
}
