using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public interface IGrayColorToggle
{
    void SetGrayEffect(float amount);
}

public class GrayColorToggle : MonoBehaviour
{
    private Image _img;

    void Awake()
    {
        _img = gameObject.GetComponent<Image>();
        _img.material = Instantiate<Material>(Resources.Load<Material>("Materials/GrayMaterial"));
    }

    public void SetGrayEffect(float amount)
    {
        _img.material.SetFloat("_EffectAmount", amount); 
    }
}
