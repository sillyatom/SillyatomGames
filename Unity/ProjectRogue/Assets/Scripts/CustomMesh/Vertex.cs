using UnityEngine;
using System.Collections;

public class Vertex
{
    public Vector3 position;
    private Color32 _color;
    public Color32 color
    {
        get
        {
            return _color;
        }
        set
        {
            _color.r = value.r;
            _color.g = value.g;
            _color.b = value.b;
            _color.a = value.a;
        }
    }
    public int index;
    public int active;
    public Vertex(Vector3 pos, int nodeIndex = -1, int active = 0)
    {
        position = pos;
        index = nodeIndex;
        this.active = active;
        _color = new Color32(255, 255, 255, 255);
    }
}
