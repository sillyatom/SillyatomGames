public class RoomBorderMesh : BorderMesh
{
    public RoomBorderMesh(int width, int height, int quadSize, int borderSize, int wallHeight) : base(width, height, quadSize, borderSize, wallHeight)
    {

    }

    protected override void generateMap(int row, int col, int borderSize)
    {
        base.generateMap(row, col, borderSize);

        /*int exitSize = 1;

        {
            //center left
            int indexX = 0;
            int indexY = Mathf.CeilToInt(col / 2);
            for (int x = indexX; x <= indexX + borderSize; x++)
            {
                for (int y = indexY - exitSize; y <= indexY + exitSize; y++)
                {
                    map[x, y] = 0;
                }
            }
        }
        {
            //center right
            int indexX = row - borderSize - 1;
            int indexY = Mathf.CeilToInt(col / 2);
            for (int x = indexX; x <= indexX + borderSize; x++)
            {
                for (int y = indexY - exitSize; y <= indexY + exitSize; y++)
                {
                    map[x, y] = 0;
                }
            }
        }
        {
            //center top
            int indexX = Mathf.CeilToInt(row / 2);
            int indexY = col - borderSize - 1;
            for (int x = indexX - exitSize; x <= indexX + exitSize; x++)
            {
                for (int y = indexY; y <= indexY + borderSize; y++)
                {
                    map[x, y] = 0;
                }
            }
        }
        {
            //center bottom
            int indexX = Mathf.CeilToInt(row / 2);
            int indexY = 0;
            for (int x = indexX - exitSize; x <= indexX + exitSize; x++)
            {
                for (int y = indexY; y <= indexY + borderSize; y++)
                {
                    map[x, y] = 0;
                }
            }
        }*/
    }
}