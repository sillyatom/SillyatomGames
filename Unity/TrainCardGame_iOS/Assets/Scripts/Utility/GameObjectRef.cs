using UnityEngine;
using System.Collections;

public class GameObjectRef : MonoBehaviour
{
    [SerializeField]
    public MainGame mainGame;

    [SerializeField]
    public RoundHandler roundHandler;

    [SerializeField]
    public CardSelectionHandler cardSelectionHandler;

    [SerializeField]
    public Networking network;

    [SerializeField]
    public APIHandler apiHandler;
}