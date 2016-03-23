using UnityEngine;
using System.Collections;

public class CameraEvent : GameEvent
{
	public const string SHAKE = "CameraShake";
	
	public CameraEvent(string type):base(type)
	{
	}
	
}

