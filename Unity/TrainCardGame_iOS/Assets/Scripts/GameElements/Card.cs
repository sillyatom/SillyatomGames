using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Card : ButtonComponent
{
    public string Value{ get; set; }

    public string Type{ get; set; }

    public string ValueType{ get; set; }

    public Image Front;
    public Image Back;

    public void SetGrayEffect(float amount)
    {
        Front.material.SetFloat("_EffectAmount", amount); 
        Back.material.SetFloat("_EffectAmount", amount);
    }

    public void UpdateCard(string value, string type)
    {
        this.Value = value;
        this.Type = type;
        this.ValueType = (value + type);
        UpdateSkin();
    }

    private void UpdateSkin()
    {
        Front.sprite = Resources.Load<Sprite>("Images/Cards/" + this.ValueType);    

        Front.material = Instantiate<Material>(Resources.Load<Material>("Materials/GrayMaterial"));
        Back.material = Instantiate<Material>(Resources.Load<Material>("Materials/GrayMaterial"));
        SetGrayEffect(0);
    }

    public void ShowFrontFace()
    {
        Front.gameObject.SetActive(true);
        Back.gameObject.SetActive(false);
    }

    public void ShowBackFace()
    {
        Front.gameObject.SetActive(false);
        Back.gameObject.SetActive(true);
    }

    public override void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    {
        //only allow if active player is local
        if (SingletonManager.reference.roundHandler.IsActivePlayerLocal)
        {
            //allow only if there is no card selected yet
            if (SingletonManager.reference.cardSelectionHandler.SelectedCard == null)
            {
                EventManager.instance.Raise(new InGameEvent(InGameEvent.ON_CARD_SELECTED, this));
            }
            else
            {
                BridgeDebugger.Log(" [ Card already selected ] ");
            }
        }
        else
        {
            BridgeDebugger.Log(" [ Can't select card, its not local player round ] ");    
        }
    }
}
