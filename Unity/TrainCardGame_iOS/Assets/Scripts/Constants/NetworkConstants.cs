﻿using UnityEngine;
using System.Collections;

public class NetworkConstants
{
    public enum API
    {
        GAME_CENTER_AUTH_SUCCESS = 0,
        GAME_CENTER_AUTH_FAILED = 1,
        MATCH_STARTED = 2,
        HOST_DATA = 3,
        CARDS_DATA = 4,
        ROUND_RESULT = 5
    }

    public static string KEY_API = "api";
    public static string KEY_API_ID = "api_id";
    public static string KEY_SENDER = "sender";
    public static string KEY_HOST = "host";
    public static string KEY_PLAYERS = "players";
    public static string KEY_IS_HOST = "is_host";
    public static string KEY_PLAYER_IDS = "playerids";
    public static string KEY_PLAYER_ID = "player_id";
    public static string KEY_CARDS_DATA = "cards_data";
}