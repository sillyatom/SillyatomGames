using UnityEngine;
using System.Collections;

public class LaserScript : MonoBehaviour 
{
	LineRenderer _lineRenderer;
	
	// Use this for initialization
	void Start ()
	{
		_lineRenderer = gameObject.GetComponent<LineRenderer>();
		_lineRenderer.enabled = false;
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (Input.GetButton("Fire1"))
		{
			StopCoroutine("Fire");
			StartCoroutine("Fire");
		}
	}
	
	IEnumerator Fire()
	{
		_lineRenderer.enabled = true;
		
		while(Input.GetButton("Fire1"))
		{
			Ray ray = new Ray(transform.position, transform.right);
			_lineRenderer.SetPosition(0, ray.origin);
			
			RaycastHit hitInfo;
			if (Physics.Raycast(ray, out hitInfo, 100))
			{
				GameObject collidedObject = hitInfo.collider.gameObject;
				if (collidedObject.tag == "Enemy")
				{
					collidedObject.GetComponent<DestroyEnemyScript>().Destroy();
				}
				_lineRenderer.SetPosition(1, hitInfo.point);	
			}
			else
			{
				_lineRenderer.SetPosition(1, ray.GetPoint(100));
			}
			yield return null;
		}
		
		_lineRenderer.enabled = false;
	}
}
