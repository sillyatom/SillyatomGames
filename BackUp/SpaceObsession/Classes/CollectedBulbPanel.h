//
//  CollectedBulbPanel.h
//  MazeDev
//
//  Created by Sillyatom on 07/12/14.
//
//

#ifndef __MazeDev__CollectedBulbPanel__
#define __MazeDev__CollectedBulbPanel__

#include "lib/CSBPopup.h"

class CollectedBulbPanel : public CSBPopup
{
    private:
    
    TextField * _greenBulbCount;
    //TextField * _deadBulbCount;
    //TextField * _stoneBulbCount;
    
    int _greenCount;
    //int _deadCount;
    //int _stoneCount;

	int _totalGreenCount;
	//int _totalDeadCount;
	//int _totalStoneCount;
    
    Vec2 _greenBulbPosition;
    //Vec2 _stoneBulbPosition;
	//Vec2 _deadBulbPosition;
    
    public:
    
    CREATE_FUNC(CollectedBulbPanel);
    virtual bool init();
    virtual void construct(std::string fileName);
    
    void updateGreenCount(int count);
    void updateStoneCount(int count);
    //void updateDeadCount(int count);
    
    int getGreenCount(){ return _greenCount; }
    int getStoneCount(){ return /*_stoneCount*/_greenCount; }
    //int getDeadCount(){ return _deadCount; }
    
    void setGreenBulbPosition(float x, float y){ _greenBulbPosition.x = x; _greenBulbPosition.y = y;}
    Vec2 getGreenBulbPosition(){ return _greenBulbPosition; }
    Vec2 getStoneBulbPosition(){ return /*_stoneBulbPosition*/_greenBulbPosition; }
	//Vec2 getDeadBulbPosition(){ return _deadBulbPosition; }
    
    int getRemainingCount(){ return (_greenCount);}
};

#endif /* defined(__MazeDev__CollectedBulbPanel__) */
