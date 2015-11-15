//
//  NewLevelSelectionScreen.cpp
//  MyCppGame
//
//  Created by Sillyatom on 17/02/15.
//
//

#include "NewLevelSelectionScreen.h"
#include "lib/Utility.h"
#include "Constants.h"
#include "lib/GameSaveData.h"
#include "lib/MenuScreen.h"
#include "particles/LevelSelectionParticle.h"
#include "lib/AudioController.h"

#if (ENABLE_SHADERS == 1)
GLProgramState * NewLevelSelectionScreen::glProgramState = nullptr;
#endif

cocos2d::Scene* NewLevelSelectionScreen::createScene()
{
    auto scene = Scene::create();
    
    auto layer = NewLevelSelectionScreen::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool NewLevelSelectionScreen::init()
{
	if (!ExtLayer::init())
	{
		return false;
	}
    _marker = nullptr;
    
	return true;
}

void NewLevelSelectionScreen::onEnter()
{
    MAX_LIGHTS = 10;
	ExtLayer::onEnter();
	addContainer();
    _otherExcludeContainer->setVisible(false);
	addLoadingScreen();
}

void NewLevelSelectionScreen::onEnterTransitionDidFinish()
{
	ExtLayer::onEnterTransitionDidFinish();
    
	AudioController::getInstance()->preloadBG(SOUND_ASSETS::LEVEL_SELECTION);

#if(ENABLE_SHADERS == 1)
    for (int row = 0; row < MAX_LIGHT_INDEX; row++)
    {
        _activeLights[row][0] = -1;
	}
#endif
    
    //add bg image
    auto _bg = Sprite::create("bg/levelselectionbg.jpg");
    addChild(_bg);
#if(BOX2D_DEBUG_DRAW == 1)
    _bg->setVisible(false);
#endif
    _bg->setAnchorPoint(Vec2(0.0, 0.0));
    float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH)/_bg->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT)/_bg->getContentSize().height);
    _bg->setScale(maxRatio);
  
	auto rainParticle = BgRainParticles::create();
	rainParticle->setEmissionRate(120.0);
	_shaderExcludeContainer->addChild(rainParticle);
	{
        _popup = LevelSelectionPopup::create();
        addChild(_popup);
        _popup->construct(std::string("ui/levelselection.csb"));
        _popup->setTarget(this);
        float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH)/_popup->getLayout()->getBoundingBox().size.width,
                                  Utility::getDevicePositionY(REF_GAME_HEIGHT)/_popup->getLayout()->getBoundingBox().size.height);
        _popup->getLayout()->setScale(maxRatio);
        
        ui::ScrollView * scroll = (ui::ScrollView*)(_popup->getBtnsHolder());
        _otherExcludeContainer->setAnchorPoint(scroll->getInnerContainer()->getAnchorPoint());
        _otherExcludeContainer->setPosition(scroll->getInnerContainer()->getPosition());
    }
#if (ENABLE_SHADERS == 1)
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
        case 1:
            fragShader = fragShader1;
            break;
        case 2:
            fragShader = fragShader2;
            break;
        case 3:
            fragShader = fragShader3;
            break;
        case 4:
            fragShader = fragShader4;
            break;
        case 5:
            fragShader = fragShader5;
            break;
        case 6:
            fragShader = fragShader6;
            break;
        case 7:
            fragShader = fragShader7;
            break;
        case 8:
            fragShader = fragShader8;
            break;
        case 9:
            fragShader = fragShader9;
            break;
        case 10:
            fragShader = fragShader10;
            break;
        case 11:
            fragShader = fragShader11;
            break;
        case 12:
            fragShader = fragShader12;
            break;
        case 13:
            fragShader = fragShader13;
            break;
        case 14:
            fragShader = fragShader14;
            break;
        case 15:
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
#endif
    //init level objects
    initLevelObjects();
    
#if (ENABLE_SHADERS == 1)
    //reset light values
    resetLights();
    
    //update lights
    updateLights();
#endif
    startUpdate();
    
    //add back btn
    {
        auto powerBtn = MenuItemImage::create("misc/powerbtn.png", "misc/powerbtn.png", "misc/powerbtn.png", CC_CALLBACK_1(NewLevelSelectionScreen::onControlCallback, this));
        powerBtn->setAnchorPoint(Vec2(0.5, 0.5));
        powerBtn->setScale(Utility::getDevicePositionY(47.0)/powerBtn->getBoundingBox().size.width, Utility::getDevicePositionY(47.0)/powerBtn->getBoundingBox().size.width);
        powerBtn->setPosition(Utility::getDevicePositionX(25.5), Utility::getDevicePositionY(REF_GAME_HEIGHT - 296.0));
        powerBtn->setTag(1000);
        _menu = Menu::create(powerBtn, NULL);
        _menu->setPosition(Vec2::ZERO);
        addChild(_menu);
        _menu->setVisible(false);
    }

    _otherExcludeContainer->setVisible(true);
    scheduleUpdate();
    
    removeLoadingScreen();
}

void NewLevelSelectionScreen::onRemoveLoadingScreen()
{
	EventListenerCustom * customListener = EventListenerCustom::create(ClickEvent::CLICK, CC_CALLBACK_1(NewLevelSelectionScreen::onLevelSelectionCallback, this));
	_eventDispatcher->addEventListenerWithSceneGraphPriority(customListener, _popup);
	AudioController::getInstance()->playBG(SOUND_ASSETS::LEVEL_SELECTION);
    _menu->setVisible(true);
}

void NewLevelSelectionScreen::onControlCallback(cocos2d::Ref *sender)
{
    switch (dynamic_cast<Node*>(sender)->getTag())
    {
        case 1000:
        {
			AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_BTN_CLICK);
			Utility::delayedCall(this, CallFunc::create(CC_CALLBACK_0(NewLevelSelectionScreen::createMainMenuScreen, this)), 1.0);
            break;
        }
        default:
            break;
    }
}

void NewLevelSelectionScreen::initLevelObjects()
{
    _unlockedLevel = GameSaveData::getInstance()->levelUnlocked + 1;

    ScrollView * itemView = (ScrollView*)_popup->getBtnsHolder();
    _innerContainer = itemView->getInnerContainer();
    _layer1 = static_cast<Widget*>(_popup->getLayout()->getChildByName("layer1"));
    _layer2 = static_cast<Widget*>(_popup->getLayout()->getChildByName("layer2"));
    Vec2 lastPos(-1.0, -1.0);
    
    for (int index = 1; index <= NUM_LEVELS; index++)
    {
        std::ostringstream oss;
        oss<<"l"<<index;
        Button * btn = static_cast<Button*>(itemView->getChildByName(oss.str()));
        if (btn == nullptr)
        {
            break;
        }
        LevelObject * obj = new LevelObject();
        obj->btn = btn;
        obj->index = index;
        obj->lightIndex = -1;
        btn->setScale(0.08);
		BlendFunc bf = { GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA };
		//draw lines
		if (index != 1 && index != NUM_LEVELS)
		{
			Vec2 currPos = btn->getPosition();
			float distance = Utility::distance(b2Vec2(currPos.x, currPos.y), b2Vec2(lastPos.x, lastPos.y));
			auto line = Sprite::create("misc/glowline.png");
            _popup->getBtnsHolder()->addChild(line, -1);
			line->setScaleX(distance/line->getContentSize().width);
			line->setScaleY(Utility::getDevicePositionY(1.5)/line->getContentSize().height);
			line->setAnchorPoint(Vec2(0.0, 0.5));
			line->setPosition(lastPos);
			float angle = atan2f((currPos.y - lastPos.y),(currPos.x - lastPos.x));
			angle = -1 * CC_RADIANS_TO_DEGREES(angle);
			line->setRotation(angle);
			line->setBlendFunc(bf);
		}
        
        std::ostringstream oLevelNum;
        oLevelNum<<index;
        auto levelNum = Label::createWithBMFont("fonts/font.fnt", oLevelNum.str());
        levelNum->setAnchorPoint(Vec2(0.5, 0.5));
        levelNum->setScale(Utility::getDevicePositionX(0.3));
        Vec2 txtPos = btn->getParent()->convertToWorldSpace(btn->getPosition());
        levelNum->setPosition(txtPos.x, txtPos.y - (btn->getBoundingBox().size.width) - (0.5 * levelNum->getBoundingBox().size.height));
        _otherExcludeContainer->addChild(levelNum);
		lastPos = btn->getPosition();
        _levelObjects.push_back(obj);
        
        if (index == _unlockedLevel)
        {
            _marker = Sprite::createWithSpriteFrameName("circle.png");
            _marker->setAnchorPoint(Vec2(0.5, 0.5));
            _marker->setScale(Utility::getDevicePositionX(40.0) / _marker->getBoundingBox().size.width);
            _marker->setPosition(txtPos.x, txtPos.y);
            _otherExcludeContainer->addChild(_marker);

            float actualScale = _marker->getScale();
            auto scaleDown = ScaleTo::create(1.0, actualScale * 0.5);
            auto scaleUp = ScaleTo::create(1.0, actualScale);
            _marker->runAction(RepeatForever::create(Sequence::createWithTwoActions(scaleDown, scaleUp)));
        }
    }
}

void NewLevelSelectionScreen::createGameScene()
{
	destroyAll();
    Director::getInstance()->replaceScene(Game::createScene());
}

void NewLevelSelectionScreen::createMainMenuScreen()
{
    destroyAll();
    Director::getInstance()->replaceScene(MenuScreen::createScene());
}

void NewLevelSelectionScreen::onLevelSelectionCallback(cocos2d::EventCustom *event)
{
    ClickEvent * pEvent = (ClickEvent*)event;
    if (event->getUserData() != _popup) return;
    
    int level = pEvent->tag;
    if ( level <= _unlockedLevel )
    {
        GameVariables::levelNum = level;
    
        CallFunc * func = CallFunc::create(CC_CALLBACK_0(NewLevelSelectionScreen::createGameScene, this));
        Utility::delayedCall(this, func);
    }
    else
    {
        _popup->setCanClick(true);
    }
}
#if(ENABLE_SHADERS == 1)
void NewLevelSelectionScreen::resetLightAtIndex(int index)
{
    //set to initial values
    std::ostringstream prefix;
    prefix<<"lights[";
    prefix<<index;
    prefix<<"]";
    
    std::ostringstream ossPos;
    ossPos<<prefix.str().c_str();
    ossPos<<".position";
    glProgramState->setUniformVec2(ossPos.str().c_str(), Vec2(0.0, 0.0));
    
    std::ostringstream ossActive;
    ossActive<<prefix.str().c_str()<<".isActive";
    glProgramState->setUniformInt(ossActive.str().c_str(), 0);
    
    std::ostringstream ossColor;
    ossColor<<prefix.str().c_str();
    ossColor<<".color";
    glProgramState->setUniformVec3(ossColor.str().c_str(), Vec3(1.0, 1.0, 1.0) * 0.0f);
}

void NewLevelSelectionScreen::removeLightIndex(int index)
{
    if (index >= 0)
    {
        resetLightAtIndex(index);
        _activeLights[index][0] = -1;
    }
}

int NewLevelSelectionScreen::chooseLightIndex()
{
    int index = -1;
    for (index = 0; index < MAX_LIGHT_INDEX; index++)
    {
        if (_activeLights[index][0] == -1)
        {
            _activeLights[index][0] = 1;
            return index;
        }
    }
    return -1;
}

void NewLevelSelectionScreen::resetLights()
{
    for (int index = 0; index < MAX_LIGHT_INDEX; index++)
    {
        removeLightIndex(index);
    }  
}

void NewLevelSelectionScreen::updateLights()
{
    for (auto levelObj : _levelObjects)
    {
        if (levelObj->lightIndex >= 0)
        {
            Button * btn = levelObj->btn;
            Vec2 btnPos = btn->getParent()->convertToWorldSpace(btn->getPosition());
            if (levelObj->index < _unlockedLevel)
            {
                updateLight(levelObj->lightIndex, btnPos, Vec3(1.0, 1.0, 0.0));
            }
            else if (levelObj->index == _unlockedLevel)
            {
                updateLight(levelObj->lightIndex, btnPos, Vec3(0.5, 1.0, 1.0));
            }
            else
            {
                updateLight(levelObj->lightIndex, btnPos, Vec3(0.15, 0.15, 0.15));
            }
        }
    }
}

void NewLevelSelectionScreen::updateLight(int index, Vec2 pos, Vec3 lightColor)
{
    if (index >= 0)
    {
        std::ostringstream prefix;
        prefix<<"lights[";
        prefix<<index;
        prefix<<"]";
        
        std::ostringstream ossColor;
        ossColor<<prefix.str().c_str();
        ossColor<<".color";
        
        std::ostringstream ossPos;
        ossPos<<prefix.str().c_str();
        ossPos<<".position";
        
        std::ostringstream ossActive;
        ossActive<<prefix.str().c_str()<<".isActive";
        
        glProgramState->setUniformInt(ossActive.str().c_str(), 1);
        
        glProgramState->setUniformVec2(ossPos.str().c_str(), pos);
        
        glProgramState->setUniformVec3(ossColor.str().c_str(), lightColor * Utility::getDevicePositionY(1.5));
    }
}
#endif
void NewLevelSelectionScreen::onUpdate(float dt)
{
    ExtLayer::onUpdate(dt);
    checkBounds();
#if(ENABLE_SHADERS == 1)
    updateLights();
#endif
}

void NewLevelSelectionScreen::checkBounds()
{
#if(ENABLE_SHADERS == 1)
    for (auto levelObj : _levelObjects)
    {
        Button * btn = levelObj->btn;
        Vec2 btnPos = btn->getParent()->convertToWorldSpace(btn->getPosition());
        if (btnPos.x < - Utility::getDevicePositionX(REF_GAME_WIDTH) * 0.25 || btnPos.x >  Utility::getDevicePositionX(REF_GAME_WIDTH) + Utility::getDevicePositionX(REF_GAME_WIDTH) * 0.25)
        {
			if (levelObj->lightIndex >= 0)
			{
				removeLightIndex(levelObj->lightIndex);
				levelObj->lightIndex = -1;
			}
        }
        if (btnPos.x >= 0 && btnPos.x <= Utility::getDevicePositionX(REF_GAME_WIDTH))
        {
            if (levelObj->lightIndex < 0)
            {
				int chosenLightIndex = chooseLightIndex();
                levelObj->lightIndex = chosenLightIndex;
            }
        }
    }
#endif
}

NewLevelSelectionScreen::~NewLevelSelectionScreen()
{
    if (!_isCleaned)
    {
        destroyAll();
    }
}

void NewLevelSelectionScreen::destroyAll()
{
    stopAllActions();
    unscheduleAllSelectors();
    unscheduleUpdate();
    
	AudioController::getInstance()->unloadAllEffects();
	if (_marker)
    {
        _marker->stopAllActions();
        _marker->getParent()->removeChild(_marker);
        _marker = nullptr;
    }
    if (_popup)
    {
        _popup->setTarget(nullptr);
        _eventDispatcher->removeEventListenersForTarget(_popup);
        _popup->getParent()->removeChild(_popup);
        _popup = nullptr;
        _eventDispatcher->removeAllEventListeners();
    }

#if(ENABLE_SHADERS == 1)
    glProgramState->release();
    glProgramState = nullptr;
#endif
    ExtLayer::destroyAll();
}

void NewLevelSelectionScreen::visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags)
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
            _menu->visit(renderer, parentTransform, parentFlags);
            
            draw(renderer, parentTransform, parentFlags);
        }
    }
    else
    {
        ExtLayer::visit(renderer, parentTransform, parentFlags);
    }
}

void NewLevelSelectionScreen::update(float dt)
{
    _layer1->setPositionX(_innerContainer->getPosition().x * _popup->getLayout()->getScale() * 0.2);
    _layer2->setPositionX(_innerContainer->getPosition().x * _popup->getLayout()->getScale() * 0.05);
    _otherExcludeContainer->setPositionX(_innerContainer->getPosition().x * _popup->getLayout()->getScale());
}