using UnityEngine;
using System.Collections;

public class MouseFacingDirScript : MonoBehaviour 
{
	public static float angle = 0.0f;
	// Use this for initialization
	void Start () 
	{
	
	}
	
	// Update is called once per frame
	void Update () 
	{
		Vector3 mousePosition = Input.mousePosition;
		
		Vector3 playerPosition = gameObject.transform.position;
		Vector3 playerScreenPos = Camera.main.WorldToScreenPoint(playerPosition);
		
		angle = Mathf.Atan2((mousePosition.y - playerScreenPos.y), (mousePosition.x - playerScreenPos.x)) * Mathf.Rad2Deg;
		gameObject.transform.rotation = Quaternion.AngleAxis(angle, Vector3.down);
	}
}
