using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Card : MonoBehaviour
{
    public string Value{ get; set; }

    public string Type{ get; set; }

    public string ValueType{ get; set; }

    public Image Front;
    public Image Back;

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
        Back.sprite = Resources.Load<Sprite>("Images/Cards/Back");    
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
}
