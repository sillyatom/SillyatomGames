using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

public class EchoTest : MonoBehaviour
{
    public Text inputText;
    public Text outputText;

    private string _out = "";
    private WebSocket _socket;
    // Use this for initialization
    IEnumerator Start()
    {
        _socket = new WebSocket(new Uri("ws://52.35.235.159:8080/websocket/25"));
        if (outputText != null)
        {
            outputText.text = "connecting...";
        }
        yield return StartCoroutine(_socket.Connect());

        while (true)
        {
            string reply = _socket.RecvString();

            if (reply != null)
            {
                _out = _out + reply + "\n";

                if (outputText != null)
                {
                    outputText.text = _out;
                }
            }

            if (_socket.error != null)
            {
                Debug.LogError("Error: " + _socket.error);
                break;
            }

            yield return 0;
        }
        _socket.Close();
    }

    public void SendString()
    {
        _socket.SendString(inputText.text);
    }
}
