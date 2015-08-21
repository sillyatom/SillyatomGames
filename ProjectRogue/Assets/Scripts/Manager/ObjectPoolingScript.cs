using UnityEngine;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft;

public class PoolItem
{
	public string type {get; set;}
	public int amount {get; set;}
	public string path {get; set;}
}

public class ObjectPoolingScript : MonoBehaviour 
{
	public static ObjectPoolingScript instance;
	
	int _amount;
	Dictionary<string, List<GameObject>> _pooledObjects;
	List<PoolItem> _poolingData;
	
	void Awake()
	{
		instance = this;	
	}
	
	// Use this for initialization
	void Start () 
	{
		using (StreamReader file = File.OpenText(@"Assets/Resources/data/PoolConfig.json"))
		{
			string jsonString = file.ReadToEnd();
			_poolingData = Newtonsoft.Json.JsonConvert.DeserializeObject<List<PoolItem>>(jsonString);
		}
		
		_pooledObjects = new Dictionary<string, List<GameObject>>();
	}
	
	public void StartPooling()
	{
		int len = _poolingData.Count;
		
		for (int i = 0; i < len; i++)
		{
			int amount = _poolingData[i].amount;
			string path = _poolingData[i].path;
			string key = _poolingData[i].type;
			
			_pooledObjects[key] = new List<GameObject>();
			
			for (int j = 0; j < amount; j++)
			{
				GameObject newObject = (GameObject)Instantiate(Resources.Load(path));
				newObject.SetActive(false);
				_pooledObjects[key].Add(newObject);
			}
		}
	}
	
	public GameObject getGameObject(string type)
	{
		List<GameObject> list = _pooledObjects[type];
		foreach(GameObject obj in list)
		{
			if (!obj.activeInHierarchy)
			{
				return obj;
			}
		}
		return null;
	}
}
