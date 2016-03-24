using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;

public class Test : MonoBehaviour
{
	
	public Image img;

	[DllImport ("__Internal")]
	private static extern void authenticateLocalPlayer ();

	void Awake ()
	{
		img.gameObject.SetActive (false);
	}

	void ListenerMethod (string msg)
	{
		Debug.Log (" In Unity " + msg);
		img.gameObject.SetActive (true);
		authenticateLocalPlayer ();
	}
}
