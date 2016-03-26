using UnityEngine;
using System;
using System.Collections;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using GooglePlayGames.BasicApi.Multiplayer;
using System.Runtime.InteropServices;

public class MultiPlayerController : RealTimeMultiplayerListener
{
    [DllImport("__Internal")]
    private static extern void BridgeDebugMessage(string msg);

    private static MultiPlayerController _instance = null;
    private MatchDelegate _matchDelegate;

    private MultiPlayerController()
    {
        
    }

    public void OnRoomSetupProgress(float percent)
    {
        DebugMessage(" [ Multiplayer Controller ] OnRoomSetupProgress - " + percent);
    }

    public void OnRoomConnected(bool success)
    {
        DebugMessage(" [ Multiplayer Controller ] OnRoomConnected - " + success);
    }

    public void OnLeftRoom()
    {
        DebugMessage(" [ Multiplayer Controller ] OnLeftRoom");
    }

    public void OnParticipantLeft(Participant participant)
    {
        DebugMessage(" [ Multiplayer Controller ] OnParticipantLeft - " + participant.ParticipantId);
    }

    public void OnPeersConnected(string[] participantIds)
    {
        DebugMessage(" [ Multiplayer Controller ] OnPeersConnected - " + participantIds.Length);
    }

    public void OnPeersDisconnected(string[] participantIds)
    {
        DebugMessage(" [ Multiplayer Controller ] OnPeersDisconnected - " + participantIds.Length);
    }

    public void OnRealTimeMessageReceived(bool isReliable, string senderId, byte[] data)
    {
        DebugMessage(" [ Multiplayer Controller ] OnRealTimeMessageReceived - " + senderId);
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

    public ILocalUser LocalPlayer
    {
        get
        {
            return PlayGamesPlatform.Instance.localUser;
        }
    }

    public bool IsLocalPlayerAuthenticated
    {
        get
        {
            return LocalPlayer.authenticated;
        }
    }

    public void AuthenticatePlayer(Action<bool> callback)
    {
        if (IsLocalPlayerAuthenticated)
        {
            callback(true);
        }
        else
        {
            LocalPlayer.Authenticate((bool success) =>
                {
                    callback(success);
                });
        }
    }

    public void StartchMatchMaking(uint matchType)
    {
        PlayGamesPlatform.Instance.RealTime.CreateQuickGame(NetworkConstants.MIN_PLAYERS, NetworkConstants.MAX_PLAYERS, matchType, this);
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

    public void DebugMessage(string msg)
    {
        BridgeDebugMessage(msg);        
    }
}
