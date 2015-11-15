# include "Constants.h"

int GameVariables::levelNum = 1;
int GameVariables::AVAILABLE_PICKS = 4;
int GameVariables::selectedWorld = 1;
int GameVariables::MAX_WORLD = 5;
int GameVariables::LEVELS_PER_WORLD = 10;

//generic
const std::string GameEvent::NextRound = "NextRound";
const std::string GameEvent::GameEventType = "GameEventType";

const std::string GameEvent::CreateGreenBulb = "CreateGreenBulb";
const std::string GameEvent::CreateRedBulb = "CreateRedBulb";

const std::string GameEvent::CollidesRedBulb = "CollidesRedBulb";
const std::string GameEvent::ReduceHitsLeft = "ReduceHitsLeft";

const std::string GameEvent::CreateMeteorShower = "CreateMetoerShower";
const std::string GameEvent::PauseControl = "PauseControl";
const std::string GameEvent::AddExtraHit = "AddExtraHit";
const std::string GameEvent::CreateCannonShot = "CreateCannonShot";
const std::string GameEvent::AddParticles = "AddParticles";
const std::string GameEvent::UpdatePurchasedEnergy = "UpdatePurchasedEnergy";
const std::string GameEvent::Game_Center_Login_Completed = "GameCenterLoginCompleted";

const std::string GameEvent::InApp_Product_Request_Initiated = "InApp_Product_Request_Initiated";
const std::string GameEvent::InApp_Product_Request_Completed = "InApp_Product_Request_Completed";
const std::string GameEvent::InApp_Product_Request_Succeeded = "InApp_Product_Request_Succeeded";
const std::string GameEvent::InApp_Product_Request_Failed = "InApp_Product_Request_Failed";

const std::string GameEvent::InApp_Purchase_Completed = "InAppPurchaseCompleted";
const std::string GameEvent::InApp_Purchase_Failed = "InAppPurchaseFailed";
const std::string GameEvent::InApp_Purchase_Initiated = "InAppPurchaseInitiated";
const std::string GameEvent::InApp_Purchase_Succeeded = "InAppPurchaseSucceeded";

const std::string GameEvent::InApp_Purchase_Restore_Completed = "InAppPurchaseRestoreCompleted";
const std::string GameEvent::InApp_Purchase_Restore_Failed = "InAppPurchaseRestoreFailed";
const std::string GameEvent::InApp_Purchase_Restore_Initiated = "InAppPurchaseRestoreInitiated";
const std::string GameEvent::InApp_Purchase_Restore_Succeeded = "InAppPurchaseRestoreSucceeded";

//UI
const std::string ClickEvent::CLICK = "BTN_CLICK";


#if (CC_TARGET_PLATFORM != CC_PLATFORM_WP8)
	//--------------------------------------------------------------------------------------
	const std::string SOUND_ASSETS::INTRO_ANIM = "audio/introAnim.mp3";
	const std::string SOUND_ASSETS::LEVEL_SELECTION = "audio/levelSelection.mp3";
	const std::string SOUND_ASSETS::BG_1 = "audio/bg1.mp3";
	const std::string SOUND_ASSETS::BG_2 = "audio/bg2.mp3";
	const std::string SOUND_ASSETS::BG_3 = "audio/bg3.mp3";
	const std::string SOUND_ASSETS::BG_4 = "audio/bg4.mp3";

	//--------------------------------------------------------------------------------------
	const std::string SOUND_ASSETS::EFFECT_MENU_SCREEN_ENGINE = "audio/space_craft_engine.mp3";
	const std::string SOUND_ASSETS::EFFECT_STAR_DUST_SHOWER = "audio/star_dust_shower.mp3";
	const std::string SOUND_ASSETS::EFFECT_TIMER_BLAST = "audio/timer_blast.mp3";
	const std::string SOUND_ASSETS::EFFECT_STAR_BLAST = "audio/star_blast.mp3";
	const std::string SOUND_ASSETS::EFFECT_POPUP_OPEN_CLOSE = "audio/popup_open_close.mp3";
	const std::string SOUND_ASSETS::EFFECT_BTN_CLICK = "audio/click.mp3";
	const std::string SOUND_ASSETS::EFFECT_PLAYER_MOVEMENT = "audio/player_movement.mp3";
#else
	//--------------------------------------------------------------------------------------
	const std::string SOUND_ASSETS::INTRO_ANIM = "audio_wav/introAnim.wav";
	const std::string SOUND_ASSETS::LEVEL_SELECTION = "audio_wav/introAnim.wav";
	const std::string SOUND_ASSETS::BG_1 = "audio_wav/bg1.wav";
	const std::string SOUND_ASSETS::BG_2 = "audio_wav/bg2.wav";
	const std::string SOUND_ASSETS::BG_3 = "audio_wav/bg3.wav";
	const std::string SOUND_ASSETS::BG_4 = "audio_wav/bg4.wav";

	//--------------------------------------------------------------------------------------
	const std::string SOUND_ASSETS::EFFECT_MENU_SCREEN_ENGINE = "audio_wav/space_craft_engine.wav";
	const std::string SOUND_ASSETS::EFFECT_STAR_DUST_SHOWER = "audio_wav/star_dust_shower.wav";
	const std::string SOUND_ASSETS::EFFECT_TIMER_BLAST = "audio_wav/timer_blast.wav";
	const std::string SOUND_ASSETS::EFFECT_STAR_BLAST = "audio_wav/star_blast.wav";
	const std::string SOUND_ASSETS::EFFECT_POPUP_OPEN_CLOSE = "audio_wav/popup_open_close.wav";
	const std::string SOUND_ASSETS::EFFECT_BTN_CLICK = "audio_wav/click.wav";
	const std::string SOUND_ASSETS::EFFECT_PLAYER_MOVEMENT = "audio_wav/player_movement.wav";
#endif