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
    public HUD hud;

    [SerializeField]
    public SceneTransitionManager sceneTransitionManager;

    [SerializeField]
    public GameObject gameWinDialog;

    [SerializeField]
    public GameObject gameFailDialog;

    [SerializeField]
    public PostURL postMethod;

    [SerializeField]
    public GameObject coin;

    [SerializeField]
    public Transform overlay;

    [SerializeField]
    public Utility utility;

    [SerializeField]
    public AdManager adsManager;
}