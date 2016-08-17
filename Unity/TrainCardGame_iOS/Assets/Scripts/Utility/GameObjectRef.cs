using UnityEngine;
using System.Collections;

public class GameObjectRef : MonoBehaviour
{
    [SerializeField]
    public RoundHandler roundHandler;

    [SerializeField]
    public CardSelectionHandler cardSelectionHandler;

    [SerializeField]
    public Networking network;

    [SerializeField]
    public APIHandler apiHandler;

    [SerializeField]
    public PopupManager popupManager;

    [SerializeField]
    public SceneTransitionManager sceneTransitionManager;
}