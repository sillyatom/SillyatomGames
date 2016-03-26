using UnityEngine;
using System.Collections;

public class NetworkConstants
{
    //minimum opponents
    public static uint MIN_PLAYERS = 1;
    public static uint MAX_PLAYERS = 3;

    public enum ENUM_GameTypes : uint
    {
        TRAIN = 0
    }
}
