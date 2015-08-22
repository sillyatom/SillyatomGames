using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Node
{
    public Vector3 position;
    public int index;

    public Node(Vector3 pos, int nodeIndex = -1)
    {
        position = pos;
        index = nodeIndex;
    }
}
public class CustomQuad
{
    public Node bottomLeft;
    public Node bottomRight;
    public Node topLeft;
    public Node topRight;

    public CustomQuad(Node bl, Node tl, Node tr, Node br)
    {
        bottomLeft = bl;
        bottomRight = br;
        topLeft = tl;
        topRight = tr;
    }

    public static Node getNode(string node, int x, int y, int quadSize, int index = -1)
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
        return new Node(retVec, index);
    }
}

public class CustomPlane
{
    public CustomQuad[,] quads;
    private int _quadSize;
    private int _width;
    private int _height;

    private List<Vector3> _vertices;
    private List<int> _triangles;

    public CustomPlane(int width, int height, int quadSize)
    {
        _quadSize = quadSize;
        _width = width;
        _height = height;
        _vertices = new List<Vector3>();
        _triangles = new List<int>();

        int row = Mathf.CeilToInt(_width / _quadSize);
        int col = Mathf.CeilToInt(_height / _quadSize);
        quads = new CustomQuad[row, col];

        int runningIndex = -1;
        
        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                int lastRunningIndex = runningIndex;
                Node bottomLeft  = (x-1 > -1) ? quads[x-1, y].bottomRight : (y-1 > -1) ? quads[x, y-1].topLeft : CustomQuad.getNode("bl", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(bottomLeft.position);
                }

                lastRunningIndex = runningIndex;
                Node topLeft     = (x-1 > -1) ? quads[x-1, y].topRight :  CustomQuad.getNode("tl", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(topLeft.position);
                }

                lastRunningIndex = runningIndex;
                Node topRight    = CustomQuad.getNode("tr", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(topRight.position);
                }

                lastRunningIndex = runningIndex;
                Node bottomRight = (y - 1 > -1) ? quads[x, y - 1].topRight : CustomQuad.getNode("br", x, y, quadSize, ++runningIndex);
                if (lastRunningIndex != runningIndex)
                {
                    _vertices.Add(bottomRight.position);
                }

                quads[x, y] = new CustomQuad(bottomLeft, topLeft, topRight, bottomRight);

                _triangles.Add(bottomLeft.index);
                _triangles.Add(topLeft.index);
                _triangles.Add(topRight.index);

                _triangles.Add(bottomRight.index);
                _triangles.Add(bottomLeft.index);
                _triangles.Add(topRight.index);
            }
        }
    }

    public Vector3[] getVertices()
    {
        return _vertices.ToArray();
    }

    public int[] getTriangles()
    {
        return _triangles.ToArray();
    }
}

public class MeshScript : MonoBehaviour
{

	// Use this for initialization
	void Start ()
    {
        gameObject.AddComponent<MeshFilter>();
        gameObject.AddComponent<MeshRenderer>();
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.Clear();
        //mesh.vertices = new Vector3[] 
        //{
        //    new Vector3(0, 0, 0), new Vector3(0, 5, 0), new Vector3(5, 0, 0),
        //    new Vector3(5, 5, 0)
        //};
        //mesh.triangles = new int[] 
        //{
        //    0, 1, 2,
        //    2, 1, 3
        //};
        //mesh.colors32 = new Color32[]
        //{
        //    new Color32(255, 0, 0, 255),
        //    new Color32(0, 255, 0, 255),
        //    new Color32(0, 0, 255, 255),
        //    new Color32(0, 0, 0, 255)
        //};
        //Renderer renderer = gameObject.GetComponent<Renderer>();
        //Shader shader = Shader.Find("Custom/VertexAlphaFow");
        //renderer.material = new Material(shader);

        CustomPlane plane = new CustomPlane(512, 512, 16);
        mesh.vertices = plane.getVertices();
        mesh.triangles = plane.getTriangles();
    }
	
	// Update is called once per frame
	void Update ()
    {
	
	}
}
