using UnityEngine;

public class TestDSPDungeon : MonoBehaviour
{
    public int width = 2000;
    public int height = 2000;

    public int minWidth = 30;
    public int maxWidth = 200;

    public int minHeight = 30;
    public int maxHeight = 200;

    public int quadSize;
    public int borderSize;
    public int wallHeight;

    public int numOfPacks = 8;

    BSPTree _tree;

    void Start()
    {
        _tree = new BSPTree(0, 0, width, height, minWidth, minHeight, maxWidth, maxHeight);
        int roomsCreated = 0;
        while (roomsCreated != numOfPacks)
        {
            _tree.Iterate();
            _tree.PrintTree();
            roomsCreated = _tree.data.Count;
        }
    }

    void Update()
    {
        //if (Input.GetMouseButtonDown(0))
        //{
        //    if (_tree.Iterate())
        //    {
        //        _tree.PrintTree();
        //    }
        //    else
        //    {
        //        Debug.Log(" FUCKIN FAILED _ MAY B BUG ");
        //    }
        //}
    }

    void OnDrawGizmos()
    {
        if (_tree != null)
        {
            if (_tree.data != null)
            {
                foreach (var item in _tree.data)
                {
                    DrawNodeRect(item.rect, Color.red);

                    UnityEditor.Handles.BeginGUI();
                    UnityEditor.Handles.color = Color.black;
                    UnityEditor.Handles.Label(new Vector3(item.rect.center.x, 1, item.rect.center.y), item.id.ToString());
                    UnityEditor.Handles.EndGUI();
                }
            }
        }
    }

    void DrawNodeRect(CustomRect rect, Color color)
    {
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y + rect.height), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
        Debug.DrawLine(new Vector3(rect.x, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y), color);
        Debug.DrawLine(new Vector3(rect.x + rect.width, 0, rect.y), new Vector3(rect.x + rect.width, 0, rect.y + rect.height), color);
    }
}
