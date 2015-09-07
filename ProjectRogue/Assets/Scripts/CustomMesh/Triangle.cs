public class Triangle
{
    public int _vertexA;
    public int _vertexB;
    public int _vertexC;

    int[] _vertices;

    public Triangle(int a, int b, int c)
    {
        _vertexA = a;
        _vertexB = b;
        _vertexC = c;

        _vertices = new int[3];
        _vertices[0] = _vertexA;
        _vertices[1] = _vertexB;
        _vertices[2] = _vertexC;
    }

    public bool Contains(int vertex)
    {
        return (_vertexA == vertex || _vertexB == vertex || _vertexC == vertex);
    }

    public int this[int i]
    {
        get
        {
            return _vertices[i];
        }
    }
}