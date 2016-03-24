using UnityEngine;
using System;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using GooglePlayGames.BasicApi.Multiplayer;

public class MultiPlayerController : RealTimeMultiplayerListener
{
    private static MultiPlayerController _instance = null;
    private MatchDelegate _matchDelegate;

    private MultiPlayerController()
    {
        
    }

    public void OnRoomSetupProgress(float percent)
    {
        Debug.Log(" [ Multiplayer Controller ] OnRoomSetupProgress - " + percent);
    }

    public void OnRoomConnected(bool success)
    {
        Debug.Log(" [ Multiplayer Controller ] OnRoomConnected - " + success);
    }

    public void OnLeftRoom()
    {
        Debug.Log(" [ Multiplayer Controller ] OnLeftRoom");
    }

    public void OnParticipantLeft(Participant participant)
    {
        Debug.Log(" [ Multiplayer Controller ] OnParticipantLeft - " + participant.ParticipantId);
    }

    public void OnPeersConnected(string[] participantIds)
    {
        Debug.Log(" [ Multiplayer Controller ] OnPeersConnected - " + participantIds.Length);
    }

    public void OnPeersDisconnected(string[] participantIds)
    {
        Debug.Log(" [ Multiplayer Controller ] OnPeersDisconnected - " + participantIds.Length);
    }

    public void OnRealTimeMessageReceived(bool isReliable, string senderId, byte[] data)
    {
        Debug.Log(" [ Multiplayer Controller ] OnRealTimeMessageReceived - " + senderId);
    }

    public void InvitationReceivedDelegate(Invitation invitation, bool shouldAutoAccept)
    {
        
    }

    public void UpdateConfig()
    {
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder()
            .EnableSavedGames()
            .WithInvitationDelegate(InvitationReceivedDelegate)
            .RequireGooglePlus().Build();
        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
    }

    public void AuthenticatePlayer(Action<bool> callback)
    {
        if (Social.localUser.authenticated)
        {
            callback(true);
        }
        else
        {
            Social.localUser.Authenticate((bool success) =>
                {
                    Debug.Log("[ Multiplayer Controller ] Authenticate Status - " + success);
                    callback(success);
                });
        }
    }

    public void SignOff()
    {
        PlayGamesPlatform.Instance.SignOut();
    }

    public static MultiPlayerController Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = new MultiPlayerController();
            }
            return _instance;
        }
    }
}
