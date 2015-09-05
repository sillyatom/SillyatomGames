using UnityEngine;
using System.Collections;

public class EnemyScript : MonoBehaviour
{
    Rigidbody _body;

    void Start()
    {
        _body = gameObject.GetComponent<Rigidbody>();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == TagConsts.BULLET)
        {
            _body.velocity = collision.relativeVelocity;
            Invoke("OnCollide", 0.2f);
        }
    }

    void OnCollide()
    {
        CancelInvoke();

        GameObject splash = (GameObject)Instantiate(Resources.Load("prefabs/splash"));
        Vector3 splashPos = _body.transform.position;
        splashPos.y = 0.1f;
        splash.transform.position = splashPos;
    }
}
