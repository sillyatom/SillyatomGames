#include "AppDelegate.h"
#include "Constants.h"
#include "Game.h"
#include "lib/MenuScreen.h"
#include "lib/Utility.h"
#include "lib/IOFileHandler.h"
#include "lib/GameSharing.h"
#include "lib/GameSaveData.h"
#include "SimpleAudioEngine.h"
#include "StoryNarrationLayer.h"

USING_NS_CC;
using namespace CocosDenshion;

AppDelegate::AppDelegate()
{

}

AppDelegate::~AppDelegate() 
{
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

// If you want to use packages manager to install more packages, 
// don't modify or remove this function
static int register_all_packages()
{
    return 0; //flag for packages manager
}

bool AppDelegate::applicationDidFinishLaunching() 
{
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
	if (!glview) {
		glview = GLViewImpl::create("My Game");
		director->setOpenGLView(glview);
	}

    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);
	

    register_all_packages();

	std::vector<std::string> resDirOrder;
	if (canFit(0.f, 480.f))
	{
		resDirOrder.push_back("res1");
		glview->setDesignResolutionSize(480.f, 320.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(480.f, 768.f))
	{
		resDirOrder.push_back("drawable-ldpi");
		glview->setDesignResolutionSize(768.f, 480.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(768.f, 960.f))
	{
		resDirOrder.push_back("res3");
		glview->setDesignResolutionSize(960.f, 640.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(960.f, 1024.f))
	{
		resDirOrder.push_back("res4");
		glview->setDesignResolutionSize(1024.f, 768.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(1024.f, 1136.f))
	{
		resDirOrder.push_back("res5");
		glview->setDesignResolutionSize(1136.f, 640.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(1136.f, 1280.f))
	{
		resDirOrder.push_back("drawable-mdpi");
		glview->setDesignResolutionSize(1280.f, 800.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(1280.f, 1920.f))
	{
		resDirOrder.push_back("drawable-hdpi");
		glview->setDesignResolutionSize(1920.f, 1200.f, ResolutionPolicy::FIXED_HEIGHT);
	}
	else if (canFit(1920.f, 2048.f))
	{
		resDirOrder.push_back("drawable-xhdpi");
		glview->setDesignResolutionSize(2048.f, 1024.f, ResolutionPolicy::FIXED_HEIGHT);
	}

	FileUtils::getInstance()->setSearchPaths(resDirOrder);

	//set content scale factor
	//	director->setContentScaleFactor(glview->getDesignResolutionSize().height/REF_GAME_HEIGHT);

	// set FPS. the default value is 1.0/60 if you don't call this
	director->setAnimationInterval(1.0 / 60);

	//set device ratio
	Utility::widthRatio = glview->getVisibleSize().width / REF_GAME_WIDTH;
	Utility::heightRatio = glview->getVisibleSize().height / REF_GAME_HEIGHT;

	//cache spritesheets
	{
		std::string filename = std::string("spritesheets/physics");
		SpriteFrameCache::getInstance()->addSpriteFramesWithFile(filename + (".plist"));
		SpriteBatchNode * batchNode = SpriteBatchNode::create(filename + (".png"));
		SpriteFrameCache::getInstance()->addSpriteFramesWithFile(filename + (".plist"));
	}
	{
		std::string filename = std::string("spritesheets/animations");
		SpriteFrameCache::getInstance()->addSpriteFramesWithFile(filename + (".plist"));
		SpriteBatchNode * batchNode = SpriteBatchNode::create(filename + (".png"));
		SpriteFrameCache::getInstance()->addSpriteFramesWithFile(filename + (".plist"));
	}
    
    //initialize IO file handler
    IOFileHandler::getInstance()->init();

    //load save game data
    GameSaveData::getInstance()->loadData();
    
    //init ChartBoost
    if (!GameSaveData::getInstance()->unlockedAds)
    {
        GameSharing::initChartBoost();
    }
    
    //init Flurry
    GameSharing::initFlurry();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	director->getEventDispatcher()->addCustomEventListener(GameEvent::Game_Center_Login_Completed, [](EventCustom* event)
#endif
	{
        if (GameSaveData::getInstance()->isFirstRun)
        {
            //play story
            auto scene = StoryNarrationLayer::createScene();
            Director::getInstance()->runWithScene(scene);
        }
        else
        {
            // create a scene. it's an autorelease object
            auto scene = MenuScreen::createScene();

            // run
            Director::getInstance()->runWithScene(scene);
        }
        Director::getInstance()->getEventDispatcher()->removeCustomEventListeners(GameEvent::Game_Center_Login_Completed);
	}
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	);
#endif

	//Init Leaderboard
	GameSharing::initGameSharing();
    
    return true;
}

bool AppDelegate::canFit(float minSize, float maxSize)
{
	auto size = Director::getInstance()->getOpenGLView()->getFrameSize();

	if (size.width > minSize && size.width <= maxSize)
	{
		return true;
	}
	return false;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() 
{
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() 
{
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}

void AppDelegate::applicationWillTerminate()
{
    GameSaveData::getInstance()->close();
}