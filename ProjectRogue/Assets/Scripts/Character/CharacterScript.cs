using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class CharacterScript : MonoBehaviour
{
    int _input;

    const int MOVE_UP = 0;
    const int MOVE_DOWN = 1;
    const int MOVE_LEFT = 2;
    const int MOVE_RIGHT = 3;

    const float MOVE_VELOCITY = 15f;

    Rigidbody _body;

    MonoBehaviour _fireScript;
    MonoBehaviour _laserScript;
    MonoBehaviour _missileScript;
    MonoBehaviour _trajectoryScript;

    // Use this for initialization
    void Start()
    {
        _input = 0;

        _body = gameObject.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            _input |= 1 << MOVE_UP;
        }
        else if (Input.GetKeyDown(KeyCode.S))
        {
            _input |= 1 << MOVE_DOWN;
        }
        else if (Input.GetKeyDown(KeyCode.A))
        {
            _input |= 1 << MOVE_LEFT;
        }
        else if (Input.GetKeyDown(KeyCode.D))
        {
            _input |= 1 << MOVE_RIGHT;
        }

        if (Input.GetKeyUp(KeyCode.W))
        {
            _input ^= 1 << MOVE_UP;
        }
        else if (Input.GetKeyUp(KeyCode.S))
        {
            _input ^= 1 << MOVE_DOWN;
        }
        if (Input.GetKeyUp(KeyCode.A))
        {
            _input ^= 1 << MOVE_LEFT;
        }
        else if (Input.GetKeyUp(KeyCode.D))
        {
            _input ^= 1 << MOVE_RIGHT;
        }

        if (((_input >> MOVE_RIGHT) & 1) == 1)
        {
            _body.transform.Translate(Vector3.right * Time.deltaTime * MOVE_VELOCITY, Space.World);
        }
        else if (((_input >> MOVE_LEFT) & 1) == 1)
        {
            _body.transform.Translate(Vector3.left * Time.deltaTime * MOVE_VELOCITY, Space.World);
        }
        if (((_input >> MOVE_UP) & 1) == 1)
        {
            _body.transform.Translate(Vector3.forward * Time.deltaTime * MOVE_VELOCITY, Space.World);
        }
        else if (((_input >> MOVE_DOWN) & 1) == 1)
        {
            _body.transform.Translate(Vector3.back * Time.deltaTime * MOVE_VELOCITY, Space.World);
        }

        if (_input == 0)
        {
            _body.velocity = new Vector3(0.0f, _body.velocity.y, 0);
        }
    }
}
