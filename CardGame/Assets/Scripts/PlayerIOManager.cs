using UnityEngine;
using PlayerIOClient;
using System.Collections;
using System.Collections.Generic;

public class PlayerIOManager : MonoBehaviour 
{
	private bool _joinedRoom;
	private Connection _connection;
	private List<PlayerIOClient.Message> msgList;
	
	void Start()
	{
		msgList = new List<PlayerIOClient.Message>();
		
		//Create a random id
		string playerId = "Guest_"+new System.Random().Next(0, 1000);
		
		var authargs = new Dictionary<string, string> {
						{"userId", playerId}
						};
						
		PlayerIOClient.PlayerIO.Authenticate("cardgame-jtv63cam3kaxpc29knw83w",
											"public",
											authargs,
											null,
											OnConnectedToPlayerIO,
											OnPlayerIOConnectionError
											);
	}
	
	void OnPlayerIOConnectionError(PlayerIOError error)
	{
		Debug.Log("[ OnPlayerIOConnectionError ] "+ error.Message);
	}
	
	void OnConnectedToPlayerIO(Client client)
	{
		Debug.Log("Successfully Connected To PlayerIO");
		
		//comment this line to use production server
		client.Multiplayer.DevelopmentServer = new ServerEndpoint("localhost", 8184);
		
		//Create or Join Room
		client.Multiplayer.CreateJoinRoom(null, "TestRoomType", true, null, null, OnCreateJoinRoomSuccess, OnCreateJoinRoomFail);
	}
	
	void OnCreateJoinRoomSuccess(Connection connection)
	{
		Debug.Log("[ OnCreateJoinRoomSuccess ]");
		
		_connection = connection;
		_joinedRoom = true;
		
		_connection.OnMessage += HandleOnMessage;
	}

	void HandleOnMessage (object sender, Message e)
	{
		msgList.Add(e);
	}
	
	void OnCreateJoinRoomFail(PlayerIOError error)
	{
		Debug.Log(" [ OnCreateJoinRoomFail ] "+error.Message);
	}
	
	void FixedUpdate()
	{
		foreach (var msg in msgList) 
		{
			Debug.Log("{ Message Processing type : }"+msg.Type);
		}
		
		msgList.Clear();
	}
}
