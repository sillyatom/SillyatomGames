using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Login : MonoBehaviour
{
    public Button signInBtn;
    public Button signOffBtn;

    public void Init()
    {
        MultiPlayerController.Instance.UpdateConfig();
        StartCoroutine(StartSigning());
        signInBtn.enabled = false;
        signOffBtn.enabled = false;
    }

    IEnumerator StartSigning()
    {
        yield return new WaitForSeconds(3.0f);

        SignIn();

        signInBtn.onClick.AddListener(SignIn);
        signOffBtn.onClick.AddListener(SignOff);
    }

    private void activeSignInBtn()
    {
        signInBtn.enabled = true;
        signOffBtn.enabled = false;
    }

    private void activeSignOffBtn()
    {
        signInBtn.enabled = false;
        signOffBtn.enabled = true;

        MoveToNextScene();
    }

    private void SignIn()
    {
        MultiPlayerController.Instance.AuthenticatePlayer(AuthCallback);
    }

    private void SignOff()
    {
        MultiPlayerController.Instance.SignOff();   
    }

    public void MoveToNextScene()
    {
        GetComponent<SceneMonoBehaviour>().MoveToScene(TagConstants.TAG_GAME_SELECTION_SCREEN);
    }

    private void AuthCallback(bool success)
    {
        MultiPlayerController.Instance.DebugMessage("[ Login ] AuthCallback " + success);
        if (success)
        {
            activeSignOffBtn();
        }
        else
        {
            activeSignInBtn();
        }
    }
}
