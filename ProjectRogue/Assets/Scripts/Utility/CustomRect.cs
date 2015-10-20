using UnityEngine;
public class CustomRect
{
    public float x;
    public float y;
    public float width;
    public float height;
    public float xMin
    {
        get { return x; }
    }
    public float yMin
    {
        get { return y; }
    }
    public float xMax { get { return x + width; } }
    public float yMax { get { return y + height; } }
    private Vector2 _center;
    public Vector2 center
    {
        get
        {
            _center.x = x + width / 2;
            _center.y = y + height / 2;

            return _center;
        }
    }

    public float Area
    {
        get
        {
            return width * height;
        }
    }

    public CustomRect()
    {
        x = 0; y = 0; width = 0; height = 0;
        _center = Vector2.zero;
    }

    public CustomRect(float x, float y, float width, float height)
    {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        _center = Vector2.zero;
    }

    public static CustomRect Zero
    {
        get
        {
            return new CustomRect();
        }
    }
}
