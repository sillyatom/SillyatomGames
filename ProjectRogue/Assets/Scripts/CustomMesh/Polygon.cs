using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Polygon
{
    public Vertex bottomLeft;
    public Vertex bottomRight;
    public Vertex topLeft;
    public Vertex topRight;
    public Color32 color;
    public List<int> triangles;
    private int _config;
    public Polygon(Vertex bl, Vertex tl, Vertex tr, Vertex br, Color32 clr)
    {
        bottomLeft = bl;
        topLeft = tl;
        topRight = tr;
        bottomRight = br;
        color = clr;

        _config = bottomLeft.active + topLeft.active + topRight.active + bottomRight.active;

        UpdateTriangles();
    }

    private void UpdateTriangles()
    {
        triangles = new List<int>();

        if (_config == 4)
        {
            triangles.Add(bottomLeft.index);
            triangles.Add(topLeft.index);
            triangles.Add(topRight.index);

            triangles.Add(bottomRight.index);
            triangles.Add(bottomLeft.index);
            triangles.Add(topRight.index);
        }
        else if (_config == 3)
        {
            if (!triangles.Contains(bottomLeft.index) && bottomLeft.active == 1)
                triangles.Add(bottomLeft.index);
            if (!triangles.Contains(topLeft.index) && topLeft.active == 1)
                triangles.Add(topLeft.index);
            if (!triangles.Contains(topRight.index) && topRight.active == 1)
                triangles.Add(topRight.index);
            if (!triangles.Contains(bottomRight.index) && bottomRight.active == 1)
                triangles.Add(bottomRight.index);
            if (!triangles.Contains(bottomLeft.index) && bottomLeft.active == 1)
                triangles.Add(bottomLeft.index);
            if (!triangles.Contains(topRight.index) && topRight.active == 1)
                triangles.Add(topRight.index);
        }
    }

    public byte getAlpha() { return color.a; }

    public void UpdateColor(Color32 clr)
    {
        bottomLeft.color = clr;
        bottomRight.color = clr;
        topLeft.color = clr;
        topRight.color = clr;
        color = clr;
    }

    public static Vertex getNode(string node, int x, int y, int quadSize, int index = -1)
    {
        Vector3 retVec;

        float xPos = x * quadSize;
        float yPos = y * quadSize;

        switch (node)
        {
            case "tl":
                retVec = new Vector3(xPos, 0, yPos + quadSize);
                break;

            case "tr":
                retVec = new Vector3(xPos + quadSize, 0, yPos + quadSize);
                break;

            case "bl":
                retVec = new Vector3(xPos, 0, yPos);
                break;

            case "br":
                retVec = new Vector3(xPos + quadSize, 0, yPos);
                break;
            default:
                retVec = Vector3.zero;
                break;
        }
        return new Vertex(retVec, index);
    }
}

