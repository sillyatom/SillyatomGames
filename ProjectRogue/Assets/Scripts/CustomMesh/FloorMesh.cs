public class FloorMesh : CustomMesh
{
    int[,] mapRef;
    public FloorMesh(int width, int height, int quadSize, int borderSize, int[,] map) : base(width, height, quadSize, borderSize)
    {
        mapRef = map;
    }

    protected override void generateMap(int row, int col, int borderSize)
    {
        for (int x = 0; x < row; x++)
        {
            for (int y = 0; y < col; y++)
            {
                map[x, y] = (mapRef[x, y] == 0) ? 1 : 0;

                //[ TO DO ]
                //Need to work around this 
                if (x == borderSize || y == borderSize || x == row - borderSize - 1 || y == col - borderSize - 1)
                {
                    map[x, y] = 1;
                }
                if (x == borderSize - 1 || y == borderSize - 1 || x == row - borderSize || y == col - borderSize)
                {
                    map[x, y] = 1;
                }
            }
        }
    }
}
