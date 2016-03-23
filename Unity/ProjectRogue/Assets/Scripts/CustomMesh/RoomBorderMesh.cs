using UnityEngine;

public class RoomBorderMesh : BorderMesh
{
    int exitSize = 1;
    private IRoomInterface _roomData;

    public RoomBorderMesh(int width, int height, int quadSize, int borderSize, int wallHeight, IRoomInterface roomData) : base(width, height, quadSize, borderSize, wallHeight)
    {
        this._roomData = roomData;
    }
    
    private int GetIndexFromPosition(bool isX, Vector3 position)
    {
    	if (isX)
    	{
    		return (int)((position.x - _roomData.rect.x)/quadSize);
    	}
    	return (int)((position.z - _roomData.rect.y)/quadSize);
    }
    
    private void CreateLeftExit(Vector3 position)
    {
        //center left
        int indexX = 0;
        int indexY = GetIndexFromPosition(false, position);
        
        for (int x = indexX; x <= indexX + borderSize; x++)
        {
            for (int y = indexY - exitSize; y <= indexY + exitSize; y++)
            {
            	if (isWithinRange(x, y))
            	{
					map[x, y] = 0;
            	}
            }
        }
    }

	private void CreateRightExit(Vector3 position)
    {
        //center right
        int indexX = row - borderSize - 1;
        int indexY = GetIndexFromPosition(false, position);
        
        for (int x = indexX; x <= indexX + borderSize; x++)
        {
            for (int y = indexY - exitSize; y <= indexY + exitSize; y++)
            {
				if (isWithinRange(x, y))
				{
					map[x, y] = 0;
				}
			}
        }
    }

	private void CreateTopExit(Vector3 position)
    {
        //center top
        int indexX = GetIndexFromPosition(true, position);
        int indexY = col - borderSize - 1;
        
        for (int x = indexX - exitSize; x <= indexX + exitSize; x++)
        {
            for (int y = indexY; y <= indexY + borderSize; y++)
            {
				if (isWithinRange(x, y))
				{
					map[x, y] = 0;
				}
			}
        }
    }

	private void CreateBottomExit(Vector3 position)
    {
        //center bottom
        int indexX = GetIndexFromPosition(true, position);
        int indexY = 0;
        
        for (int x = indexX - exitSize; x <= indexX + exitSize; x++)
        {
            for (int y = indexY; y <= indexY + borderSize; y++)
            {
				if (isWithinRange(x, y))
				{
					map[x, y] = 0;
				}
			}
        }
    }

    protected override void generateMap(int row, int col, int borderSize)
    {
        base.generateMap(row, col, borderSize);
		
		Debug.Assert(_roomData.exitConfig.Count == _roomData.exitPositions.Count, "Data mismatch - ExitConfig");
		
        for (int index = 0; index < _roomData.exitConfig.Count; index++)
        {
        	ExitConfig config = _roomData.exitConfig[index];
            switch (config)
            {
                case ExitConfig.LEFT:
                    CreateLeftExit(_roomData.exitPositions[index]);
                    break;

                case ExitConfig.RIGHT:
					CreateRightExit(_roomData.exitPositions[index]);
                    break;

                case ExitConfig.TOP:
					CreateTopExit(_roomData.exitPositions[index]);
                    break;

                case ExitConfig.BOTTOM:
					CreateBottomExit(_roomData.exitPositions[index]);
                    break;
            }
        }
    }
}