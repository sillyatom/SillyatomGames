using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;

public class AdManager : MonoBehaviour
{

    public void ShowAds()
    {
        if (Advertisement.IsReady())
        {
            Advertisement.Show();
        }
    }

    public void ShowRewardedAd()
    {
        if (Advertisement.IsReady("rewardedVideoZone"))
        {
            var options = new ShowOptions { resultCallback = HandleShowResult };
            Advertisement.Show("rewardedVideoZone", options);
        }
    }

    private void HandleShowResult(ShowResult result)
    {
        switch (result)
        {
            case ShowResult.Finished:
                BridgeDebugger.Log("The ad was successfully shown.");
                EventManager.instance.Raise(new GameEvent(GameEvent.ADD_TOKENS, 25));
                break;
            case ShowResult.Skipped:
                BridgeDebugger.Log("The ad was skipped before reaching the end.");
                break;
            case ShowResult.Failed:
                BridgeDebugger.Log("The ad failed to be shown.");
                break;
        }
    }
}
