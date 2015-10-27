using UnityEngine;

public class RoomBorderMesh : BorderMesh
{
    int exitSize = 1;
    private IRoomInterface _roomData;

    public RoomBorderMesh(int width, int height, int quadSize, int borderSize, int wallHeight, IRoomInterface roomData) : base(width, height, quadSize, borderSize, wallHeight)
    {
        this._roomData = roomData;
    }

    private void CreateLeftExit()
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

    private void CreateRightExit()
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

    private void CreateTopExit()
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

    private void CreateBottomExit()
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
    }

    protected override void generateMap(int row, int col, int borderSize)
    {
        base.generateMap(row, col, borderSize);

        foreach (var config in _roomData.exitConfig)
        {
            switch (config)
            {
                case ExitConfig.LEFT:
                    CreateLeftExit();
                    break;

                case ExitConfig.RIGHT:
                    CreateRightExit();
                    break;

                case ExitConfig.TOP:
                    CreateTopExit();
                    break;

                case ExitConfig.BOTTOM:
                    CreateBottomExit();
                    break;
            }
        }
    }
}