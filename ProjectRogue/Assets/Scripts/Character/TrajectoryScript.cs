using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TrajectoryScript : MonoBehaviour 
{
	List<GameObject> _trajectoryPoints;
	
	private bool _canDraw;
	public static float theta;
	public int _numOfPoints;
	public static float distance;
	
	public bool CanDraw
	{
		get
		{
			return _canDraw;
		}
		set
		{
			_canDraw = value;
		}
	}
	
	void Start () 
	{
		_trajectoryPoints = new List<GameObject>();
		
		for (int index = 0; index < _numOfPoints; index++)
		{
			GameObject point = (GameObject)Instantiate(Resources.Load("prefabs/trajectory"));
			_trajectoryPoints.Add(point);
		}
		
		distance = 20.0f;
		theta = 30;
	}
	
	void UpdateTrajectory()
	{
		float initialVelocity = Mathf.Sqrt((distance * -Physics.gravity.y)/(Mathf.Sin(2.0f * theta * Mathf.Deg2Rad)));
		float initialVelocityX = initialVelocity * Mathf.Cos(theta * Mathf.Deg2Rad);
		float initialVelocityY = initialVelocity * Mathf.Sin(theta * Mathf.Deg2Rad);
		float tof = (- initialVelocityY - initialVelocityY) / Physics.gravity.y;
		float delTime = tof / _numOfPoints;
		float timeElapsed = 0.0f;
		
		for (int index = 0; index < _numOfPoints; index++)
		{
			timeElapsed += delTime;
			
			GameObject point = _trajectoryPoints[index];
			point.transform.position = gameObject.transform.position + gameObject.transform.TransformVector(Vector3.right) * (initialVelocityX * timeElapsed)
				+ gameObject.transform.TransformVector(Vector3.up) * ((0.5f * Physics.gravity.y * timeElapsed * timeElapsed) + (initialVelocityY * timeElapsed));
				;
		}
	}
	
	IEnumerator Fire()
	{
		GameObject missile = Instantiate(Resources.Load("prefabs/missile")) as GameObject;
		float initialVelocity = Mathf.Sqrt((distance * -Physics.gravity.y)/(Mathf.Sin(2 * theta * Mathf.Deg2Rad)));
		float initialVelocityX = initialVelocity * Mathf.Cos(theta * Mathf.Deg2Rad);
		float initialVelocityY = initialVelocity * Mathf.Sin(theta * Mathf.Deg2Rad);
		missile.transform.position = gameObject.transform.position;
		missile.GetComponent<Rigidbody>().velocity = new Vector3(initialVelocityX, initialVelocityY, 0.0f);
		float timeElapsed = 0.0f;
		while(missile.activeInHierarchy)
		{
			timeElapsed += Time.deltaTime;
			missile.transform.position = gameObject.transform.position + gameObject.transform.TransformVector(Vector3.right) * (initialVelocityX * timeElapsed)
				+ gameObject.transform.TransformVector(Vector3.up) * ((0.5f * Physics.gravity.y * timeElapsed * timeElapsed) + (initialVelocityY * timeElapsed));
			;
			yield return null;
		}
	}
	
	void Update()
	{
		UpdateTrajectory();
		
		if (Input.GetMouseButtonDown(0))
		{
			StartCoroutine("Fire");
		}
	}
}
