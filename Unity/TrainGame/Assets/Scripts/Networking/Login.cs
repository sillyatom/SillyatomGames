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
    }

    IEnumerator StartSigning()
    {
        yield return new WaitForSeconds(2.0f);
        if (Social.localUser.authenticated)
        {
            activeSignOffBtn();
        }
        else
        {
            activeSignOffBtn();
        }

        signInBtn.onClick.AddListener(SignIn);
        signOffBtn.onClick.AddListener(SignOff);
    }

    private void activeSignInBtn()
    {
        signInBtn.gameObject.SetActive(true);
        signOffBtn.gameObject.SetActive(false);
    }

    private void activeSignOffBtn()
    {
        signInBtn.gameObject.SetActive(false);
        signOffBtn.gameObject.SetActive(true);

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
        GetComponent<SceneMonobehaviour>().MoveToScene(TagConstants.TAG_GAME_SELECTION_SCREEN);
    }

    private void AuthCallback(bool success)
    {
        Debug.Log("[ Login ] AuthCallback " + success);
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
