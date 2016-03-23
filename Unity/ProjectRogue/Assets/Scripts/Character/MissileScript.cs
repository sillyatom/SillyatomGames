using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MissileScript : FireScript 
{
	// Use this for initialization
	void Start () 
	{
		base.Init();
		base.POOL_KEY = "missile";
		_useTrajectory = true;
	}
	
	public override void AddBulletVelocity(GameObject bullet)
	{
		StartCoroutine("Fire");
		bullet.GetComponent<Rigidbody>().AddForce(Vector3.zero,ForceMode.Impulse);
	}
	
	IEnumerator Fire()
	{
		GameObject missile = Instantiate(Resources.Load("prefabs/missile")) as GameObject;
		float initialVelocity = Mathf.Sqrt((TrajectoryScript.distance * -Physics.gravity.y)/(Mathf.Sin(2 * TrajectoryScript.theta * Mathf.Deg2Rad)));
		float initialVelocityX = initialVelocity * Mathf.Cos(TrajectoryScript.theta * Mathf.Deg2Rad);
		float initialVelocityY = initialVelocity * Mathf.Sin(TrajectoryScript.theta * Mathf.Deg2Rad);
		missile.transform.position = gameObject.transform.position;
		missile.GetComponent<Rigidbody>().velocity = new Vector3(initialVelocityX, initialVelocityY, 0.0f);
		float timeElapsed = 0.0f;
		while(missile.activeInHierarchy)
		{
			timeElapsed += Time.deltaTime;
			missile.transform.position = gameObject.transform.position + gameObject.transform.TransformVector(Vector3.right) * (initialVelocityX * timeElapsed)
				+ gameObject.transform.TransformVector(Vector3.up) * ((0.5f * Physics.gravity.y * timeElapsed * timeElapsed) + (initialVelocityY * timeElapsed));
			
			yield return null;
		}
	}
}
