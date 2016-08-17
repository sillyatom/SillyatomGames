using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CardConstants
{
    public static int CARD_VALUE_START = 0;
    public static int CARD_VALUE_2 = 0;
    public static int CARD_VALUE_3 = 1;
    public static int CARD_VALUE_4 = 2;
    public static int CARD_VALUE_5 = 3;
    public static int CARD_VALUE_6 = 4;
    public static int CARD_VALUE_7 = 5;
    public static int CARD_VALUE_8 = 6;
    public static int CARD_VALUE_9 = 7;
    public static int CARD_VALUE_10 = 8;
    public static int CARD_VALUE_J = 9;
    public static int CARD_VALUE_Q = 10;
    public static int CARD_VALUE_K = 11;
    public static int CARD_VALUE_A = 12;
    public static int CARD_VALUE_END = 13;

    public static List<string> CARD_VALUES = new List<string>(new string[]{ "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" });
    public static List<string> CARD_TYPES = new List<string>(new string[]{ "H", "S" });
    //    public static List<string> CARD_TYPES = new List<string>(new string[]{ "D", "C", "H", "S" });
}
    