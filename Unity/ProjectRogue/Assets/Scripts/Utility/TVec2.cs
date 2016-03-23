public class TVec2<T>
{
    private T _x;
    private T _y;

    public T x
    {
        get
        {
            return _x;
        }
        set
        {
            _x = value;
        }
    }
    public T y
    {
        get
        {
            return _y;
        }
        set
        {
            _y = value;
        }
    }

    public TVec2(T x, T y)
    {
        _x = x;
        _y = y;
    }

    public void Set(T x, T y)
    {
        _x = x;
        _y = y;
    }
}
