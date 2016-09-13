struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 78 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//7. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//11. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//12. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//13. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//14. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//19. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//23. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//24. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//25. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//26. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//27. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//28. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//29. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//30. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//31. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//32. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//33. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//34. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//35. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//36. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//37. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//38. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//39. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//40. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//41. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//42. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//43. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//44. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//45. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//46. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//47. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//48. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//49. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//52. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//53. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//54. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//55. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//56. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//57. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//58. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//59. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//60. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//61. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//62. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//63. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//64. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//65. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//66. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//67. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//68. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//69. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//70. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//71. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//72. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//73. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//74. UnityAdsSettings
	void RegisterClass_UnityAdsSettings();
	RegisterClass_UnityAdsSettings();

	//75. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//76. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//77. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
