#include "ExtLayer.h"
#include "PhysicsEnvironment.h"
#include "Utility.h"

cocos2d::Scene * ExtLayer::createScene()
{
	auto scene = Scene::create();
	auto layer = ExtLayer::create();
	scene->addChild(layer);
	return scene;
}

ExtLayer::~ExtLayer()
{
    if (!_isCleaned)
    {
        destroyAll();
    }
}

void ExtLayer::destroyAll()
{
     if (!_isCleaned)
    {
        _isCleaned = true;
        
        if (_label)
        {
            _label->getParent()->removeChild(_label);
            _label = NULL;
        }
        if (renderTexture)
        {
            renderTexture->getParent()->removeChild(renderTexture);
            renderTexture = nullptr;
        }
        if (rendTexSprite)
        {
            rendTexSprite->getParent()->removeChild(rendTexSprite);
            rendTexSprite = nullptr;
        }
        
        if (_world)
        {
            _world = nullptr;
        }
        
        if (_physxEnv)
        {
            _physxEnv->getParent()->removeChild(_physxEnv);
            CC_SAFE_DELETE(_physxEnv);
        }
        
        if (_shaderExcludeContainer)
        {
            _shaderExcludeContainer->getParent()->removeChild(_shaderExcludeContainer);
            _shaderExcludeContainer = nullptr;
        }
        
        if (_otherExcludeContainer)
        {
            _otherExcludeContainer->getParent()->removeChild(_otherExcludeContainer);
            _otherExcludeContainer = nullptr;
        }
        
		if (_gameContainer)
		{
			_gameContainer->getParent()->removeChild(_gameContainer);
			_gameContainer = nullptr;
		}

		stopAllActions();
        _eventDispatcher->removeAllEventListeners();
        unscheduleAllSelectors();
    }
}

bool ExtLayer::init()
{
    if (!LayerColor::initWithColor(Color4B(125, 125, 125, 125)))
	{
		return false;
	}
    
	_label = nullptr;
	_isCleaned = false;

    _gameStartCountDown = 4;
    
	renderTexture = nullptr;
	rendTexSprite = nullptr;

	_physxEnv = nullptr;

    visibleSize = Director::getInstance()->getOpenGLView()->getVisibleSize();
	visibleOrigin = Director::getInstance()->getOpenGLView()->getVisibleOrigin();
    
    return true;
}

void ExtLayer::addLoadingScreen()
{
	if (_otherExcludeContainer)
	{
		_loadingScreen = LoadingScreen::create();
		_otherExcludeContainer->addChild(_loadingScreen);
		onAddLoadingScreen();
	}
	else
	{
		assert(_otherExcludeContainer);
	}
}

void ExtLayer::removeLoadingScreen()
{
	if (_otherExcludeContainer)
	{
		_loadingScreen->getParent()->removeChild(_loadingScreen);
	}
    onRemoveLoadingScreen();
}

void ExtLayer::addContainer()
{
    _gameContainer = Sprite::create();
    addChild(_gameContainer);
    
    _shaderExcludeContainer = Sprite::create();
    _shaderExcludeContainer->setAnchorPoint(Vec2(0.5, 0.5));
    _shaderExcludeContainer->setContentSize(Size(visibleSize.width, visibleSize.height));
    _shaderExcludeContainer->setPositionX(visibleSize.width/2.0);
    _shaderExcludeContainer->setPositionY(visibleSize.height/2.0);
    addChild(_shaderExcludeContainer);
    
    _otherExcludeContainer = Sprite::create();
    _otherExcludeContainer->setAnchorPoint(Vec2(0.5, 0.5));
    _otherExcludeContainer->setContentSize(Size(visibleSize.width, visibleSize.height));
    _otherExcludeContainer->setPositionX(visibleSize.width/2.0);
    _otherExcludeContainer->setPositionY(visibleSize.height/2.0);
    addChild(_otherExcludeContainer);
}

void ExtLayer::addPhysics()
{
	_physxEnv = PhysicsEnvironment::create();
	_physxEnv->initPhysics();
	_physxEnv->retain();
	_world = PhysicsEnvironment::getWorld();
	_shaderExcludeContainer->addChild(_physxEnv, 1000);
    
#if (ENABLED_SCROLLING == 1)
    _scrollingBG = ScrollingLayer::create();
    _scrollingBG->setAnchorPoint(Vec2(0.5, 0.5));
    _gameContainer->addChild(_scrollingBG);
    _scrollingBG->setVisibleSize(visibleSize);
#endif
}

void ExtLayer::closeLevel()
{
    unscheduleAllSelectors();
}

void ExtLayer::addShaderProgram(GLProgram * program)
{
    renderTexture = RenderTexture::create(visibleSize.width, visibleSize.height);
	addChild(renderTexture);

	rendTexSprite = Sprite::create();
	rendTexSprite->setTexture(renderTexture->getSprite()->getTexture());
	rendTexSprite->setTextureRect(Rect(0, 0, rendTexSprite->getTexture()->getContentSize().width, rendTexSprite->getTexture()->getContentSize().height));
	rendTexSprite->setPosition(visibleOrigin.x + visibleSize.width/2.0, visibleOrigin.y + visibleSize.height/2.0);
	rendTexSprite->setFlippedY(true);
	addChild(rendTexSprite);

	rendTexSprite->setGLProgram(program);
}

void ExtLayer::closeGame()
{
    unschedule(schedule_selector(ExtLayer::gameStartTick));
    _gameStartCountDown = 4;
}
 
void ExtLayer::resetGame()
{
    _label->setVisible(true);
    _label->setString("Starts In 00:04");
}

void ExtLayer::startGameTimer()
{
    schedule(schedule_selector(ExtLayer::onStartGameTimer), 1.0f);
}

void ExtLayer::onStartGameTimer(float dt)
{
    
}

void ExtLayer::addGameStartTimer()
{
    //trigger game start timer
    if (!_label)
    {
        _label = Label::createWithTTF("Starts In 00:04",fontFileName.c_str(), Utility::getDevicePositionX(20));
        _label->setPosition(getVisibleSize().width/2, getVisibleSize().height/2 + (getVisibleSize().height * 0.3));
        _label->setColor(cocos2d::Color3B(255, 255, 255));
        _gameContainer->addChild(_label);
        _label->retain();
    }
    //PhysicsEnvironment::setPause(true);
    schedule(schedule_selector(ExtLayer::gameStartTick), 1.f, 3, 0.f);
}

void ExtLayer::onGameStartTickComplete()
{
    PhysicsEnvironment::setPause(false);
    startGameTimer();
}

void ExtLayer::gameStartTick(float dt)
{
    _gameStartCountDown--;
	char str[100] = "Starts In 00:0";
	std::ostringstream ostr;
	ostr << _gameStartCountDown;
	strcat(str, ostr.str().c_str());
	_label->setString(str);
    
	if (_gameStartCountDown == 0)
	{
		_label->setVisible(false);
        onGameStartTickComplete();
    }
}

void ExtLayer::onUpdate(float dt)
{
    
}

void ExtLayer::startUpdate()
{
	CallFunc * func = CallFunc::create(CC_CALLBACK_0(ExtLayer::callOnceBeforeUpdate, this));
	Utility::delayedCall(this, func);

	schedule(schedule_selector(ExtLayer::onUpdate));
}

void ExtLayer::draw(Renderer* renderer, const Mat4 &transform, uint32_t flags)
{
//	LayerColor::draw(renderer, transform, flags);
#if (BOX2D_DEBUG_DRAW == 1)
    if (_physxEnv)
	_physxEnv->draw(renderer, transform, flags);
#endif
}

void ExtLayer::visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags)
{
    if (ENABLE_SHADERS == 1)
    {
        if (renderTexture && rendTexSprite)
        {
            renderTexture->beginWithClear(0, 0, 0, 0);
            for (auto child : getChildren())
            {
                if (child != renderTexture && child != rendTexSprite && child != _shaderExcludeContainer && child != _otherExcludeContainer)
                {
                    child->visit(renderer, parentTransform, parentFlags);
                }
            }
            renderTexture->end();
            rendTexSprite->visit(renderer, parentTransform, parentFlags);
            _otherExcludeContainer->visit(renderer, parentTransform, parentFlags);
            _shaderExcludeContainer->visit(renderer, parentTransform, parentFlags);
            
            draw(renderer, parentTransform, parentFlags);
        }
    }
    else
    {
        LayerColor::visit(renderer, parentTransform, parentFlags);
        draw(renderer, parentTransform, parentFlags);
    }
}
