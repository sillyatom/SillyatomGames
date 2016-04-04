using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class SpinHandler : SceneMonoBehaviour
{
    public List<Card> Reel
    {
        get;
        set;
    }

    public int SelectedIndex
    {
        get
        {
            return _startIndex;    
        }
    }

    private float _symbolHeight;
    private float _parentHeight;
    private float _thresholdY;
    private float _lastPosY;

    private float _spinDuration;
    private float _spinStopDuration;
    private float _spinAcceleration;
    private float _spinSpeed;
    private float _timeElapsed;

    private bool _isSpinning;
    private bool _canUpdate;

    private int _startIndex;
    private int _endIndex;
    private int _thresholdIndex;

    public Action<int, string> OnSpinCompleteCallback;

    public override void Init()
    {
        base.Init();
    }

    public void OnSelectedCardDealt()
    {
        _startIndex = (_startIndex == 0) ? Reel.Count - 1 : _startIndex - 1;

    }

    private void OnReset()
    {
        ResetReel();
    }

    public void InitReel(List<Card> symbols)
    {
        _spinSpeed = 10.0f;
        _spinAcceleration = 100.0f;
        _spinStopDuration = 0.0f;

        Reel = symbols;

        int symbolCount = symbols.Count;
        RectTransform rectTransform = symbols[0].gameObject.transform.parent.GetComponent<RectTransform>();
        _parentHeight = rectTransform.rect.height;
        rectTransform = symbols[0].gameObject.transform.GetComponent<RectTransform>();
        _symbolHeight = rectTransform.rect.height;
        _thresholdY = -_symbolHeight;
        _startIndex = symbolCount - 1;

        ResetReel();
    }

    private Card GetSymbolAtIndex(int index)
    {
        return Reel[index];
    }

    private void SetSymbolPosition(float pos, Card symbol)
    {
        symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x,
            pos, symbol.transform.localPosition.z
        );
    }

    private void ResetReel()
    {
        int symbolCount = Reel.Count;

        _lastPosY = 0.0f;
    
        for (int index = _startIndex; index < Reel.Count; index++)
        {
            SetSymbolPosition(_lastPosY, GetSymbolAtIndex(index));
            _lastPosY += _symbolHeight + GameConstants.SYMBOL_SPACE;
        }

        if (_startIndex == 0)
        {
            return;
        }

        for (int index = 0; index < _startIndex; index++)
        {
            SetSymbolPosition(_lastPosY, GetSymbolAtIndex(index));
            _lastPosY += _symbolHeight + GameConstants.SYMBOL_SPACE;
        }
    }

    public void Spin(float duration)
    {
        ResetReel();

        _spinDuration = duration;
        _spinStopDuration = 0.0f;
        _timeElapsed = 0.0f;
        _isSpinning = true;
        _canUpdate = true;
    }

    private void StopSpin()
    {
        _canUpdate = false;
        float refHeight = _parentHeight;
        Card nextSymbol = null;

        int reelSize = Reel.Count;
        string easeType = "easeOutSine";
        for (int index = 0; index < reelSize; index++)
        {
            Card symbol = GetSymbolAtIndex(index);
            if (symbol.transform.localPosition.y >= -refHeight && symbol.transform.localPosition.y <= 0)
            {
                float time = (2.0f / refHeight) * Mathf.Abs(symbol.transform.localPosition.y);
                iTween.MoveTo(symbol.gameObject, iTween.Hash("oncomplete", "OnSpinAnimComplete", "oncompletetarget", gameObject, "easeType", easeType, "time", time, "islocal", true, "y", 0.0f));
                _startIndex = index;
                index = (_startIndex == reelSize - 1) ? 0 : _startIndex + 1;
                Debug.Log("Selected Next Symbol : " + index);
                nextSymbol = GetSymbolAtIndex(index);
                iTween.MoveTo(nextSymbol.gameObject, iTween.Hash("easeType", easeType, "time", time, "islocal", true, "y", _symbolHeight + GameConstants.SYMBOL_SPACE));
                return;
            }

        }
    }

    private void OnSpinAnimComplete()
    {
        //add a delay for the below two animations
        OnSpinCompleteCallback(_startIndex, Reel[_startIndex].ValueType);

        int index = (_startIndex == 0) ? Reel.Count - 1 : _startIndex - 1;
        //the next card will already be at the top at this frame
        //so move it down and animate
        Card symbol = GetSymbolAtIndex(index);
        SetSymbolPosition(-_symbolHeight, symbol);
        iTween.MoveTo(symbol.gameObject, iTween.Hash("oncomplete", "OnReset", 
                "oncompletetarget", gameObject, "easeType", "easeOutSine", "time", GameConstants.DEAL_ANIM_TIME * 2.0f, "islocal", true, "y", 0.0f));
    }

    bool CanStopSpin()
    {
        int reelSize = Reel.Count;
        for (int index = 0; index < reelSize; index++)
        {
            Card symbol = GetSymbolAtIndex(index);
            if (symbol.transform.localPosition.y <= 0 && symbol.transform.localPosition.y >= -_parentHeight)
            {
                return true;
            }
        }
        return false;
    }

    void Update()
    {
        float dt = Time.deltaTime;

        if (_canUpdate && _isSpinning)
        {
            _timeElapsed += dt;

            if (_timeElapsed <= _spinDuration)
            {
                _spinAcceleration = Utility.SinInterpolate(_timeElapsed, 50.0f, 0.0f, _spinDuration + 2.0f);
            }
            else if (_timeElapsed > _spinDuration && _timeElapsed < _spinDuration * 2.0f)
            {
                _spinStopDuration += dt;
                _spinAcceleration = Utility.SinInterpolate(_spinDuration - _spinStopDuration, 50.0f, 0.0f, _spinDuration + 2.0f);
            }
            if (_timeElapsed >= _spinDuration + _spinStopDuration)
            {
                if (CanStopSpin())
                {
                    _timeElapsed = 0.0f;
                    _spinStopDuration = 0.0f;
                    StopSpin();
                }
            }
            else
            {
                int symbolCount = Reel.Count;
                foreach (Card symbol in Reel)
                {
                    float newPos = symbol.transform.localPosition.y - (_spinAcceleration * dt * _spinSpeed);
                    symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x, 
                        newPos, symbol.transform.localPosition.z);

                    if (newPos <= _thresholdY)
                    {
                        symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x, 
                            _lastPosY, symbol.transform.localPosition.z);
                        _lastPosY += _symbolHeight + GameConstants.SYMBOL_SPACE;
                    }
                }
                _lastPosY -= (_spinAcceleration * dt * _spinSpeed);
            }
        }
    }
}