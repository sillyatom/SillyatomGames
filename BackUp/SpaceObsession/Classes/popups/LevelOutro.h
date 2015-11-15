#ifndef _LEVEL_OUTRO_H_
#define _LEVEL_OUTRO_H_

#include "cocos2d.h"
#include "../lib/CSBPopup.h"

USING_NS_CC;

class LevelOutro : public CSBPopup
{
public:
    CREATE_FUNC(LevelOutro);
    virtual bool init();
    virtual void construct(std::string fileName);
    void updateStar(int star);
    void updateScoreWin(unsigned int levelStarEarned, unsigned long star, unsigned long totalStar, unsigned long score, unsigned long totalScore);
    void updateScoreFail(unsigned long star, unsigned int toBeEarned);
    void updatePowerupImage(int index, std::string &fileName);
};
#endif
