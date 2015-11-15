#include "LevelOutro.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool LevelOutro::init()
{
    if (!CSBPopup::init())
    {
        return false;
    }
    
    return true;
}

void LevelOutro::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "playnextlevelbtn"));
        if (btn)
        {
            btn->addTouchEventListener(CC_CALLBACK_2(LevelOutro::touchCallback, this));
        }
    }
    {
        Button * btn = static_cast<Button*>(_layout->getChildByName("menubtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(LevelOutro::touchCallback, this));
    }
    {
        Button * btn = static_cast<Button*>(_layout->getChildByName("retrybtn")
                                            );
        btn->addTouchEventListener(CC_CALLBACK_2(LevelOutro::touchCallback, this));
    }
}

void LevelOutro::updateStar(int star)
{
    {
        ui::ImageView * holder = static_cast<ui::ImageView*>(Helper::seekWidgetByName(_layout, "holder1"));
        auto star = Sprite::create("physics/stars.png");
        getLayout()->addChild(star);
        star->setPosition(holder->getPosition());
        star->setScale(0.1, 0.1);
    }
    {
        ui::ImageView * holder = static_cast<ui::ImageView*>(Helper::seekWidgetByName(_layout, "holder2"));
        auto star = Sprite::create("physics/stars.png");
        getLayout()->addChild(star);
        star->setPosition(holder->getPosition());
        star->setScale(0.1, 0.1);
        
    }
    {
        ui::ImageView * holder = static_cast<ui::ImageView*>(Helper::seekWidgetByName(_layout, "holder3"));
        auto star = Sprite::create("physics/stars.png");
        getLayout()->addChild(star);
        star->setPosition(holder->getPosition());
        star->setScale(0.1, 0.1);
        
    }
}

void LevelOutro::updateScoreFail(unsigned long star, unsigned int toBeEarned)
{
    {
        ui::TextBMFont * scoreLabel = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "star_collected_txt"));
        std::ostringstream oss;
        oss<<star<<" / "<<toBeEarned;
        scoreLabel->setString(std::string(oss.str()));
    }
}

void LevelOutro::updateScoreWin(unsigned int levelStarEarned, unsigned long star, unsigned long totalStar, unsigned long score, unsigned long totalScore)
{
    {
        ui::TextBMFont * scoreLabel = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "total_stars_collected_txt"));
        std::ostringstream oss;
        oss<<totalStar;
        scoreLabel->setString(std::string(oss.str()));
    }
    {
        ui::TextBMFont * scoreLabel = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "stars_collected_txt"));
        std::ostringstream oss;
        oss<<star;
        scoreLabel->setString(std::string(oss.str()));
    }
    {
        ui::TextBMFont * scoreLabel = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "total_score_txt"));
        std::ostringstream oss;
        oss<<totalScore;
        scoreLabel->setString(std::string(oss.str()));
    }
    {
        ui::TextBMFont * scoreLabel = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "score_txt"));
        std::ostringstream oss;
        oss<<score;
        scoreLabel->setString(std::string(oss.str()));
    }
}

void LevelOutro::updatePowerupImage(int index, std::string &fileName)
{
    std::ostringstream oss;
    oss<<"unlocked_"<<index;
    ui::Widget * img = static_cast<ui::Widget*>(Helper::seekWidgetByName(_layout, oss.str().c_str()));
    img->setVisible(false);
    Sprite * newImg = Sprite::createWithSpriteFrameName(fileName);
    img->addChild(newImg);
    newImg->setPosition(Vec2(newImg->getBoundingBox().size.width/2.0, newImg->getBoundingBox().size.height/2.0));
    newImg->setVisible(false);
}