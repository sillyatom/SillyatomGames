#include "Game.h"
#include "MovingPhysicsBox.h"
#include "Cannon.h"
#include "PlayerData.h"
#include "lib/Utility.h"
#include "PickManager.h"

#include "bulbs/DeadBulb.h"
#include "bulbs/GreenBulb.h"
#include "bulbs/RedBulb.h"
#include "bulbs/StoneBulb.h"
#include "bulbs/TimerBulb.h"
#include "bulbs/BallsLeftDeducter.h"
#include "bulbs/RectGreenBulb.h"
#include "bulbs/RectRedBulb.h"
#include "bulbs/RectStoneBulb.h"
#include "bulbs/RectSolidBulb.h"
#include "bulbs/Bumper.h"
#include "bulbs/CosmicBulb.h"
#include "bulbs/MultiplierBulb.h"
#include "bulbs/Portals.h"
#include "bulbs/BlackHole.h"
#include "bulbs/ToggleBulb.h"
#include "bulbs/BounceBulb.h"
#include "bulbs/SpringBulb.h"
#include "bulbs/SolidBulb.h"

#include "balls/BulbSwapper.h"
#include "balls/IceBall.h"
#include "balls/FireBall.h"
#include "balls/DarkMagicBall.h"
#include "balls/GreenPaintBall.h"
#include "balls/RedPaintBall.h"
#include "balls/Multiplier.h"
#include "balls/GravityBall.h"
#include "balls/ExplosionBall.h"

#include "helpers/HelpingBumpers.h"
#include "helpers/PortalPlatform.h"

#include "popups/GenericPopup.h"
#include "actions/CameraShake.h"

#include "lib/GameSharing.h"
#include "lib/InAppHandler.h"
#include "lib/GameSharing.h"
#include "lib/HttpConnection.h"
#include "lib/AudioController.h"
#include "lib/GameSaveData.h"
#if (ENABLE_SHADERS == 1)
GLProgramState * Game::glProgramState = nullptr;
#endif

Scene* Game::createScene()
{
	auto scene = Scene::create();
	auto layer = Game::create();
	scene->addChild(layer);
	return scene;
}

Game::~Game()
{
	if (!getIsCleaned())
	{
		destroyAll();
	}
}

void Game::setPlayersToDead()
{
	for (std::vector<Ball*>::iterator iter = _players.begin(); iter != _players.end(); iter++)
	{
		(*iter)->setIsDead(true);
	}
}

void Game::removePlayers()
{
	for (std::vector<Ball*>::iterator iter = _players.begin(); iter != _players.end();)
	{
		Ball * player = *iter;
		player->getParent()->removeChild(player);
		iter = _players.erase(iter);
	}
}

void Game::removeDynamicObjects()
{
	for (std::vector<PhysicsSprite*>::iterator iter = _dynamicObjects.begin(); iter != _dynamicObjects.end();)
	{
		PhysicsSprite * sprite = *iter;
#if (ENABLE_SHADERS == 1)
		removeLightIndex((*iter));
#endif
		sprite->getParent()->removeChild(sprite);
		delete sprite;
		iter = _dynamicObjects.erase(iter);
	}
    
    for (std::vector<CannonShots*>::iterator iter = _cannonShotObjects.begin(); iter != _cannonShotObjects.end();)
    {
        PhysicsSprite * sprite = *iter;
#if (ENABLE_SHADERS == 1)
        removeLightIndex((*iter));
#endif
        sprite->getParent()->removeChild(sprite);
        delete sprite;
        iter = _cannonShotObjects.erase(iter);
    }

}

void Game::removeBulbs()
{
	for (std::vector<Bulb*>::iterator iter = _bulbs.begin(); iter != _bulbs.end();)
	{
		PhysicsSprite * sprite = *iter;
		sprite->getParent()->removeChild(sprite);
		delete sprite;
		iter = _bulbs.erase(iter);
	}
}

void Game::destroyAll()
{
	PhysicsEnvironment::setPause(true);
	unscheduleAllSelectors();
	unscheduleUpdate();
	stopAllActions();
	removeTouchListener();
	_pauseControl = false;
	
	if (_wave1)
	{
		_wave1->stopAllActions();
		_wave1->getParent()->removeChild(_wave1);
		_wave1 = nullptr;
	}

	if (_wave2)
	{
		_wave2->stopAllActions();
		_wave2->getParent()->removeChild(_wave2);
		_wave2 = nullptr;
	}

	if (_spaceParticle)
	{
		_spaceParticle->stopSystem();
		_spaceParticle->getParent()->removeChild(_spaceParticle);
		_spaceParticle = nullptr;
	}
	if (_smokeParticle)
	{
		_smokeParticle->stopSystem();
		_smokeParticle->getParent()->removeChild(_smokeParticle);
		_smokeParticle = nullptr;
	}
	{
		bg->getParent()->removeChild(bg);
		bg = nullptr;
	}
	{
		_particleLayer->getParent()->removeChild(_particleLayer);
		_particleLayer = nullptr;
	}
	{
		_layer1->getParent()->removeChild(_layer1);
		_layer1 = nullptr;
	}
	{
		_layer2->getParent()->removeChild(_layer2);
		_layer2 = nullptr;
	}
	{
		_layer3->getParent()->removeChild(_layer3);
		_layer3 = nullptr;
	}

	_bgparticle->getParent()->removeChild(_bgparticle);
	_bgparticle = nullptr;

	removePlayers();
	removeDynamicObjects();
	removeBulbs();

#if (ENABLE_SHADERS == 1)
	glProgramState->release();
	glProgramState = nullptr;
#endif

	clearLevelOutro();
	clearGenericPopup();

	if (_tapLabel)
	{
		_tapLabel->getParent()->removeChild(_tapLabel);
		_tapLabel = nullptr;
	}
    
    _hud->destroyAll();
	_hud->getParent()->removeChild(_hud);
	CC_SAFE_DELETE(_hud);

	_animHandler->getParent()->removeChild(_animHandler);
	AnimationHandler::deleteAnimationHandler();
	_animHandler = nullptr;

	_eventDispatcher->removeAllEventListeners();

	ExtLayer::destroyAll();
	cleanup();
}

cocos2d::Vec3 Game::chooseColorForBulb()
{
	int length = (int)_remainingBulbColors.size();

	if (length == 0)
	{
		for (int index = 0; index < 7; index++)
		{
			_remainingBulbColors.push_back(_availableBulbColors[index]);
		}
	}

	length = (int)_remainingBulbColors.size();

	int index = rand() % length;
	cocos2d::Vec3 retColor = _remainingBulbColors[index];
	_remainingBulbColors.erase(_remainingBulbColors.begin() + index);

	return retColor;
}

bool Game::init()
{
	if (!ExtLayer::init())
	{
		return false;
	}
	
	return true;
}

void Game::onEnter()
{
	ExtLayer::onEnter();
	addContainer();
	addLoadingScreen();
}

void Game::onEnterTransitionDidFinish()
{
	ExtLayer::onEnterTransitionDidFinish();

    _newLevelNum = 0;
    
	AudioController::getInstance()->preloadAndPlayEffect(SOUND_ASSETS::EFFECT_STAR_DUST_SHOWER);

	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_STAR_BLAST);
	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_BTN_CLICK);
	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_POPUP_OPEN_CLOSE);
	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_BTN_CLICK);
	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_PLAYER_MOVEMENT);
	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_TIMER_BLAST);
    
    _configFile = ConfigFile::getInstance();
    _configFile->loadConfigFile();
    {
        const rapidjson::Value& levelOrder = _configFile->settings["LEVEL_ORDER"];
        RAPIDJSON_ASSERT(levelOrder.IsArray());
        _newLevelNum = levelOrder[GameVariables::levelNum].GetInt();
    }
    {
        const rapidjson::Value& numLights = _configFile->settings["MAX_LIGHTS"];
        RAPIDJSON_ASSERT(numLights.IsArray());
        MAX_LIGHTS = (numLights[_newLevelNum].GetDouble());
    }
    {
        std::ostringstream oss;
        oss<<"level"<<GameVariables::levelNum;
        GameSharing::logFlurryEvent(oss.str());
    }
    
	bg = nullptr;
	_zoomTriggered = false;
    
	//this will be true only here
	_canShoot = true;
	_isTimerMode = false;
	_needMarker = false;

	_selectedBall = "basic";

	_spaceParticle = nullptr;
	_smokeParticle = nullptr;
	_particleLayer = nullptr;

	_layer1 = nullptr;
	_layer2 = nullptr;
	_layer3 = nullptr;

	_scrollFactor = 0.0;
	_worldXLimits.x = _worldXLimits.y = 0.0;
	_worldYLimits.x = _worldYLimits.y = 0.0;

	_playerLastPosition.x = _playerLastPosition.y = 0.0;

	_genericPopup = nullptr;
	_tapLabel = nullptr;
	_depthOrder = 10000;

	_lightIntensity = 0.0;
	_playerLightIntensity = 0.0;

	stopAllActions();
	setPosition(Vec2(0.0, 0.0));
	setScale(1.0);

	_pauseControl = true;
	_forceCloseLevel = false;
	_levelStatus = e_NONE;

	_availableBulbColors[0] = Vec3(0.0, 1.0, 0.0); //green
	_availableBulbColors[1] = Vec3(0.0, 1.0, 1.0); //cyan
	_availableBulbColors[2] = Vec3(1.0, 1.0, 0.0); //yellow
	_availableBulbColors[3] = Vec3(255.0 / 255.0, 95.0 / 255.0, 17.0 / 255.0); //violet
	_availableBulbColors[4] = Vec3(255.0 / 255.0, 95.0 / 255.0, 17.0 / 255.0); //orange
	_availableBulbColors[5] = Vec3(1.0, 1.0, 1.0); //white
	_availableBulbColors[6] = Vec3(1.0, 1.0, 0.0); //blue

	for (auto iter = _remainingBulbColors.begin(); iter != _remainingBulbColors.end();)
	{
		iter = _remainingBulbColors.erase(iter);
	}

	for (int index = 0; index < 7; index++)
	{
		_remainingBulbColors.push_back(_availableBulbColors[index]);
	}

#if (ENABLE_SHADERS == 1)
	for (int row = 0; row < MAX_LIGHTS; row++)
	{
		_activeLights[row][0] = 0;
	}
#endif

	_levelOutro = nullptr;
	_levelIntro = nullptr;

	ResetTimeScale();
    
	{
		const rapidjson::Value& lightIntensity = _configFile->settings["LightIntensity"];
		RAPIDJSON_ASSERT(lightIntensity.IsArray());
		_lightIntensity = (lightIntensity[_newLevelNum].GetDouble());
	}

	{
		const rapidjson::Value& lightIntensity = _configFile->settings["PlayerLightIntensity"];
		RAPIDJSON_ASSERT(lightIntensity.IsArray());
		_playerLightIntensity = (lightIntensity[_newLevelNum].GetDouble());
	}

	bg = Sprite::create();
	_gameContainer->addChild(bg);

	_particleLayer = Sprite::create();
	_gameContainer->addChild(_particleLayer);

	_layer3 = Sprite::create();
	_gameContainer->addChild(_layer3);

	_layer2 = Sprite::create();
	_gameContainer->addChild(_layer2);

	_layer1 = Sprite::create();
	_gameContainer->addChild(_layer1);

	addPhysics();

#if (ENABLE_SHADERS == 1)
	{
		initLayerShader();
	}
#endif

	const rapidjson::Value& marker = _configFile->settings["Marker"];
	RAPIDJSON_ASSERT(marker.IsArray());
    _needMarker = (bool)marker[_newLevelNum].GetInt();

	ExtractObjectFromFile(GameVariables::selectedWorld, _newLevelNum);

	//build level on complete
	onBuildLevel();

	//update world limits
	_physxEnv->setWorldXLimits(_worldXLimits.x, _worldXLimits.y);
	_physxEnv->setWorldYLimits(_worldYLimits.x, _worldYLimits.y);

	//update scroll factor
	float magXLimits = GameHelper::Helper::Magnitude(Point(_worldXLimits.x, _worldXLimits.y));
	float magYLimits = GameHelper::Helper::Magnitude(Point(_worldYLimits.x, _worldYLimits.y));
	float magRes = GameHelper::Helper::Magnitude(Point(Utility::getDevicePositionX(REF_GAME_WIDTH), Utility::getDevicePositionY(REF_GAME_HEIGHT)));
	_scrollFactor = (_needMarker) ? ((magXLimits + magYLimits) / magRes) : 0.35;
	_scrollFactor = (_scrollFactor > 0.75) ? 0.75 : _scrollFactor;

	addTouchListener();

	{
		auto listener = EventListenerCustom::create(GameEvent::GameEventType, CC_CALLBACK_1(Game::onGameEvent, this));
		_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	}

	addBgParticles();

#if (ENABLE_SHADERS == 1)
	//update lights
	updateLights();
#endif

	CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::dummyLoadingScreenStay, this));
	Utility::delayedCall(this, func, 1.0);

	_wave1 = Sprite::createWithSpriteFrameName("circle.png");
	_shaderExcludeContainer->addChild(_wave1);
    _wave1->setOpacity(0);
	_wave2 = Sprite::createWithSpriteFrameName("circle.png");
	_shaderExcludeContainer->addChild(_wave2);
    _wave2->setOpacity(0);
}

void Game::dummyLoadingScreenStay()
{
	removeLoadingScreen();
    
    //HUD
    _hud->setVisible(true);
    
	//create player
	shootBall();

    for (auto iter = _bulbs.begin(); iter != _bulbs.end(); iter++)
    {
        (*iter)->onStartUpdate();
    }
    for (auto iter = _dynamicObjects.begin(); iter != _dynamicObjects.end(); iter++)
    {
        (*iter)->onStartUpdate();
    }
    
	showLevelIntro(std::string("popups/world1level1intro.svg"));

	playLevelStartAnim();

	onUpdate(0.0);

}

void Game::doZoomOut()
{
	_zoomTriggered = false;
	Director::getInstance()->getScheduler()->setTimeScale(1.0);
	/*{
		rendTexSprite->setAnchorPoint(Vec2(0.5, 0.5));
		rendTexSprite->runAction(ScaleTo::create(0.2, 1.0));
		rendTexSprite->setPosition(Vec2(visibleSize.width / 2.0, visibleSize.height / 2.0));
	}
	{
		_shaderExcludeContainer->setAnchorPoint(Vec2(0.5, 0.5));
		_shaderExcludeContainer->runAction(ScaleTo::create(0.2, 1.0));
		_shaderExcludeContainer->setPosition(Vec2(visibleSize.width / 2.0, visibleSize.height / 2.0));
	}*/
}

void Game::doZoom(Bulb * bulb)
{
	_zoomTriggered = true;

	/*Vec2 anchorPt(bulb->GetCCBodyPositionX() / visibleSize.width, bulb->GetCCBodyPositionY() / visibleSize.height);
	{
		rendTexSprite->setAnchorPoint(anchorPt);
		rendTexSprite->setScale(2.0);
	}
	{
		_shaderExcludeContainer->setAnchorPoint(anchorPt);
		_shaderExcludeContainer->setScale(2.0);
	}*/
	Director::getInstance()->getScheduler()->setTimeScale(0.3);
	Utility::delayedCall(this, CallFunc::create(CC_CALLBACK_0(Game::doZoomOut, this)), 0.5);
}

void Game::checkLightBounds()
{
	if (_players.size() > 0)
	{
        float halfWidth = Utility::getDevicePositionX(REF_GAME_WIDTH);
        float halfHeight = Utility::getDevicePositionY(REF_GAME_HEIGHT);
        
		for (auto bulb = _bulbs.begin(); bulb != _bulbs.end(); bulb++)
		{
			if ((*bulb)->getBulbType() == e_GreenBulb)
			{
                float distanceX = MAX(_playerLastPosition.x, (*bulb)->GetBody()->GetPosition().x) - MIN(_playerLastPosition.x, (*bulb)->GetBody()->GetPosition().x); //GameHelper::Helper::Distance(_playerLastPosition, (*bulb)->GetBody()->GetPosition());
				distanceX *= PTM_RATIO;
                
                float distanceY = MAX(_playerLastPosition.y, (*bulb)->GetBody()->GetPosition().y) - MIN(_playerLastPosition.y, (*bulb)->GetBody()->GetPosition().y); //GameHelper::Helper::Distance(_playerLastPosition, (*bulb)->GetBody()->GetPosition());
                distanceY *= PTM_RATIO;
				
				if (distanceX >= halfWidth || distanceY >= halfHeight)
				{
					removeLightIndex((*bulb));
				}
				else
				{
					if ((*bulb)->getLightIndex() < 0)
					{
						addLightToObject((*bulb));
					}
				}
			}
		}
        for (auto object = _dynamicObjects.begin(); object != _dynamicObjects.end(); object++)
        {
            if ((*object)->GetObjectId() == e_Bulb)
            {
                RotatingBulb * bulb = (RotatingBulb*)(*object);
                
                if (bulb->getBulbType() == e_Meteor)
                {
                    float distanceX = MAX(_playerLastPosition.x, (bulb)->GetBody()->GetPosition().x) - MIN(_playerLastPosition.x, (bulb)->GetBody()->GetPosition().x); //GameHelper::Helper::Distance(_playerLastPosition, (*bulb)->GetBody()->GetPosition());
                    distanceX *= PTM_RATIO;
                    
                    float distanceY = MAX(_playerLastPosition.y, (bulb)->GetBody()->GetPosition().y) - MIN(_playerLastPosition.y, (bulb)->GetBody()->GetPosition().y); //GameHelper::Helper::Distance(_playerLastPosition, (*bulb)->GetBody()->GetPosition());
                    distanceY *= PTM_RATIO;
                    
                    if (distanceX >= halfWidth || distanceY >= halfHeight)
                    {
//                        CCLOG(" IF %d ", (*object)->getLightIndex());
                        removeLightIndex((*object));
                    }
                    else
                    {
//                        CCLOG(" ELSE %d ", (*object)->getLightIndex());
                        
                        if ((*object)->getLightIndex() < 0)
                        {
                            addLightToObject((*object));
                        }
                    }
                }
            }
        }
	}
}

void Game::popupCloseAnim(CSBPopup * popup, CallFunc * func, CallFunc * func1)
{
	float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH) / 480.0, Utility::getDevicePositionY(REF_GAME_HEIGHT) / 320.0);
	auto scale2XAnim = ScaleTo::create(0.15, maxRatio * 1.14, 0.01);
	auto scaleXAnim = ScaleTo::create(0.15, maxRatio * 1.14 * 0.5, 0.0);
	auto scaleAnim = ScaleTo::create(0.15, 0.0);
	popup->getLayout()->runAction(Sequence::create(scale2XAnim, scaleXAnim, scaleAnim, NULL));
	AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_POPUP_OPEN_CLOSE);
	Utility::delayedCall(this, func, 0.5);
    if (func1 != nullptr)
    {
        Utility::delayedCall(this, func1, 1.0);
    }
}

void Game::popupStartAnim(CSBPopup * popup)
{
	float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH) / 480.0, Utility::getDevicePositionY(REF_GAME_HEIGHT) / 320.0);
	auto scale2XAnim = ScaleTo::create(0.15, maxRatio, popup->getLayout()->getScaleY());
	auto scaleXAnim = ScaleTo::create(0.15, maxRatio / 2.0, popup->getLayout()->getScaleY());
	auto delayAnim = DelayTime::create(0.1);
	auto scaleAnim = ScaleTo::create(0.15, maxRatio * 0.7);
	popup->getLayout()->runAction(Sequence::create(scale2XAnim, scaleXAnim, delayAnim, scaleAnim, NULL));
	AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_POPUP_OPEN_CLOSE);
}

void Game::moveIn()
{
	CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::popupStartAnim, this, _levelIntro));
	Utility::delayedCall(this, func, 0.4);
}

void Game::moveOut()
{

}

void Game::playLevelStartAnim()
{
	//move out
	{
		_hud->moveOut();
		moveOut();
	}

	//move in
	{
		moveIn();
		_hud->playMoveIn();
	}
}

void Game::addBgParticles()
{
	_bgparticle = BgRainParticles::create();
	_shaderExcludeContainer->addChild(_bgparticle);
}

void Game::addWall(float x, float y, float width, float height, ENUM_OBJECT enumObj)
{
	PhysicsBox * wall = PhysicsBox::create();
	wall->initWithFile("bluewall.png");
	wall->SetObjectId(enumObj);
	wall->CreateBody(x, y, width, height, (enumObj == e_Bounds_Bottom) ? true : false);
	_gameContainer->addChild(wall);
	_dynamicObjects.push_back(wall);
	wall->setVisible(false);
	wall->retain();
}

void Game::closeLevel()
{
	ExtLayer::closeLevel();
	unscheduleAllSelectors();
	stopAllActions();
	PhysicsEnvironment::setPause(true);
    _hud->stopTimer();
    AudioController::getInstance()->stopAllEffects();
    
	//stop all update
	for (auto iter = _dynamicObjects.begin(); iter != _dynamicObjects.end(); iter++)
	{
		(*iter)->onStopUpdate();
	}
    for (auto iter = _cannonShotObjects.begin(); iter != _cannonShotObjects.end(); iter++)
    {
        (*iter)->onStopUpdate();
    }

	//remove event listeners custom
	_eventDispatcher->removeCustomEventListeners(GameEvent::GameEventType);

    if (_levelStatus == e_WIN)
    {
        showLevelOutro();
    }
    else
    {
        showLevelOutroFail();
    }
}

void Game::addControlsBtn()
{
	{
		auto powerBtn = MenuItemImage::create("misc/powerbtn.png", "misc/powerbtn.png", "misc/powerbtn.png", CC_CALLBACK_1(Game::onControlCallback, this));
		powerBtn->setAnchorPoint(Vec2(0.5, 0.5));
        powerBtn->setScale(Utility::getDevicePositionY(47.0)/powerBtn->getBoundingBox().size.width, Utility::getDevicePositionY(47.0)/powerBtn->getBoundingBox().size.width);
        powerBtn->setPosition(Utility::getDevicePositionX(25.5), Utility::getDevicePositionY(REF_GAME_HEIGHT - 296.0));
		powerBtn->setTag(1);

		_menu = Menu::create(powerBtn, NULL);
		_menu->setPosition(Vec2::ZERO);
		_hud->addChild(_menu);
	}
}

Vec2 Game::getBallPosition()
{
	return _playerPosition;
}

void Game::shootBall()
{
	Vec2 ballPosition = getBallPosition();
	float radius = Utility::getDevicePositionX(BALL_RADIUS);
	addPlayer(ballPosition.x, ballPosition.y, radius, b2Vec2(0.0, 0.0));
}

void Game::showGenericPopup(std::string desc, CallFunc * okFunc, CallFunc * cancelFunc)
{
	_genericPopup = GenericPopup::create();
	_genericPopup->construct(std::string("ui/genericpopup.csb"), desc, okFunc, cancelFunc);
	_shaderExcludeContainer->addChild(_genericPopup);
	_genericPopup->getLayout()->setScale(0.01);
}

void Game::clearGenericPopup()
{
	if (_genericPopup)
	{
        _genericPopup->getParent()->removeChild(_genericPopup);
        _genericPopup = nullptr;
	}
}

void Game::moveMenuIn()
{
	auto moveIn = MoveTo::create(1.0, Vec2::ZERO);
	_menu->runAction(moveIn);
}

void Game::moveMenuOut()
{
	auto moveTo = MoveTo::create(1.0, Vec2(-_menu->getBoundingBox().size.width, _menu->getPositionX()));
	_menu->runAction(moveTo);
}

void Game::gotoMainMenu()
{
    popupCloseAnim(_genericPopup, CallFunc::create(CC_CALLBACK_0(Game::clearGenericPopup, this)), CallFunc::create(CC_CALLBACK_0(Game::ShowLevelSelectionScreen, this)));
}

void Game::closeGenericPopWithAnim()
{
	popupCloseAnim(_genericPopup, CallFunc::create(CC_CALLBACK_0(Game::clearGenericPopup, this)));
}

void Game::onControlCallback(cocos2d::Ref *sender)
{
	switch (dynamic_cast<Node*>(sender)->getTag())
	{
	case 1:
	{
		AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_BTN_CLICK);

		CallFunc * funcOk = CallFunc::create(CC_CALLBACK_0(Game::gotoMainMenu, this));
		CallFunc * funcCancel = CallFunc::create(CC_CALLBACK_0(Game::closeGenericPopWithAnim, this));

		funcOk->retain();
		funcCancel->retain();
		std::ostringstream oss;
		oss << "Are you sure ?";
		showGenericPopup(
			oss.str(),
			funcOk,
			funcCancel
			);
		popupStartAnim(_genericPopup);
		break;
	}
	default:
		break;
	}
}

void Game::addPlayer(float x, float y, float radius, b2Vec2 velocity)
{
	createPlayer(_selectedBall, x, y, radius, velocity);
}

void Game::updateBulbsSensor(bool val)
{
	for (auto iter = _bulbs.begin(); iter != _bulbs.end(); iter++)
	{
		(*iter)->updateSensor(val);
	}
}

void Game::createMeteorShower(const rapidjson::Value & obj)
{
	{
		MeteorShower * sprite = MeteorShower::create();
		sprite->initWithFile("bluewall.png");
		float x = obj["x"].GetDouble();
		float y = obj["y"].GetDouble();
		float width = obj["width"].GetDouble();
		float height = obj["height"].GetDouble();
		float angle = obj["angle"].GetDouble();
        
		x = Utility::getDevicePositionX(x);
		y = Utility::getDevicePositionY(y);
		width = Utility::getDevicePositionX(width);
		height = Utility::getDevicePositionY(height);
		sprite->SetObjectId(e_MeteorShower);

		sprite->CreateBody(x, y, width, height);
        if (obj.HasMember("frequency"))
        {
            sprite->setFireDelay(obj["frequency"].GetDouble());
        }
        else
        {
            sprite->setFireDelay(4.0);
        }
		sprite->SetTransform(sprite->GetBody()->GetPosition(), CC_DEGREES_TO_RADIANS(angle));
		sprite->OnUpdate(0.f);
		sprite->retain();
        sprite->setVisible(false);

		_dynamicObjects.push_back(sprite);
		_shaderExcludeContainer->addChild(sprite);
	}
}

void Game::createMeteorShot(std::string selectedBall, float x, float y, float radius, b2Vec2 velocity)
{
	RotatingBulb * player;
	selectedBall = "basic";
	player = RotatingBulb::create();

	const rapidjson::Value& ballAsset = _configFile->settings["ballAsset"];
	std::string fileName = std::string(ballAsset[selectedBall.c_str()].GetString());
	player->SetObjectId(e_Bulb);
	player->setBulbType(e_Meteor);
	player->initWithFile(fileName);
	player->CreateBody(x, y, radius);
	player->GetBody()->SetType(b2_dynamicBody);
	player->OnUpdate(0.f);

	_dynamicObjects.push_back(player);
	_shaderExcludeContainer->addChild(player);

#if (ENABLE_SHADERS == 1)
	player->setLightColor(Vec3(1.0, 0.5, 0.0));
	player->setLightIntensity(Utility::getDevicePositionY(PLAYER_MAX_SHOWER_LIGHT_INTENSITY));
	player->setActualLightIntensity(Utility::getDevicePositionY(PLAYER_MAX_SHOWER_LIGHT_INTENSITY));
	addLightToObject(player);
#endif
	player->GetBody()->SetLinearVelocity(velocity);
	player->retain();

	ShowerParticle * particle = ShowerParticle::create();
	_shaderExcludeContainer->addChild(particle);
	player->setParticle(particle);
	particle->retain();
}

void Game::createPlayer(std::string selectedBall, float x, float y, float radius, b2Vec2 velocity)
{
	Ball * player;

	if (selectedBall.length())
	{
		if (selectedBall == "iceball")
		{
			player = IceBall::create();
		}
		else if (selectedBall == "fireball")
		{
			player = FireBall::create();
			updateBulbsSensor(true);
		}
		else if (selectedBall == "darkmagicball")
		{
			player = DarkMagicBall::create();
		}
		else if (selectedBall == "bulbswapper")
		{
			player = BulbSwapper::create();
		}
		else if (selectedBall == "greenpaintball")
		{
			player = GreenPaintBall::create();
		}
		else if (selectedBall == "redpaintball")
		{
			player = RedPaintBall::create();
		}
		else if (selectedBall == "multiplier")
		{
			player = Multiplier::create();
		}
		else if (selectedBall == "gravityball")
		{
			player = GravityBall::create();
		}
		else if (selectedBall == "explosionball")
		{
			player = ExplosionBall::create();
		}
		else
		{
			selectedBall = "basic";
			player = Ball::create();
		}

		player->setDuration(15.0);
	}

	const rapidjson::Value& ballAsset = _configFile->settings["ballAsset"];
	std::string fileName = std::string(ballAsset[selectedBall.c_str()].GetString());
	player->SetObjectId(e_Player);
	player->initWithFile(fileName);
	player->CreateBody(x, y, radius);
	player->OnUpdate(0.f);
	_players.push_back(player);
	_shaderExcludeContainer->addChild(player);

#if (ENABLE_SHADERS == 1)
    player->setLightColor(PLAYER_LIGHT_COLOR);
	player->setLightIntensity(Utility::getDevicePositionY(_playerLightIntensity));
	player->setActualLightIntensity(Utility::getDevicePositionY(_playerLightIntensity));
	//    CCLOG("------------------------------------ CREATING PLAYER--------------------------------------");
	addLightToObject(player);
#endif
	player->GetBody()->SetLinearVelocity(velocity);

	if (selectedBall == "basic")
	{
		player->addBasicParticle();
	}
    
	_playerLastPosition = player->GetBody()->GetPosition();
	_physxEnv->setDeltaShift(_playerLastPosition);
}

#if (ENABLE_SHADERS == 1)
void Game::resetLightAtIndex(int index)
{
	//set to initial values
	//    CCLOG(" resetting light index %d", index);
	std::ostringstream prefix;
	prefix << "lights[";
	prefix << index;
	prefix << "]";

	std::ostringstream ossPos;
	ossPos << prefix.str().c_str();
	ossPos << ".position";
	glProgramState->setUniformVec2(ossPos.str().c_str(), Vec2(0.0, 0.0));

	std::ostringstream ossActive;
	ossActive << prefix.str().c_str() << ".isActive";
	glProgramState->setUniformInt(ossActive.str().c_str(), 0);

	std::ostringstream ossColor;
	ossColor << prefix.str().c_str();
	ossColor << ".color";
	glProgramState->setUniformVec3(ossColor.str().c_str(), Vec3(1.0, 1.0, 1.0) * 0.0f);
}

void Game::removeLightIndex(PhysicsSprite * object)
{
    int index = object->getLightIndex();
    
	if (index >= 0)
	{
		resetLightAtIndex(index);
		_activeLights[index][0] = 0;
	}
    
    object->setLightIndex(-1);
}

int Game::chooseLightIndex()
{
	int index = -1;
	for (index = 0; index < MAX_LIGHTS; index++)
	{
		if (_activeLights[index][0] == 0)
		{
			_activeLights[index][0] = 1;
			return index;
		}
	}
	return index;
}

void Game::resetLights()
{
	for (int index = 0; index < MAX_LIGHTS; index++)
	{
		resetLightAtIndex(index);
	}
}

void Game::initLayerShader()
{
	auto fileUtils = FileUtils::getInstance();
	/*auto vertexShader = fileUtils->getStringFromFile("shaders/vertex.vsh");
	auto fragShader = fileUtils->getStringFromFile("shaders/pixel.fsh");*/

    auto vertexShader = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "attribute vec4 a_position; \n"
    "attribute vec2 a_texCoord; \n"
    "varying vec2 v_texCoord; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    gl_Position = CC_PMatrix * a_position; \n"
    "     \n"
    "    v_texCoord = a_texCoord; \n"
    "} \n";
    auto fragShader = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[1]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader1 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[1]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader2 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[2]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader3 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[3]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader4 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[4]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader5 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[5]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader6 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[6]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader7 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[7]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader8 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[8]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader9 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[9]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader10 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[10]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    if (lights[9].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[9].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[9].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader11 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[11]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    if (lights[9].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[9].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[9].color * lightDist); \n"
    "    } \n"
    "    if (lights[10].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[10].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[10].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader12 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[12]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    if (lights[9].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[9].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[9].color * lightDist); \n"
    "    } \n"
    "    if (lights[10].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[10].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[10].color * lightDist); \n"
    "    } \n"
    "    if (lights[11].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[11].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[11].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader13 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[13]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    if (lights[9].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[9].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[9].color * lightDist); \n"
    "    } \n"
    "    if (lights[10].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[10].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[10].color * lightDist); \n"
    "    } \n"
    "    if (lights[11].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[11].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[11].color * lightDist); \n"
    "    } \n"
    "    if (lights[12].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[12].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[12].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader14 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[14]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    if (lights[9].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[9].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[9].color * lightDist); \n"
    "    } \n"
    "    if (lights[10].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[10].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[10].color * lightDist); \n"
    "    } \n"
    "    if (lights[11].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[11].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[11].color * lightDist); \n"
    "    } \n"
    "    if (lights[12].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[12].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[12].color * lightDist); \n"
    "    } \n"
    "    if (lights[13].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[13].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[13].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    auto fragShader15 = "#ifdef GL_ES \n"
    "precision mediump float; \n"
    "#endif \n"
    " \n"
    "struct Light \n"
    "{ \n"
    "    vec2 position; \n"
    "    vec3 color; \n"
    "    int isActive; \n"
    "}; \n"
    " \n"
    "uniform Light lights[15]; \n"
    " \n"
    "varying vec2 v_texCoord; \n"
    "uniform vec2 u_resolution; \n"
    " \n"
    "void main() \n"
    "{ \n"
    "    vec4 fragColor = texture2D(CC_Texture0, v_texCoord); \n"
    "    vec3 v_fragmentIntensity = vec3(0.0, 0.0, 0.0); \n"
    "    float lightDist; \n"
    "    float lightDistDivider = 4.0; \n"
    "    vec2 pixelPos = v_texCoord * u_resolution; \n"
    "     \n"
    "    if (lights[0].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[0].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[0].color * lightDist); \n"
    "    } \n"
    "    if (lights[1].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[1].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[1].color * lightDist); \n"
    "    } \n"
    "    if (lights[2].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[2].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[2].color * lightDist); \n"
    "    } \n"
    "    if (lights[3].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[3].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[3].color * lightDist); \n"
    "    } \n"
    "    if (lights[4].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[4].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[4].color * lightDist); \n"
    "    } \n"
    "    if (lights[5].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[5].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[5].color * lightDist); \n"
    "    } \n"
    "    if (lights[6].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[6].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[6].color * lightDist); \n"
    "    } \n"
    "    if (lights[7].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[7].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[7].color * lightDist); \n"
    "    } \n"
    "    if (lights[8].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[8].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[8].color * lightDist); \n"
    "    } \n"
    "    if (lights[9].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[9].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[9].color * lightDist); \n"
    "    } \n"
    "    if (lights[10].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[10].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[10].color * lightDist); \n"
    "    } \n"
    "    if (lights[11].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[11].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[11].color * lightDist); \n"
    "    } \n"
    "    if (lights[12].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[12].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[12].color * lightDist); \n"
    "    } \n"
    "    if (lights[13].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[13].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[13].color * lightDist); \n"
    "    } \n"
    "    if (lights[14].isActive == 1) \n"
    "    { \n"
    "        lightDist = distance(pixelPos, lights[14].position); \n"
    "        lightDist = lightDistDivider/lightDist; \n"
    "        v_fragmentIntensity = v_fragmentIntensity + (lights[14].color * lightDist); \n"
    "    } \n"
    "    gl_FragColor = vec4(v_fragmentIntensity * fragColor.rgb, 1.0); \n"
    "} \n"
    " \n";
    
    switch (MAX_LIGHTS)
    {
        case 0:
            fragShader = fragShader1;
            break;
        case 1:
            fragShader = fragShader2;
            break;
        case 2:
            fragShader = fragShader3;
            break;
        case 3:
            fragShader = fragShader4;
            break;
        case 4:
            fragShader = fragShader5;
            break;
        case 5:
            fragShader = fragShader6;
            break;
        case 6:
            fragShader = fragShader7;
            break;
        case 7:
            fragShader = fragShader8;
            break;
        case 8:
            fragShader = fragShader9;
            break;
        case 9:
            fragShader = fragShader10;
            break;
        case 10:
            fragShader = fragShader11;
            break;
        case 11:
            fragShader = fragShader12;
            break;
        case 12:
            fragShader = fragShader13;
            break;
        case 13:
            fragShader = fragShader14;
            break;
        case 14:
            fragShader = fragShader15;
            break;
            
        default:
            break;
    }

	GLProgram *  shader = GLProgram::createWithByteArrays(vertexShader, fragShader);

	glProgramState = GLProgramState::getOrCreateWithGLProgram(shader);

	//setting uniform variables
	glProgramState->setUniformVec2("u_resolution", Vec2(visibleSize.width, visibleSize.height));
	glProgramState->retain();

	//add shader to RTT
	addShaderProgram(shader);

	//reset light values
	resetLights();
}
#endif

void Game::onGameStartTickComplete()
{
	//PhysicsEnvironment::setPause(false);

	addControlsBtn();

	//start onUpdate
	startUpdate();
}

void Game::addTouchListener()
{
	removeTouchListener();

	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = CC_CALLBACK_2(Game::onTouchBegan, this);
	listener->onTouchEnded = CC_CALLBACK_2(Game::onTouchEnded, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}

void Game::removeTouchListener()
{
	_eventDispatcher->removeEventListenersForType(EventListener::Type::TOUCH_ONE_BY_ONE);
}

void Game::addDarkParticles(float x, float y, cocos2d::Color4F startColor, Vec2 endPosition, float angle)
{
	DarkParticle * emitter = DarkParticle::create();
	emitter->initWithColor(startColor, angle, Vec2(endPosition.x - x, endPosition.y - y));
	_shaderExcludeContainer->addChild(emitter, 0);
	emitter->setPosition(Vec2(x, y));
}

void Game::addCosmicBlastParticles(float x, float y, cocos2d::Color4F startColor, Vec2 endPosition)
{
	CosmicBlastParticle * emitter = CosmicBlastParticle::create();

	float distance = GameHelper::Helper::Distance(Point(x, y), Point(0.0, Utility::getDevicePositionY(REF_GAME_HEIGHT)));
	float duration = distance / Utility::getDevicePositionY(300.0);

	emitter->initWithColor(startColor, duration);
	_shaderExcludeContainer->addChild(emitter, 0);
	emitter->setPosition(Vec2(x, y));

	FiniteTimeAction * action = MoveTo::create(duration, endPosition);
	emitter->runAction(Sequence::create(action, NULL));
}

void Game::addReductionCountParticles(float x, float y, cocos2d::Color4F startColor, Vec2 endPosition, CallFunc * func)
{
	cocos2d::Vector<FiniteTimeAction*> _actions;

	CountReductionParticle * emitter = CountReductionParticle::create();

	float distance = GameHelper::Helper::Distance(Point(x, y), Point(0.0, Utility::getDevicePositionY(REF_GAME_HEIGHT)));
	float duration = distance / Utility::getDevicePositionY(200.0);
	emitter->initWithColor(startColor, duration);
	_shaderExcludeContainer->addChild(emitter);
	emitter->setPosition(Vec2(x, y));

	FiniteTimeAction * action = MoveTo::create(duration, endPosition);
	_actions.pushBack(action);

	if (func != nullptr)
	{
		_actions.pushBack(func);
	}
	{
		CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::checkEndGameCondition, this));
		_actions.pushBack(func);
	}
	emitter->runAction(Sequence::create(_actions));

#if (ENABLE_SHADERS == 1)
	{
		CameraShake * camShake = CameraShake::create();
		camShake->initWithDuration(0.35, Utility::getDevicePositionX(2.5), Utility::getDevicePositionY(2.5));
		rendTexSprite->runAction(camShake);
	}
	{
		CameraShake * camShake = CameraShake::create();
		camShake->initWithDuration(0.25, Utility::getDevicePositionX(2.5), Utility::getDevicePositionY(2.5));
		_shaderExcludeContainer->runAction(camShake);
	}
#endif
}

void Game::addCollisionParticles(Color4F color, float x, float y)
{
	CollideParticle * emitter = CollideParticle::create();
	_shaderExcludeContainer->addChild(emitter);

	emitter->setPosition(Vec2(x, y));
	emitter->setStartColor(color);
}

void Game::addExplosionParticles(Color4F color, float x, float y)
{
	ExplodeParticle * emitter = ExplodeParticle::create();
	_shaderExcludeContainer->addChild(emitter);

	emitter->initWithPosition(x, y);
	emitter->setStartColor(color);
}

void Game::releaseControl(float dt)
{
    _pauseControl = false;
}

void Game::onCollideWithCannonShot()
{
    _pauseControl = true;
    
    schedule(schedule_selector(Game::releaseControl), 1.0, 1, 0.0);
}

void Game::onGameEvent(cocos2d::EventCustom *event)
{
	GameEvent * gameEvent = (GameEvent*)event;
	if (gameEvent->eventName == GameEvent::CollidesRedBulb)
	{
		onCollidesRedBulb(event);
	}
    else if (gameEvent->eventName == GameEvent::PauseControl)
    {
        onCollideWithCannonShot();
    }
	else if (gameEvent->eventName == GameEvent::ReduceHitsLeft)
	{
		_hud->setHitsLeft(_hud->getHitsLeft() - 1);
        auto player = _players.begin();
        if (player != _players.end())
        {
            auto hitResistance = (*player)->hitResistance.begin();
            if (hitResistance != (*player)->hitResistance.end())
            {
                (*hitResistance)->setIsDead(true);
            }
        }
	}
	else if (gameEvent->eventName == GameEvent::CreateCannonShot)
	{
		CreateCannonShots(gameEvent->x, gameEvent->y, gameEvent->radius, gameEvent->velocity);
	}
	else if (gameEvent->eventName == GameEvent::AddExtraHit)
	{
        auto player = _players.begin();
        if (player != _players.end())
        {
            (*player)->addHitResistance(chooseLightIndex());
        }
        _hud->setHitsLeft(_hud->getHitsLeft() + 1);
	}
	else if (gameEvent->eventName == GameEvent::CreateMeteorShower)
	{
		createMeteorShot("basic", gameEvent->x, gameEvent->y, Utility::getDevicePositionY(BALL_RADIUS), b2Vec2(0.0, Utility::getDevicePositionY(2.0)));
	}
	else if (gameEvent->eventName == GameEvent::AddParticles)
	{
#if(ENABLE_PARTICLES == 1)
		{
			if (gameEvent->particleType == e_REDUCTION_COUNT_PARTICLES)
			{
				addReductionCountParticles(gameEvent->x, gameEvent->y, gameEvent->startColor, Vec2(gameEvent->destX, gameEvent->destY));
			}
			else if (gameEvent->particleType == e_COSMIC_BLAST_PARTICLES)
			{
				addCosmicBlastParticles(gameEvent->x, gameEvent->y, gameEvent->startColor, Vec2(gameEvent->destX, gameEvent->destY));
			}
			else if (gameEvent->particleType == e_DARK_PARTICLES)
			{
				addDarkParticles(gameEvent->x, gameEvent->y, gameEvent->startColor, Vec2(gameEvent->destX, gameEvent->destY), gameEvent->angle);
			}
			else if (gameEvent->particleType == e_COLLISION_PARTICLES)
			{
				addCollisionParticles(gameEvent->startColor, gameEvent->x, gameEvent->y);
			}
			else if (gameEvent->particleType == e_EXPLOSION_PARTICLES)
			{
				addExplosionParticles(gameEvent->startColor, gameEvent->x, gameEvent->y);
                {
                    CameraShake * camShake = CameraShake::create();
                    camShake->initWithDuration(0.35, Utility::getDevicePositionX(4.0), Utility::getDevicePositionY(4.0));
                    rendTexSprite->runAction(camShake);
                }
                {
                    CameraShake * camShake = CameraShake::create();
                    camShake->initWithDuration(0.25, Utility::getDevicePositionX(4.0), Utility::getDevicePositionY(4.0));
                    _shaderExcludeContainer->runAction(camShake);
                }

				AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_STAR_BLAST);
			}
		}
#endif
	}
}

void Game::CreateCannonShots(float x, float y, float radius, Point direction)
{
	const rapidjson::Value& ballAsset = _configFile->settings["bulbAsset"];
	std::string fileName = std::string(ballAsset[std::string("cannonshots").c_str()].GetString());

	for (int index = 0; index < 1; index++)
	{
		CannonShots * sprite = CannonShots::create();
		sprite->initWithFile(fileName);
		sprite->setDirection(direction);
		sprite->SetObjectId(e_CannonShots);
		sprite->CreateBody(x + index * Utility::getDevicePositionY(BALL_RADIUS * 2.0), y, radius);
		sprite->OnUpdate(0.f);
		sprite->retain();
		_cannonShotObjects.push_back(sprite);
		_shaderExcludeContainer->addChild(sprite);
	}
}

void Game::onCollidesRedBulb(cocos2d::EventCustom *event)
{
	_forceCloseLevel = true;
	_levelStatus = e_FAIL;

	for (std::vector<Bulb*>::iterator iter = _bulbs.begin(); iter != _bulbs.end(); iter++)
	{
		Bulb * bulb = (Bulb*)(*iter);
		if (bulb->getCanDieOnForceCloseLevel())
		{
			(*iter)->setIsDead(true);
		}
	}
}

#if (ENABLE_SHADERS == 1)
void Game::addLightToObject(PhysicsSprite *object)
{
	object->setLightIndex(chooseLightIndex());

	if (object->getLightIndex() >= 0)
	{
		//update light
		std::ostringstream prefix;
		prefix << "lights[";
		prefix << object->getLightIndex();
		prefix << "]";

		std::ostringstream ossPos;
		ossPos << prefix.str().c_str();
		ossPos << ".position";
		glProgramState->setUniformVec2(ossPos.str().c_str(), Vec2(object->GetCCBodyPositionX(), object->GetCCBodyPositionY()));

		std::ostringstream ossActive;
		ossActive << prefix.str().c_str() << ".isActive";
		glProgramState->setUniformInt(ossActive.str().c_str(), 1);

		std::ostringstream ossColor;
		ossColor << prefix.str().c_str();
		ossColor << ".color";
		glProgramState->setUniformVec3(ossColor.str().c_str(), object->getLightColor() * object->getLightIntensity());
	}
}
#endif

void Game::onBuildLevel()
{
	//init HUD
	_hud = HUD::create();
	_shaderExcludeContainer->addChild(_hud);
    _hud->setVisible(false);
	_hud->retain();
    _hud->setTotalStars(bulbsLeft(e_GreenBulb));

	_animHandler = AnimationHandler::getInstance();
	addChild(_animHandler);

	std::ostringstream jsonFileName;
	jsonFileName << "levels/level" << GameVariables::levelNum << ".json";
	std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.str().c_str()));
	rapidjson::Document document;
	document.Parse<0>(jsonData.c_str());

	int hitsLeftCount = 1;
	
	const rapidjson::Value& timeLeft = _configFile->settings["TimeLeft"];
	RAPIDJSON_ASSERT(timeLeft.IsArray());
	int timeLeftCount = (int)(timeLeft[_newLevelNum].GetInt());
	if (timeLeftCount > 0)
	{
		_isTimerMode = true;
		_hud->setIsTimerMode(true);
	}
	else
	{
		_isTimerMode = false;
	}

	_hud->setUpUI();

	if (_isTimerMode)
	{
		_hud->setTime(timeLeftCount);
	}
	_hud->setHitsLeft(hitsLeftCount);
}

bool Game::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	
	return true;
}

void Game::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
	if (_pauseControl) return;

	if (_isTimerMode && !_hud->isLevelTimeStarts())
	{
		_hud->startTimerMode();
	}

	if (_canShoot)
	{
		_canShoot = false;
		if (_tapLabel)
		{
			_tapLabel->setVisible(false);
		}
		//activate ball
		auto player = _players.begin();
		if (player != _players.end())
		{
			(*player)->GetBody()->SetType(b2_dynamicBody);
		}
        for (auto iter = _dynamicObjects.begin(); iter != _dynamicObjects.end(); iter++)
        {
            (*iter)->onStartTimer();
        }
		moveMenuOut();
	}
	else
	{
		addForce(touch);
	}
}

void Game::addForceAnim(cocos2d::Touch *touch, Vec2 unitVec)
{
	_wave1->stopAllActions();
	_wave1->setScale(1.0);
	_wave1->setOpacity(255);
	_wave1->setPosition(Vec2(touch->getLocation().x, touch->getLocation().y));
	auto player = _players.begin();
	auto move = MoveTo::create(0.5, Vec2((*player)->GetCCBodyPositionX(), (*player)->GetCCBodyPositionY()));
	auto fade = FadeTo::create(0.5, 0);
	_wave1->runAction(move);
	_wave1->runAction(fade);
	_wave1->runAction(ScaleTo::create(0.5, 0.0));
}

void Game::addForce(cocos2d::Touch *touch)
{
	for (auto iter = _players.begin(); iter != _players.end(); iter++)
	{
		Vec2 unitVec = GameHelper::Helper::UnitVector(Vec2(touch->getLocation().x, touch->getLocation().y)
			,
			Vec2((*iter)->GetCCBodyPositionX(), (*iter)->GetCCBodyPositionY())
			);
		(*iter)->GetBody()->SetLinearVelocity(b2Vec2(unitVec.x * Utility::getDevicePositionX(2.5), unitVec.y * Utility::getDevicePositionY(2.5)));
	}
    {
        addForceAnim(touch, Vec2());
    }
	AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_PLAYER_MOVEMENT);
}

void Game::checkAndClose()
{
	for (std::vector<Ball*>::iterator iter = _players.begin(); iter != _players.end(); iter++)
	{
		if (!(*iter)->getPauseUpdate())
		{
			return;
		}
		else
		{
			(*iter)->setIsDead(true);
		}
	}
	closeLevel();
}

void Game::ShowLevelSelectionScreen()
{
	destroyAll();
    _configFile->unloadConfigFile();
	Director::getInstance()->replaceScene(NewLevelSelectionScreen::createScene());
}

void Game::RestartLevel()
{
	destroyAll();
	init();
	onEnter();
	onEnterTransitionDidFinish();
}

void Game::showLevelIntro(std::string fileName)
{
	assert(!_levelIntro);
	_pauseControl = true;
	_levelIntro = LevelIntro::create();
	_levelIntro->construct(std::string("ui/levelintro1.csb"));
	_levelIntro->retain();
	_shaderExcludeContainer->addChild(_levelIntro);
	{
		auto listener = EventListenerCustom::create(ClickEvent::CLICK, CC_CALLBACK_1(Game::onLevelIntroCallback, this));
		_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, _levelIntro);
	}
	_levelIntro->getLayout()->setScale(0.01);
}

void Game::onLevelIntroCallback(cocos2d::EventCustom *event)
{
	if (event->getUserData() == _levelIntro)
	{
		ClickEvent * pEvent = (ClickEvent*)event;

		if (pEvent->nodeName == "playbtn")
		{
			onGameStartTickComplete();
		}
		else if (pEvent->nodeName == "menubtn")
		{
			callOnceBeforeUpdate();
			CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::ShowLevelSelectionScreen, this));
			Utility::delayedCall(this, func);
		}
		else
		{
			return;
		}

		AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_BTN_CLICK);
	}
}

void Game::showLevelOutroFail()
{
    _pauseControl = true;
    
    if (!_levelOutro)
    {
        std::string jsonFileName = "json/powerupConfig.json";
        std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
        rapidjson::Document document;
        document.Parse<0>(jsonData.c_str());
        
        _levelOutro = LevelOutro::create();
        _levelOutro->construct(std::string("ui/leveloutro_fail.csb"));
        {
            EventListenerCustom * customListener = EventListenerCustom::create(ClickEvent::CLICK, CC_CALLBACK_1(Game::onLevelOutroCallback, this));
            _eventDispatcher->addEventListenerWithSceneGraphPriority(customListener, _levelOutro);
        }
        _shaderExcludeContainer->addChild(_levelOutro);
        _levelOutro->retain();
        
        //animation
        _levelOutro->getLayout()->setScaleY(0.01);
        popupStartAnim(_levelOutro);
        
        _levelOutro->updateScoreFail(_hud->getEnergy(), _hud->getTotalStars());
        
        if (GameVariables::levelNum > 5 && !GameSaveData::getInstance()->unlockedAds)
        {
            GameSharing::showAd();
        }
    }
}

void Game::showLevelOutro()
{
	_pauseControl = true;

	if (!_levelOutro)
	{
		std::string jsonFileName = "json/powerupConfig.json";
		std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
		rapidjson::Document document;
		document.Parse<0>(jsonData.c_str());

		_levelOutro = LevelOutro::create();
		_levelOutro->construct(std::string("ui/leveloutro.csb"));
		{
			EventListenerCustom * customListener = EventListenerCustom::create(ClickEvent::CLICK, CC_CALLBACK_1(Game::onLevelOutroCallback, this));
			_eventDispatcher->addEventListenerWithSceneGraphPriority(customListener, _levelOutro);
		}
		_shaderExcludeContainer->addChild(_levelOutro);
		_levelOutro->retain();

		//animation
		_levelOutro->getLayout()->setScaleY(0.01);
		popupStartAnim(_levelOutro);
        
        int starsCollected = _hud->getEnergy();
        int score = starsCollected * _hud->getTimeLeft();
        
        if (GameSaveData::getInstance()->levelUnlocked < GameVariables::levelNum)
        {
            GameSaveData::getInstance()->levelUnlocked = GameVariables::levelNum;
            GameSaveData::getInstance()->totalStarsCollected += starsCollected;
            GameSaveData::getInstance()->totalScore += score;
            GameSaveData::getInstance()->saveData();
        }
        unsigned long totalScore = GameSaveData::getInstance()->totalScore;
        unsigned long totalStarsCollected = GameSaveData::getInstance()->totalStarsCollected;

        _levelOutro->updateScoreWin(0, starsCollected, totalStarsCollected, score, totalScore);
        _levelOutro->updateStar(0);
        if (!GameSaveData::getInstance()->unlockedAds)
        {
            GameSharing::showAd();
        }
	}
}

void Game::loadNextLevel()
{
	GameVariables::levelNum += 1;
	RestartLevel();
}

void Game::onLevelOutroCallback(EventCustom * event)
{
	if (event->getUserData() == _levelOutro)
	{
		//animation
		popupCloseAnim(_levelOutro, CallFunc::create(CC_CALLBACK_0(Game::clearLevelOutro, this)));

		ClickEvent * pEvent = (ClickEvent*)event;
		if (pEvent->nodeName == "retrybtn")
		{

			CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::RestartLevel, this));
			Utility::delayedCall(this, func);
		}
		else if (pEvent->nodeName == "menubtn")
		{
			CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::ShowLevelSelectionScreen, this));
			Utility::delayedCall(this, func);
		}
		else if (pEvent->nodeName == "playnextlevelbtn")
		{
			AudioController::getInstance()->preloadAndPlayBg(SOUND_ASSETS::BG_1);
			CallFunc * func = CallFunc::create(CC_CALLBACK_0(Game::loadNextLevel, this));
			Utility::delayedCall(this, func);
		}
		else
		{
			return;
		}

		AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_BTN_CLICK);
	}
}

void Game::ExtractObjectFromFile(int worldNum, int slideNum)
{
	std::ostringstream oss;
	oss << "levels/level" << slideNum << ".json";

	std::string jsonFileName = oss.str();
	std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
	rapidjson::Document document;
	document.Parse<0>(jsonData.c_str());

	//Build Level Objects
	BuildLevel(document);
}

void Game::BuildLevel(rapidjson::Document& document)
{
	const rapidjson::Value& objects = document["levelObjects"];
	int length = GameHelper::Helper::getJsonArrayLength(objects);

	for (int index = 0; index < length; index++)
	{
		const rapidjson::Value& object = objects[index];

		if (object["type"].GetString() == std::string("woodenbox"))
		{
			CreateRect(object, false);
		}
		else if (object["type"].GetString() == std::string("gravitybar"))
		{
			CreateRect(object, true);
		}
		else if (object["type"].GetString() == std::string("rectgreenbulb"))
		{
			CreateRectBulb(object, e_RectGreenBulb);
		}
		else if (object["type"].GetString() == std::string("rectredbulb"))
		{
			CreateRectBulb(object, e_RectRedBulb);
		}
		else if (object["type"].GetString() == std::string("rectstonebulb"))
		{
			CreateRectBulb(object, e_RectStoneBulb);
		}
		else if (object["type"].GetString() == std::string("rectsolidbulb"))
		{
			CreateRectBulb(object, e_RectSolidBulb);
		}
		else if (object["type"].GetString() == std::string("hmovingbox"))
		{
			CreateMovingRect(object);
		}
		else if (object["type"].GetString() == std::string("vmovingbox"))
		{
			CreateMovingRect(object);
		}
		else if (object["type"].GetString() == std::string("cannon"))
		{
			CreateCannon(object);
		}
		else if (object["type"].GetString() == std::string("player"))
		{
			float x = object["x"].GetDouble();
			float y = object["y"].GetDouble();

			_playerPosition.x = Utility::getDevicePositionX(x);
			_playerPosition.y = Utility::getDevicePositionY(y);
		}
		else if (object["type"].GetString() == std::string("xLimit"))
		{
			float min = object["min"].GetDouble();
			float max = object["max"].GetDouble();

			_worldXLimits.x = Utility::getDevicePositionX(min);
			_worldXLimits.y = Utility::getDevicePositionX(max);
		}
		else if (object["type"].GetString() == std::string("yLimit"))
		{
			float min = object["min"].GetDouble();
			float max = object["max"].GetDouble();

			_worldYLimits.x = Utility::getDevicePositionY(min);
			_worldYLimits.y = Utility::getDevicePositionY(max);
		}
		else if (object["type"].GetString() == std::string("bgsetting"))
		{
			createBgSetting(object);
		}
		else if (object["type"].GetString() == std::string("meteorshower"))
		{
			createMeteorShower(object);
		}
		else
		{
			CreateBulb(object);
		}
	}
}

void Game::createBgSetting(const rapidjson::Value &obj)
{
	//add bg
	{
		std::ostringstream oss;
		oss << "bgsetting/bg" << ((GameVariables::levelNum % 2) + 1) << ".jpg";

		auto bgImage = Sprite::create(oss.str());
		bgImage->setAnchorPoint(Vec2(1.0, 1.0));
		bg->addChild(bgImage);

		float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH) / bgImage->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT) / bgImage->getContentSize().height);
		bgImage->setScale(maxRatio);
		bgImage->setPosition(visibleSize.width, visibleSize.height);
	}

	//add particles
	{
		_smokeParticle = FirePlistParticle::create();
		_smokeParticle->initWithFile("plist/mainScreenEffect.plist");
		_smokeParticle->setAnchorPoint(Vec2(0.5, 0.0));
		_smokeParticle->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH / 2.0), 0.0);
		_smokeParticle->setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH / 2.0), Utility::getDevicePositionY(10)));
		addChild(_smokeParticle);
		_smokeParticle->setBlendAdditive(true);

		_spaceParticle = FirePlistParticle::create();
		_spaceParticle->initWithFile("plist/space_particle.plist");
		_particleLayer->addChild(_spaceParticle);
		_spaceParticle->setAnchorPoint(Vec2(0.5, 0.5));
		_spaceParticle->setPosition(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5), Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5)));
		_spaceParticle->setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5), Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5)));
        _spaceParticle->setEmissionRate(_spaceParticle->getEmissionRate() * 0.25);
	}

	{
		const rapidjson::Value &layer = obj["layer1"]["objects"];
		int length = GameHelper::Helper::getJsonArrayLength(layer);

		for (int index = 0; index < length; index++)
		{
			const rapidjson::Value &data = layer[index];
			auto sprite = Sprite::create("bgsetting/" + std::string(data["name"].GetString()) + ".png");

			float dataX = Utility::getDevicePositionX(data["x"].GetDouble());
			float dataY = Utility::getDevicePositionY(data["y"].GetDouble());
			float dataWidth = Utility::getDevicePositionX(data["width"].GetDouble());
			float dataHeight = Utility::getDevicePositionY(data["height"].GetDouble());

			float scale = MAX(dataWidth / sprite->getBoundingBox().size.width, dataHeight / sprite->getBoundingBox().size.height);
			sprite->setPosition(dataX, dataY);
			sprite->setScale(scale);
			_layer1->addChild(sprite);
		}
	}
	{
		const rapidjson::Value &layer = obj["layer2"]["objects"];
		int length = GameHelper::Helper::getJsonArrayLength(layer);

		for (int index = 0; index < length; index++)
		{
			const rapidjson::Value &data = layer[index];
			auto sprite = Sprite::create("bgsetting/" + std::string(data["name"].GetString()) + ".png");

			float dataX = Utility::getDevicePositionX(data["x"].GetDouble());
			float dataY = Utility::getDevicePositionY(data["y"].GetDouble());
			float dataWidth = Utility::getDevicePositionX(data["width"].GetDouble());
			float dataHeight = Utility::getDevicePositionY(data["height"].GetDouble());

			float scale = MAX(dataWidth / sprite->getBoundingBox().size.width, dataHeight / sprite->getBoundingBox().size.height);
			sprite->setPosition(dataX, dataY);
			sprite->setScale(scale);
			_layer2->addChild(sprite);
		}
	}
	{
		const rapidjson::Value &layer = obj["layer3"]["objects"];
		int length = GameHelper::Helper::getJsonArrayLength(layer);

		for (int index = 0; index < length; index++)
		{
			const rapidjson::Value &data = layer[index];
			auto sprite = Sprite::create("bgsetting/" + std::string(data["name"].GetString()) + ".png");

			float dataX = Utility::getDevicePositionX(data["x"].GetDouble());
			float dataY = Utility::getDevicePositionY(data["y"].GetDouble());
			float dataWidth = Utility::getDevicePositionX(data["width"].GetDouble());
			float dataHeight = Utility::getDevicePositionY(data["height"].GetDouble());

			float scale = MAX(dataWidth / sprite->getBoundingBox().size.width, dataHeight / sprite->getBoundingBox().size.height);
			sprite->setPosition(dataX, dataY);
			sprite->setScale(scale);
			_layer3->addChild(sprite);
		}
	}
}

void Game::updatePhysicsObjectScroll(b2Vec2 flag, b2Vec2 delta)
{
	for (auto bulb = _bulbs.begin(); bulb != _bulbs.end(); bulb++)
	{
		(*bulb)->updateScroll(flag, delta);
	}
}

void Game::updateLayerScroll(b2Vec2 delta)
{
	_layer1->setPositionX(_layer1->getPositionX() + delta.x * SCROLL_SPEED_1 * _scrollFactor);
	_layer1->setPositionY(_layer1->getPositionY() + delta.y * SCROLL_SPEED_1 * _scrollFactor);

	_layer2->setPositionX(_layer2->getPositionX() + delta.x * SCROLL_SPEED_2 * _scrollFactor);
	_layer2->setPositionY(_layer2->getPositionY() + delta.y * SCROLL_SPEED_2 * _scrollFactor);

	_layer3->setPositionX(_layer3->getPositionX() + delta.x * SCROLL_SPEED_3 * _scrollFactor);
	_layer3->setPositionY(_layer3->getPositionY() + delta.y * SCROLL_SPEED_3 * _scrollFactor);
}

void Game::CreateMovingRect(const rapidjson::Value& obj)
{
	MovingPhysicsBox * sprite = MovingPhysicsBox::create();
	sprite->initWithFile("bluewall.png");

	float x = obj["x"].GetDouble();
	float y = obj["y"].GetDouble();
	float width = obj["width"].GetDouble();
	float height = obj["height"].GetDouble();

	x = Utility::getDevicePositionX(x);
	y = Utility::getDevicePositionY(y);
	width = Utility::getDevicePositionX(width);
	height = Utility::getDevicePositionY(height);

	sprite->CreateBody(x, y, width, height);
	sprite->SetTransform(sprite->GetBody()->GetPosition(), 0.0f);
	sprite->SetObjectId(e_Box);

	const rapidjson::Value &limitA = obj["limitA"];
	const rapidjson::Value &limitB = obj["limitB"];

	Vec2 vLimitA(limitA[rapidjson::SizeType(0)].GetDouble(), limitA[rapidjson::SizeType(1)].GetDouble());
	Vec2 vLimitB(limitB[rapidjson::SizeType(0)].GetDouble(), limitB[rapidjson::SizeType(1)].GetDouble());

	vLimitA.x = Utility::getDevicePositionX(vLimitA.x);
	vLimitA.y = Utility::getDevicePositionY(vLimitA.y);

	vLimitB.x = Utility::getDevicePositionX(vLimitB.x);
	vLimitB.y = Utility::getDevicePositionY(vLimitB.y);

	sprite->setLowerLimit(vLimitA);
	sprite->setUpperLimit(vLimitB);

	sprite->updateMovingDirection();
	sprite->OnUpdate(0.f);
	sprite->retain();
	_dynamicObjects.push_back(sprite);
	_gameContainer->addChild(sprite);
}

void Game::CreateRectBulb(const rapidjson::Value& obj, ENUM_BULB_TYPE enumId)
{
	RectBulb * sprite;
	if (enumId == e_RectGreenBulb)
	{
		sprite = RectGreenBulb::create();
		sprite->initWithFile("rectgreenbulb.png");
		sprite->setBulbType(e_RectGreenBulb);
	}
	else if (enumId == e_RectStoneBulb)
	{
		sprite = RectStoneBulb::create();
		sprite->initWithFile("asteroid.png");
		sprite->setBulbType(e_RectStoneBulb);
		sprite->setProtectionCount(STONE_BULB_PROTECTION_COUNT);
	}
	else if (enumId == e_RectRedBulb)
	{
		sprite = RectRedBulb::create();
		sprite->initWithFile("rectredbulb.png");
		sprite->setBulbType(e_RectRedBulb);
	}
	else if (enumId == e_RectSolidBulb)
	{
		sprite = RectSolidBulb::create();
		sprite->initWithFile("asteroid.png");
		sprite->setBulbType(e_RectSolidBulb);
	}
	float x = obj["x"].GetDouble();
	float y = obj["y"].GetDouble();
	float width = obj["width"].GetDouble();
	float height = obj["height"].GetDouble();
	float angle = obj["angle"].GetDouble();

	x = Utility::getDevicePositionX(x);
	y = Utility::getDevicePositionY(y);
	width = Utility::getDevicePositionX(width);
	height = Utility::getDevicePositionY(height);

	if (obj.HasMember("canRotate") && obj["canRotate"].GetBool())
	{
		sprite->setCanRotate(obj["canRotate"].GetBool());
		sprite->setRotationValue(obj["rotationValue"].GetDouble());
		const rapidjson::Value& rotatingCenter = obj["rotatingCenter"];
		sprite->setCenter(Utility::getDevicePositionX(rotatingCenter[rapidjson::SizeType(0)].GetDouble()), Utility::getDevicePositionY(rotatingCenter[rapidjson::SizeType(1)].GetDouble()));
		sprite->setRadius(Utility::getDevicePositionY(obj["rotatingRadius"].GetDouble()));

		width = height;
		height = width;
	}

	sprite->SetObjectId(e_Bulb);
	sprite->CreateBody(x, y, width, height);
	sprite->setAngle(CC_DEGREES_TO_RADIANS(angle));
	sprite->SetTransform(sprite->GetBody()->GetPosition(), CC_DEGREES_TO_RADIANS(angle));
	sprite->OnUpdate(0.f);
	sprite->retain();
	_dynamicObjects.push_back(sprite);
	_gameContainer->addChild(sprite);

	//for testing
	//    if (enumId == e_RectStoneBulb)
	//    {
	//        FireRectParticle * particle = FireRectParticle::create();
	//        particle->initWithPosition(0, 0);
	//        particle->setPosition(x, y);
	//        _shaderExcludeContainer->addChild(particle);
	//    }
}

void Game::CreateRect(const rapidjson::Value& obj, bool isGravityBar)
{
	PhysicsBox * sprite = PhysicsBox::create();
	sprite->initWithFile("bluewall.png");
	float x = obj["x"].GetDouble();
	float y = obj["y"].GetDouble();
	float width = obj["width"].GetDouble();
	float height = obj["height"].GetDouble();
	float angle = obj["angle"].GetDouble();

	x = Utility::getDevicePositionX(x);
	y = Utility::getDevicePositionY(y);
	width = Utility::getDevicePositionX(width);
	height = Utility::getDevicePositionY(height);

	if (isGravityBar)
	{
		sprite->SetObjectId(e_Gravity_Bar);
	}
	else
	{
		sprite->SetObjectId(e_Box);
	}

	sprite->CreateBody(x, y, width, height);
	sprite->SetTransform(sprite->GetBody()->GetPosition(), CC_DEGREES_TO_RADIANS(angle));
	sprite->OnUpdate(0.f);
	sprite->retain();
    sprite->setVisible(false);
    
	_dynamicObjects.push_back(sprite);
	_shaderExcludeContainer->addChild(sprite);
}

void Game::CreateCannon(const rapidjson::Value& obj)
{
	Cannon * sprite = Cannon::create();
	sprite->initWithFile("bluewall.png");

	float x = obj["x"].GetDouble();
	float y = obj["y"].GetDouble();
	float width = obj["width"].GetDouble();
	float height = obj["height"].GetDouble();

	x = Utility::getDevicePositionX(x);
	y = Utility::getDevicePositionY(y);
	width = Utility::getDevicePositionX(width);
	height = Utility::getDevicePositionY(height);

	if (x < 0)
	{
		sprite->setDirection(Vec2(1.0, 0.0));
	}
	else if (x > Utility::getDevicePositionX(REF_GAME_WIDTH))
	{
		sprite->setDirection(Vec2(-1.0, 0.0));
	}
	else if (y < 0)
	{
		sprite->setDirection(Vec2(0, 1.0));
	}
	else if (y > Utility::getDevicePositionY(REF_GAME_HEIGHT))
	{
		sprite->setDirection(Vec2(0, -1.0));
	}
	sprite->setFrequency(obj["frequency"].GetDouble());
	sprite->SetObjectId(e_Cannon);
	sprite->CreateBody(x, y, width, height);
	sprite->OnUpdate(0.f);
	sprite->retain();
	_dynamicObjects.push_back(sprite);
	_shaderExcludeContainer->addChild(sprite);
}

CosmicBulbParticle* Game::addCosmicBulbParticle(float x, float y, Color4F startColor)
{
	CosmicBulbParticle * particle = CosmicBulbParticle::create();
	particle->initWithColor(startColor);
	particle->setPosition(Vec2(x, y));
	_shaderExcludeContainer->addChild(particle);
	return particle;
}

DeadBulbParticles* Game::addDeadBulbParticle(float x, float y, Color4F startColor)
{
	DeadBulbParticles * particle = DeadBulbParticles::create();
	particle->initWithPosition(x, y);
	_shaderExcludeContainer->addChild(particle);
	return particle;
}

BulbParticle* Game::addBulbParticle(float x, float y, Color4F startColor)
{
	BulbParticle * particle = BulbParticle::create();
	particle->initWithColor(startColor);
	particle->setPosition(Vec2(x, y));
	particle->setBlendAdditive(true);
	_shaderExcludeContainer->addChild(particle);
	return particle;
}

RotatingBulb* Game::CreateBulb(const rapidjson::Value& obj)
{
	RotatingBulb * bulb;

	float x = obj["x"].GetDouble();
	float y = obj["y"].GetDouble();
	float radius = obj["width"].GetDouble();

	x = Utility::getDevicePositionX(x);
	y = Utility::getDevicePositionY(y);
	radius = Utility::getDevicePositionY(radius / 2.0);

	if (obj["bulbtype"].GetInt() == e_GreenBulb)
	{
		bulb = GreenBulb::create();
		bulb->setBulbType((ENUM_BULB_TYPE)obj["bulbtype"].GetInt());
		cocos2d::Vec3 color = chooseColorForBulb();
		bulb->setLightColor(color);

		if (_needMarker)
		{
			auto marker = Sprite::createWithSpriteFrameName("circle.png");
			marker->setAnchorPoint(Vec2(0.5, 0.5));
			marker->setScale(Utility::getDevicePositionX(20.0) / marker->getBoundingBox().size.width);
			marker->setPosition(x, y);
			_shaderExcludeContainer->addChild(marker);
			bulb->setMarker(marker);
			marker->setVisible(false);
			float actualScale = marker->getScale();
			auto scaleDown = ScaleTo::create(1.0, actualScale * 0.5);
			auto scaleUp = ScaleTo::create(1.0, actualScale);
			marker->runAction(RepeatForever::create(Sequence::createWithTwoActions(scaleDown, scaleUp)));
            
            auto markerText = Label::createWithBMFont("fonts/font.fnt", "0");
            markerText->setAnchorPoint(Vec2(0.5, 0.5));
            markerText->setScale(Utility::getDevicePositionX(0.2));
            markerText->setPosition(marker->getPosition());
            _shaderExcludeContainer->addChild(markerText);
            bulb->setMarkerLabel(markerText);
            markerText->setVisible(false);
		}
	}
	else if (obj["bulbtype"].GetInt() == e_DeadBulb)
	{
		bulb = DeadBulb::create();
	}
	else if (obj["bulbtype"].GetInt() == e_SolidBulb)
	{
		bulb = SolidBulb::create();
	}
	else if (obj["bulbtype"].GetInt() == e_RedBulb)
	{
		bulb = RedBulb::create();
		bulb->setParticle(addBulbParticle(x, y, Color4F(1.0, 0.0, 0.0, 1.0)));
	}
	else if (obj["bulbtype"].GetInt() == e_Stonebulb)
	{
		bulb = StoneBulb::create();
		bulb->setBulbType((ENUM_BULB_TYPE)obj["bulbtype"].GetInt());
		cocos2d::Vec3 color = chooseColorForBulb();
		bulb->setLightColor(color);
		bulb->setProtectionCount(STONE_BULB_PROTECTION_COUNT);
	}
	else if (obj["bulbtype"].GetInt() == e_Portal)
	{
		bulb = Portals::create();
	}
	else if (obj["bulbtype"].GetInt() == e_Portals)
	{
		Portals * portal1 = (Portals*)CreateBulb(obj["portal1"]);
		Portals * portal2 = (Portals*)CreateBulb(obj["portal2"]);

		portal1->setOutPortal(portal2);
		portal2->setOutPortal(portal1);

		return nullptr;
	}
	else if (obj["bulbtype"].GetInt() == e_TimerBulb)
	{
		bulb = TimerBulb::create();
		bulb->setParticle(addBulbParticle(x, y, Color4F(0.0, 0.0, 1.0, 1.0)));
		bulb->setTimerRepeat(obj["timerRepeat"].GetInt());
	}
	else if (obj["bulbtype"].GetInt() == e_BallsLeftDeducter)
	{
		bulb = BallsLeftDeducter::create();
	}
	else if (obj["bulbtype"].GetInt() == e_Bumper)
	{
		bulb = Bumper::create();
	}
	else if (obj["bulbtype"].GetInt() == e_BounceBulb)
	{
		bulb = BounceBulb::create();
	}
	else if (obj["bulbtype"].GetInt() == e_BlackHole)
	{
		bulb = BlackHole::create();
	}
	else if (obj["bulbtype"].GetInt() == e_CosmicBulb)
	{
		bulb = CosmicBulb::create();
		bulb->setBulbType((ENUM_BULB_TYPE)obj["bulbtype"].GetInt());
		bulb->setParticle(addCosmicBulbParticle(x, y, bulb->getColorForType()));
		bulb->setProtectionCount(1);
	}
	else if (obj["bulbtype"].GetInt() == e_MultiplierBulb)
	{
		bulb = MultiplierBulb::create();
        
        auto particle = ShowerParticle::create();
        getParent()->addChild(particle, 0);
        
        particle->setStartColor(Color4F(0.0, 1.0, 0.0, 1.0));
        particle->setEndColor(Color4F(1.0, 1.0, 1.0, 0.0));
        particle->setEndSize(0.0);
        particle->setLife(0.6);
        particle->setScale(0.85);
        particle->setBlendAdditive(true);
		bulb->setParticle(particle);
        bulb->getParticle()->setVisible(false);
        BlendFunc bf = { GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA };
        bulb->setBlendFunc(bf);
	}
	else if (obj["bulbtype"].GetInt() == e_ToggleBulb)
	{
		bulb = ToggleBulb::create();
		bulb->setBulbType((ENUM_BULB_TYPE)obj["bulbtype"].GetInt());
		bulb->setParticle(addBulbParticle(x, y, bulb->getColorForType()));
	}

	bulb->setBulbType((ENUM_BULB_TYPE)obj["bulbtype"].GetInt());
	const rapidjson::Value& ballAsset = _configFile->settings["bulbAsset"];

	std::string fileName = std::string(ballAsset[bulb->getBulbName().c_str()].GetString());
	bulb->initWithFile(fileName);
	bulb->setAnchorPoint(Vec2(0.5, 0.5));
	if (obj.HasMember("isGravity") && obj["isGravity"].GetBool())
	{
		bulb->setBulbGravityType(e_TYPE_TWO_FLOATING);
		if (obj.HasMember("isWave") && obj["isWave"].GetBool())
		{
			bulb->setIsWave(true);
		}
	}

	if (obj.HasMember("canRotate") && obj["canRotate"].GetBool())
	{
		bulb->setCanRotate(obj["canRotate"].GetBool());
		bulb->setRotationValue(obj["rotationValue"].GetDouble());
		const rapidjson::Value& rotatingCenter = obj["rotatingCenter"];
		bulb->setCenter(Utility::getDevicePositionX(rotatingCenter[rapidjson::SizeType(0)].GetDouble()), Utility::getDevicePositionY(rotatingCenter[rapidjson::SizeType(1)].GetDouble()));
		bulb->setRadius(Utility::getDevicePositionY(obj["rotatingRadius"].GetDouble()));

		if (obj.HasMember("isWave") && obj["isWave"].GetBool())
		{
			bulb->setIsWave(true);
		}
	}
	if (obj.HasMember("isWave") && obj["isWave"].GetBool())
	{
		bulb->setIsWave(true);
	}

	bulb->SetObjectId(e_Bulb);
	bulb->CreateBody(x, y, radius);
	bulb->SetTransform(bulb->GetBody()->GetPosition(), CC_DEGREES_TO_RADIANS(obj["angle"].GetDouble()));
	bulb->retain();
	bulb->OnUpdate(0.f);
	_bulbs.push_back(bulb);

	if (bulb->getBulbType() != e_Bumper)
	{
		_gameContainer->addChild(bulb);
	}
	else
	{
		_shaderExcludeContainer->addChild(bulb);
	}

#if(BOX2D_DEBUG_DRAW == 1)
	bulb->setVisible(false);
#endif


#if (ENABLE_SHADERS == 1)
	if ((bulb->getBulbType() == e_GreenBulb || bulb->getBulbType() == e_Stonebulb))
	{
		float addedIntensity = Utility::getDevicePositionY(_lightIntensity);
		addedIntensity = (bulb->getBulbType() == e_ToggleBulb || bulb->getBulbType() == e_Stonebulb) ? (addedIntensity * 2.0) : addedIntensity;
		bulb->setLightIntensity(addedIntensity);
		addLightToObject(bulb);

		bulb->addStarImage();
	}
#endif

	return bulb;
}

void Game::removePlayer(Ball * player)
{
	player->getParent()->removeChild(player);
	player = nullptr;
}

void Game::onStartGameTimer(float dt)
{
	//_hud->setTime(_hud->getCurrentTime() + 1);
}

#if (ENABLE_SHADERS == 1)
void Game::updateLight(PhysicsSprite *obj, Vec2 pos)
{
	if (obj->getLightIndex() >= 0)
	{
		std::ostringstream prefix;
		prefix << "lights[";
		prefix << obj->getLightIndex();
		prefix << "]";

		std::ostringstream ossColor;
		ossColor << prefix.str().c_str();
		ossColor << ".color";

		std::ostringstream ossPos;
		ossPos << prefix.str().c_str();
		ossPos << ".position";

		std::ostringstream ossActive;
		ossActive << prefix.str().c_str() << ".isActive";

		glProgramState->setUniformInt(ossActive.str().c_str(), 1);

		glProgramState->setUniformVec2(ossPos.str().c_str(), pos);

		glProgramState->setUniformVec3(ossColor.str().c_str(), obj->getLightColor() * obj->getLightIntensity());
	}
}
#endif
#if (ENABLE_SHADERS == 1)
void Game::updateLights()
{
	for (std::vector<Ball*>::iterator iter = _players.begin(); iter != _players.end(); iter++)
	{
		if (!(*iter)->getIsDead()/* && (*iter)->getIsShaderDataDirty()*/)
		{
			updateLight(*iter, convertToWorldSpace(_shaderExcludeContainer->convertToWorldSpace((*iter)->GetCCBodyPosition())));
            
            for (auto helper = (*iter)->hitResistance.begin(); helper != (*iter)->hitResistance.end(); helper++)
            {
                updateLight((*helper), _shaderExcludeContainer->convertToWorldSpace((*helper)->GetCCBodyPosition()));
            }
		}
	}
	for (std::vector<Bulb*>::iterator iter = _bulbs.begin(); iter != _bulbs.end(); iter++)
	{
		if (!(*iter)->getIsDead()/* && (*iter)->getIsShaderDataDirty()*/)
		{
			updateLight(*iter, convertToWorldSpace(_gameContainer->convertToWorldSpace((*iter)->GetCCBodyPosition())));
		}
	}
}
#endif

void Game::clearLevelIntro()
{
	if (_levelIntro)
	{
		_levelIntro->stopAllActions();
		_eventDispatcher->removeEventListenersForTarget(_levelIntro);
		_levelIntro->getParent()->removeChild(_levelIntro);
		_levelIntro->release();
		_levelIntro = nullptr;

		_pauseControl = false;
	}
	if (_tapLabel == nullptr)
	{
		_tapLabel = Label::createWithBMFont("fonts/font.fnt", "         Tap To Fire, \n then Tap to Control");
		_tapLabel->setAnchorPoint(Vec2(0.5, 0.5));
		_tapLabel->setPosition(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH / 2.0), Utility::getDevicePositionY(REF_GAME_HEIGHT / 2.0)));
		_tapLabel->setScale(0.75);
		_shaderExcludeContainer->addChild(_tapLabel);

		FiniteTimeAction * action1 = FadeTo::create(1.0, 50.0);
		FiniteTimeAction * action2 = FadeTo::create(1.0, 255.0);
		auto sequence = Sequence::create(action1, action2, NULL);
		auto repeat = RepeatForever::create(sequence);
		_tapLabel->runAction(repeat);
	}
}

void Game::clearLevelOutro()
{
	if (_levelOutro)
	{
		_levelOutro->stopAllActions();
		_eventDispatcher->removeEventListenersForTarget(_levelOutro);
		_levelOutro->getParent()->removeChild(_levelOutro);
		_levelOutro->release();
		_levelOutro = nullptr;
	}
}

void Game::callOnceBeforeUpdate()
{
	if (_levelIntro)
	{
		popupCloseAnim(_levelIntro, CallFunc::create(CC_CALLBACK_0(Game::clearLevelIntro, this)));
	}
}

void Game::updateMarkersPosition(b2Vec2 delta)
{
	float halfWidth = Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5) / PTM_RATIO;
	float halfHeight = Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5) / PTM_RATIO;
	b2Vec2 deltaShift = delta;

	for (auto bulb = _bulbs.begin(); bulb != _bulbs.end(); bulb++)
	{
		if ((*bulb)->getBulbType() == e_GreenBulb)
		{
			bool xOut = false;
			bool yOut = false;

			//if greater than half width
			float delX = (*bulb)->GetBody()->GetPosition().x - deltaShift.x;
			if (delX > halfWidth || delX < -halfWidth)
			{
				xOut = true;
			}

			//if greater than half height
			float delY = (*bulb)->GetBody()->GetPosition().y - deltaShift.y;
            float refVal = ((halfHeight * 2.0) - deltaShift.y);
			if (delY > refVal || delY < -refVal)
			{
				yOut = true;
			}

			if (xOut || yOut)
			{
				if (xOut)
				{
					(*bulb)->updateMarker(Vec2((delX < -halfWidth) ? 0.0 : halfWidth*2.0*PTM_RATIO, (*bulb)->GetBody()->GetPosition().y * PTM_RATIO),
                                          "", (delX > halfWidth) ? -1 : 1);
				}
				else if (yOut)
				{
					(*bulb)->updateMarker(Vec2((*bulb)->GetBody()->GetPosition().x * PTM_RATIO, (delY < -halfHeight) ? 0.0 : halfHeight*2.0*PTM_RATIO),
                                          "", (delY > halfHeight) ? -2 : 2);
				}
				(*bulb)->getMarker()->setVisible(true);
            }
			else
			{
				(*bulb)->getMarker()->setVisible(false);
                (*bulb)->getMarkerLabel()->setVisible(false);
			}
		}
	}
}

void Game::onUpdate(float dt)
{
	ExtLayer::onUpdate(dt);

	if (PhysicsEnvironment::getPause()) return;

	//update physics step
	_physxEnv->OnUpdate(dt);

	//update all dynamic objects
	updateElements(dt);

	//update position
	auto player = _players.begin();
	if (player != _players.end())
	{
		b2Vec2 playerCurrentPosition = (*player)->GetBody()->GetPosition();
		Vec2 unitVector = GameHelper::Helper::UnitVector(Vec2(playerCurrentPosition.x, playerCurrentPosition.y),
			Vec2(_playerLastPosition.x, _playerLastPosition.y));
		
        b2Vec2 delPosition = playerCurrentPosition - _playerLastPosition;
        b2Vec2 flag = _physxEnv->changeOrigin(delPosition.x, delPosition.y);

		_playerLastPosition = (*player)->GetBody()->GetPosition();

		if (_needMarker)
		{
			updateMarkersPosition(_playerLastPosition);
			updatePhysicsObjectScroll(flag, delPosition);
		}

		updateLayerScroll(delPosition);

		(*player)->setParticleGravity(unitVector * Utility::getDevicePositionY(400));

		if ((*player)->GetCCBodyPositionY() < _worldYLimits.x)
		{
			(*player)->setIsDead(true);
		}
	}

	//switch on/off lights when within bounds
	checkLightBounds();

	//end game condition
	if (_isTimerMode)
	{
		if (_hud->getTimeLeft() <= 0)
		{
			setPlayersToDead();
		}
	}
	if (_hud->getHitsLeft() <= 0)
	{
		setPlayersToDead();
	}
}

void Game::onNextRound()
{
	checkEndGameCondition();

	if (_selectedBall == "fireball")
	{
		updateBulbsSensor(false);
	}

	_selectedBall = "basic";

	ResetTimeScale();

	if (_zoomTriggered)
	{
		Utility::delayedCall(this, CallFunc::create(CC_CALLBACK_0(Game::doZoomOut, this)), 0.3);
	}
	_zoomTriggered = false;

	if (_levelStatus == e_NONE)
	{
		CCLOG(" BUG ");
	}
	else if (_levelStatus == e_WIN)
	{
		closeLevel();
	}
	else if (_levelStatus == e_FAIL)
	{
		closeLevel();
	}
}

void Game::ResetTimeScale()
{
	Director::getInstance()->getScheduler()->setTimeScale(1.0);
}

void Game::updateElements(float dt)
{
	for (std::vector<Ball*>::iterator iter = _players.begin(); iter != _players.end();)
	{
		if ((*iter)->getIsDead())
		{
            for (auto helper = (*iter)->hitResistance.begin(); helper != (*iter)->hitResistance.end();)
            {
#if (ENABLE_SHADERS == 1)
                removeLightIndex((*helper));
#endif
                (*helper)->getParent()->removeChild((*helper));
                delete (*helper);
                helper = (*iter)->hitResistance.erase(helper);
            }
#if (ENABLE_SHADERS == 1)
			removeLightIndex((*iter));
#endif
			removePlayer(*iter);
			iter = _players.erase(iter);

			if (_players.size() == 0)
			{
                for (auto object = _dynamicObjects.begin(); object != _dynamicObjects.end(); object++)
                {
                    if ((*object)->GetObjectId() == e_Bulb)
                    {
                        RotatingBulb * bulb = (RotatingBulb*)(*object);
                        if (bulb->getBulbType() == e_Meteor)
                        {
                            bulb->setIsDead(true);
                        }
                    }
                    
                }
				onNextRound();
			}
		}
		else
		{
            for (auto helper = (*iter)->hitResistance.begin(); helper != (*iter)->hitResistance.end();)
            {
                if ((*helper)->getIsDead())
                {
    #if (ENABLE_SHADERS == 1)
                    removeLightIndex((*helper));
    #endif
                    (*helper)->getParent()->removeChild((*helper));
                    delete (*helper);
                    helper = (*iter)->hitResistance.erase(helper);
                }
                else
                {
                    helper++;
                }
            }
            
			(*iter)->OnUpdate(dt);
			iter++;
		}
	}

#if (ENABLE_SHADERS == 1)
	updateLights();
#endif
	for (std::vector<PhysicsSprite*>::iterator iter = _dynamicObjects.begin(); iter != _dynamicObjects.end();)
	{
		if ((*iter)->getIsDead())
		{
#if (ENABLE_SHADERS == 1)
			removeLightIndex((*iter));
#endif
			(*iter)->getParent()->removeChild((*iter));
			delete (*iter);
			iter = _dynamicObjects.erase(iter);
		}
		else
		{
			if ((*iter)->GetObjectId() == e_MeteorShower)
			{
				MeteorShower * shower = (MeteorShower*)(*iter);
				shower->setPlayerCurrentPosition(_playerLastPosition.x, _playerLastPosition.y);
			}
			if ((*iter)->GetObjectId() == e_Bulb)
			{
                RotatingBulb * bulb = (RotatingBulb*)(*iter);
                
				if (bulb->getBulbType() == e_Meteor && (*iter)->GetCCBodyPositionY() < _worldYLimits.x)
				{
					(*iter)->setIsDead(true);
				}
			}
			(*iter)->OnUpdate(dt);
			iter++;
		}
	}
    for (std::vector<CannonShots*>::iterator iter = _cannonShotObjects.begin(); iter != _cannonShotObjects.end();)
    {
        if ((*iter)->getIsDead())
        {
#if (ENABLE_SHADERS == 1)
            removeLightIndex((*iter));
#endif
            (*iter)->getParent()->removeChild((*iter));
            delete (*iter);
            iter = _cannonShotObjects.erase(iter);
        }
        else
        {
            (*iter)->OnUpdate(dt);
            iter++;
        }
    }
	for (std::vector<Bulb*>::iterator iter = _bulbs.begin(); iter != _bulbs.end();)
	{
		if ((*iter)->getIsDead())
		{
#if (ENABLE_SHADERS == 1)
			removeLightIndex((*iter));
#endif		
			if (!_zoomTriggered)
			{
				//doZoom(nullptr);
			}
			if ((*iter)->getBulbType() == e_GreenBulb)
			{
				int energy = 1;
				FlyingText* flyingText = FlyingText::create();
				_shaderExcludeContainer->addChild(flyingText);
				flyingText->setPosition((*iter)->GetCCBodyPositionX(), (*iter)->GetCCBodyPositionY());
				std::ostringstream oss;
				oss << "+" << energy;
				flyingText->startAnim(oss.str());
				_hud->setEnergy(energy);
			}
			(*iter)->getParent()->removeChild((*iter));
			delete (*iter);
			iter = _bulbs.erase(iter);
		}
		else if ((*iter)->getDynamicFlag())
		{
			if ((*iter)->getBulbGravityType() == e_TYPE_TWO_FLOATING)
			{
				(*iter)->updateMass();
			}
			(*iter)->GetBody()->SetType(b2_dynamicBody);
			(*iter)->setDynamicFlag(false);
			iter++;
		}
		else
		{
			(*iter)->OnUpdate(dt);
			iter++;
		}
	}

	int remainingCount = 0;
	remainingCount += bulbsLeft(e_GreenBulb);

	if (remainingCount == 0)
	{
		//remove touch update
		_pauseControl = true;
	}
}

bool Game::noDynamicBulbs()
{
	for (auto iter = _bulbs.begin(); iter != _bulbs.end(); iter++)
	{
		if ((*iter)->GetBody()->GetType() == b2_dynamicBody)
		{
			return false;
		}
	}
	return true;
}

int Game::bulbsLeft(ENUM_BULB_TYPE e_type)
{
	int count = 0;
	for (auto iter = _bulbs.begin(); iter != _bulbs.end(); iter++)
	{
		if ((*iter)->getBulbType() == e_type)
		{
			count++;
		}
	}
	return count;
}

void Game::checkEndGameCondition()
{
	if (
		_players.size() == 0
			|| (_isTimerMode && (_hud->getTimeLeft() <= 0 || _hud->getHitsLeft() <= 0))
			|| (!_isTimerMode && _hud->getHitsLeft() <= 0)
			)
	{
		if (bulbsLeft(e_GreenBulb) > 0)
		{
			_levelStatus = e_FAIL;
		}
		else if (bulbsLeft(e_GreenBulb) == 0)
		{
			_levelStatus = e_WIN;
		}
		else
		{
			CCLOG(" Double Bug !!!");
		}
		//remove touch update
		_pauseControl = true;
	}
}

void Game::draw(cocos2d::Renderer* renderer, const cocos2d::Mat4 &transform, uint32_t flags)
{
	//    _customCmd.init(_globalZOrder);
	//    _customCmd.func = CC_CALLBACK_0(Game::onDraw, this, transform, flags);
	//    renderer->addCommand(&_customCmd);
#if (BOX2D_DEBUG_DRAW)
	ExtLayer::draw(renderer, transform, flags);
#endif
}

void Game::onDraw(const cocos2d::Mat4 &transform, uint32_t flags)
{
	//    cocos2d::Director* director = cocos2d::Director::getInstance();
	//    director->pushMatrix(cocos2d::MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
	//    director->loadMatrix(cocos2d::MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW, transform);
	//    
	//    //add your primitive drawing code here
	//    cocos2d::DrawPrimitives::drawLine(Vec2(0, 0), Vec2(100, 100));
}
