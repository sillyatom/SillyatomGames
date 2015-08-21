using UnityEngine;
using System.Collections;

public class CameraEvent : GameEvent
{
	public static string SHAKE = "CameraShake";
	
	private string _type;
	public string type
	{
		get
		{
			return _type;
		}
		set
		{
			_type = value;
		}
	}
	
	public CameraEvent(string type)
	{
		_type = type;
	}
	
}

