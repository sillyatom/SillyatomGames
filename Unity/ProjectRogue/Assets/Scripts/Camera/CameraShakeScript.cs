using UnityEngine;
using System.Collections;

public class CameraShakeScript : MonoBehaviour
{
	public float time;
	float _shakeDecay;
	
	void Start ()
	{
		_shakeDecay = 0f;
	}
	
	public void Shake()
	{
		_shakeDecay = 0f;
		StopCoroutine("CameraShake");
		StartCoroutine("CameraShake");
	}
	
	IEnumerator CameraShake()
	{
		while (_shakeDecay < time)
		{
			_shakeDecay += Time.deltaTime;
			transform.position = transform.position + new Vector3(Random.Range(-0.2f, 0.2f), Random.Range(-0.2f, 0.2f), Random.Range(-0.2f, 0.2f));
			yield return null;
		}
		
		yield return null;
	}
	
	void OnShake(CameraEvent e)
	{
		Shake();
	}
	
	void OnEnable()
	{
		Events.instance.AddListener<CameraEvent>(OnShake);
	}
	
	void OnDisable()
	{
		Events.instance.RemoveListener<CameraEvent>(OnShake);
	}
}

