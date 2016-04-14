using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class ButtonComponent : MonoBehaviour, IPointerClickHandler
{
    virtual public void OnPointerClick(PointerEventData eventData)
    {
        ExecuteEvents.ExecuteHierarchy(transform.parent.gameObject, eventData, ExecuteEvents.pointerClickHandler);
    }
}