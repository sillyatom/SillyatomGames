using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class BridgeDebugger
{
    [DllImport("__Internal")]
    private static extern void debugMessage(string msg);

    public static void Log(string msg)
    {
        #if DEBUG && !UNITY_EDITOR
        debugMessage(msg);
        #endif
    }
}