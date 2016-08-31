using UnityEngine;
using System.Collections;

public class GameScreenMonoBehaviour : SceneMonoBehaviour
{
    protected override void OnGameEvent(GameEvent gEvent)
    {
        base.OnGameEvent(gEvent);
        //TODO execute all this only when there is no active game

        //This can be controlled from native code
        //{
        // if the player already started the game, he / she should not be allowed to start a game or
        // clear the current game if any
        //}

        //In Case of Invite Players
        //The player can accept the invitation from any screen
        if (gEvent.type == GameEvent.DETERMINING_HOST)
        {
            SingletonManager.reference.popupManager.CreateGenericPopup("Host Selection", "Determining Host...");
        }
        else if (gEvent.type == GameEvent.MATCH_STARTED)
        {
            SingletonManager.reference.popupManager.RemoveActivePopup();
            EventManager.instance.Raise(new GameEvent(GameEvent.ADD_TOKENS, -GameSelectionScreen.GetEntryFees()));
            MoveToScene(TagConstants.TAG_MAIN_GAME);
        }
    }
}
