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
        _thresholdY = symbols[(symbolCount - 2)].transform.localPosition.y;
        _startIndex = symbolCount - 1;

        ResetReel();
    }

    private Card GetSymbolAtIndex(int index)
    {
        return Reel[index];
    }

    private void ResetReel()
    {
        int symbolCount = Reel.Count;
        _endIndex = (_startIndex == 0) ? (symbolCount - 1) : (_startIndex - 1);
        _thresholdIndex = symbolCount - 1;
        Transform symTransform = GetSymbolAtIndex(_startIndex).transform;
        _lastPosY = symTransform.localPosition.y;

        for (int index = _startIndex; index <= _thresholdIndex; index++)
        {
            Card symbol = GetSymbolAtIndex(index);
            symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x, 
                _lastPosY, symbol.transform.localPosition.z);
            _lastPosY -= (_symbolHeight + GameConstants.SYMBOL_SPACE);
        }

        _lastPosY = GetSymbolAtIndex(_startIndex).transform.localPosition.y;

        for (int index = _endIndex; index >= 0; index--)
        {
            _lastPosY += (_symbolHeight + GameConstants.SYMBOL_SPACE);
            Card symbol = GetSymbolAtIndex(index);
            symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x, 
                _lastPosY, symbol.transform.localPosition.z);
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
                if (index - 1 < 0)
                {
                    index = reelSize - 1;
                }
                else
                {
                    index = index - 1;
                }
                nextSymbol = GetSymbolAtIndex(index);
                iTween.MoveTo(nextSymbol.gameObject, iTween.Hash("easeType", easeType, "time", time, "islocal", true, "y", _symbolHeight + GameConstants.SYMBOL_SPACE));
                return;
            }

        }
    }

    private void OnSpinAnimComplete()
    {
        OnSpinCompleteCallback(_startIndex, Reel[_startIndex].ValueType);
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
                for (int index = symbolCount - 1; index >= 0; index--)
                {
                    Card symbol = Reel[index];
                    float newPos = symbol.transform.localPosition.y - (_spinAcceleration * dt * _spinSpeed);
                    symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x, 
                        newPos, symbol.transform.localPosition.z);

                    if (newPos <= _thresholdY)
                    {
                        _lastPosY = GetSymbolAtIndex((index == symbolCount - 1) ? 0 : index + 1).transform.localPosition.y + _symbolHeight + GameConstants.SYMBOL_SPACE;
                        symbol.transform.localPosition = new Vector3(symbol.transform.localPosition.x, 
                            _lastPosY, symbol.transform.localPosition.z);
                    }
                }
            }
        }
    }
}