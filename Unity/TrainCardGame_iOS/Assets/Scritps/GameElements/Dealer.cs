using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Dealer : SceneMonoBehaviour
{
    private List<GameObject> _cards;
    private RectTransform rectTransform;

    override public void Init()
    {
        base.Init();
        rectTransform = GetComponent<RectTransform>();

        CreateCards();
    }

    private void CreateCards()
    {
        _cards = new List<GameObject>();

        foreach (var type in CardConstants.CARD_TYPES)
        {
            foreach (var value in CardConstants.CARD_VALUES)
            {
                GameObject card = Instantiate<GameObject>(Resources.Load<GameObject>("Prefabs/Card"));
                card.transform.parent = rectTransform;
                card.transform.localScale = Vector3.one;
                card.transform.localPosition = Vector3.zero;
                card.GetComponent<Card>().UpdateCard(value, type);
                _cards.Add(card);
            }
        }
    }
}