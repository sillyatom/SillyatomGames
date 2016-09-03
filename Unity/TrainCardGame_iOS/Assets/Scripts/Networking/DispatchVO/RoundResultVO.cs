﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RoundResultVO : HeaderVO
{
    public string cardValueType{ get; set; }

    public int roundId{ get; set; }

    public bool didPullOver{ get; set; }

    public Dictionary<string, List<string>> winningCards{ get; set; }

    public int cardsCount{ get; set; }

    public bool isSweep{ get; set; }

    public int sweepCount{ get; set; }
}