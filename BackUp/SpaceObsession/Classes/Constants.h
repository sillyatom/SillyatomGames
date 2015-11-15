# ifndef _CONSTANTS_H_
# define _CONSTANTS_H_
#pragma once
#include<string>
#include "cocos2d.h"

USING_NS_CC;

//---------------------------------------------------------------------------------------------------
//Fonts
static const std::string fontFileName = "fonts/American Typewriter.ttf";

//---------------------------------------------------------------------------------------------------
//DEBUG
#define  COCOS2D_DEBUG 1

//Network
#define NETWORK_ASSET_LOAD 0

//Accelerometer
# define ENABLED_ACCELEROMETER 0

//Scrolling
#define ENABLED_SCROLLING 0

//Shaders
#define ENABLE_SHADERS 1

//Particles
#define ENABLE_PARTICLES 1

//Physics Debug
#define BOX2D_DEBUG_DRAW 0

//Powerup panel
#define ENABLE_POWERUP_PANEL 0

//Zooming
#define ENABLE_ZOOMING 1

//free meteor showers
#define ENABLE_FIRE_SHOWERS 0

//--------------LEVEL CONSTANTS----------------------------------------------------------------------
static float NUM_LEVELS = 30;
static const float RECT_WIDTH = 20.0f;
static const float RECT_HEIGHT = 10.0f;

//--------------BALL CONSTANTS----------------------------------------------------------------------

static const float BALL_THROWER_DIAMETER = 54.0f;
static const float BALL_THROWER_WIDTH = 10.0f;
static const float BALL_THROWER_HEIGHT = 15.0f;
static const float BALL_RADIUS = 5.0f;
static const float CANNON_SHOT_RADIUS = 4.0f;

//--------------BULB CONSTANTS----------------------------------------------------------------------

static const int STONE_BULB_PROTECTION_COUNT = 2;
static const int COSMIC_BULB_PROTECTION_COUNT = 3;

//--------------------------------------------------------------------------------------------------

static const float PLAYER_MAX_LIGHT_INTENSITY = 3.0f;
static const float PLAYER_MAX_SHOWER_LIGHT_INTENSITY = 3.0f;
static const Vec3 PLAYER_LIGHT_COLOR(1.0, 1.0, 1.0);

static int MAX_LIGHTS = 1;

//---------------------------------------------------------------------------------------------------
//Physics Constants

static const float GRAVITY = -10.f;
static float PTM_RATIO = 30.f;

#define PLAYER_CATEGORY 0x0001
#define BOX_CATEGORY 0x0002
#define BULB_CATEGORY 0x0004
#define CANNON_SHOTS_CATEGORY 0x0008
#define MOVING_PLATFORM_CATEGORY 0x0016
#define WALL_CATEGORY 0x0032
#define GRAVITY_BAR_CATEGORY 0x0064
#define METEOR_SHOWER_CATEGORY 0x0128
#define PLAYER_HELPER_CATEGORY 0x0256

#define MASK_PLAYER (PLAYER_CATEGORY | CANNON_SHOTS_CATEGORY | MOVING_PLATFORM_CATEGORY | WALL_CATEGORY)
#define MASK_BOX (PLAYER_CATEGORY)
#define MASK_BULB (GRAVITY_BAR_CATEGORY | PLAYER_CATEGORY | BULB_CATEGORY | CANNON_SHOTS_CATEGORY | WALL_CATEGORY)
#define MASK_CANNON_SHOTS (CANNON_SHOTS_CATEGORY | BULB_CATEGORY | PLAYER_CATEGORY)
#define MASK_MOVING_PLATFORM (PLAYER_CATEGORY | MOVING_PLATFORM_CATEGORY)
#define MASK_WALL (PLAYER_CATEGORY | BULB_CATEGORY)
#define MASK_GRAVITY_BAR (BULB_CATEGORY)
#define MASK_METEOR_SHOWER (METEOR_SHOWER_CATEGORY)
#define MASK_PLAYER_HELPER (PLAYER_HELPER_CATEGORY)

//---------------------------------------------------------------------------------------------------
//Device Constants
static const float REF_GAME_WIDTH = 480.f;
static const float REF_GAME_HEIGHT = 320.f;

//---------------------------------------------------------------------------------------------------
//Game Constants
static const std::string BG_FILE_NAME_PREFIX = "slide";
static const int MAX_BG_COUNT = 25;
static const int PLAYER_Z_INDEX = 100000;

static const int BALL_VELOCITY = 7.5f;
static const float BALL_RESTITUTION = 0.8f;
static const float BULB_RESTITUTION = 0.8f;

static const int BALL_MAX_HIT_COUNT = 3;

static const cocos2d::Point COLLECTED_BULB_PANEL_POS(110.0, 287.0);

//---------------------------------------------------------------------------------------------------
//Game Events
class GameEvent : public EventCustom
{
public:
    //generic
    static const std::string GameEventType;
    static const std::string NextRound;
    
	static const std::string CreateMeteorShower;
    static const std::string CollidesRedBulb;
    
    static const std::string ReduceHitsLeft;
    static const std::string AddExtraHit;
    
    static const std::string PauseControl;
    
    static const std::string CreateCannonShot;
    
    static const std::string CreateGreenBulb;
    static const std::string CreateRedBulb;
    
    static const std::string AddParticles;
    
    static const std::string UpdatePurchasedEnergy;
    
    static const std::string Game_Center_Login_Completed;
    
    static const std::string InApp_Product_Request_Initiated;
    static const std::string InApp_Product_Request_Completed;
    static const std::string InApp_Product_Request_Succeeded;
    static const std::string InApp_Product_Request_Failed;
    
    static const std::string InApp_Purchase_Initiated;
    static const std::string InApp_Purchase_Completed;
    static const std::string InApp_Purchase_Succeeded;
    static const std::string InApp_Purchase_Failed;
    
    static const std::string InApp_Purchase_Restore_Initiated;
    static const std::string InApp_Purchase_Restore_Completed;
    static const std::string InApp_Purchase_Restore_Succeeded;
    static const std::string InApp_Purchase_Restore_Failed;
    
    GameEvent(const std::string &eventName = "GameEventType"):EventCustom(eventName)
    {
        x = y = radius = 0.0;
        angle = 0.0;
        particleType = 0;
        portalStatus = "";
        fallCount = 1;
        availableCount = 1;
        identifier = "";
    }
    std::string eventName;
    
    //for in app purchase
    std::string identifier;
    
    //used by multipliers & gravity
    //to create a ball
    std::string selectedball;
    
    //to add paint balls
    //also used in multipliers
    float x;
    float y;
    float radius;
    float angle;
    
    //used in multipliers
    cocos2d::Point velocity;
    
    //for balls left count
    int count;
    
    //energy
    double energy;
    
    //for multiplier ball
    int availableCount;
    
    //for gravity ball
    int fallCount;
    
    //potral status
    std::string portalStatus;
    
    //used by particles
    int particleType;
    Color4F startColor;
    float destX;
    float destY;
};

//Click Events
class ClickEvent : public EventCustom
{
public:
    static const std::string CLICK;
    
    ClickEvent(const std::string &eventName):EventCustom(eventName)
    { }
    int tag;
    bool isActive;
    std::string nodeName;
};

//---------------------------------------------------------------------------------------------------
//Game Variables
class GameVariables
{
public:
	static int levelNum;
	static int selectedWorld;
    static int MAX_WORLD;
    static int LEVELS_PER_WORLD;
    
    //to do update this as per available slots and count
    static int AVAILABLE_PICKS;
    static const int MAX_POWERUPS = 10;    
    static const int MAX_PICKS = 4;
    static const int MAX_POWERUP_PER_LEVEL = 4;
};

#endif

enum ENUM_PARTICLES
{
    e_REDUCTION_COUNT_PARTICLES = 0,
    e_COSMIC_BLAST_PARTICLES = 1,
    e_DARK_PARTICLES = 2,
    e_COLLISION_PARTICLES = 3,
    e_EXPLOSION_PARTICLES = 4
};

class SOUND_ASSETS
{
public:
	static const std::string INTRO_ANIM;
	static const std::string LEVEL_SELECTION;
	static const std::string BG_1;
	static const std::string BG_2;
	static const std::string BG_3;
	static const std::string BG_4;

	//-------------------------------------------------
	static const std::string EFFECT_MENU_SCREEN_ENGINE;
	static const std::string EFFECT_STAR_DUST_SHOWER;
	static const std::string EFFECT_STAR_BLAST;
	static const std::string EFFECT_TIMER_BLAST;
	static const std::string EFFECT_POPUP_OPEN_CLOSE;
	static const std::string EFFECT_BTN_CLICK;
	static const std::string EFFECT_PLAYER_MOVEMENT;
};
