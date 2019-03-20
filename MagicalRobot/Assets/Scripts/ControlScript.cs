using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class ControlScriptP : MonoBehaviour
{
    public GameObject robot;
    public GameObject menu;
    private MLInputController _controller;
    private const float _rotationSpeed = 30.0f;
    private const float _distance = 2.0f;
    private const float _moveSpeed = 1.2f;
    private bool _calibrating = true;
    private bool _menu = false;
    private bool _rotating = false;
    public GameObject LaserEnd;
    private float prevX = 0;
    private float prevY = 0;
    private DateTime lastMenuTimeChange;
    private DateTime lastTriggerTimeChange;
    private float menuSelectTime = 0.5f; //this is the rate at which item menu can be selected with the touchpad (i.e: how fast you can change menu selection)
    private float triggerTime = 1f; //this is the rate at which the trigger can be used to select things.

    //Hitting home tap will go between calibration and not calibrating
    //When calibrating, bumper rotates the robot.
    //When not calibrating, bumper brings up/puts away menu.
    //When not calibrating, bumper brings up/puts away menu.
    void Awake()
    {
        MLInput.Start();
        MLInput.OnControllerButtonDown += OnButtonDown;
        MLInput.OnControllerButtonUp += OnButtonUp;
        _controller = MLInput.GetController(MLInput.Hand.Left);
        lastMenuTimeChange = DateTime.Now;
        lastTriggerTimeChange = DateTime.Now;
    }

    void OnDestroy()
    {
        MLInput.OnControllerButtonDown -= OnButtonDown;
        MLInput.OnControllerButtonUp -= OnButtonUp;
        MLInput.Stop();
    }

    void Update()
    {
        if (_calibrating) //Robot calibration is on. Move RobotWorld to Laser Pointer end
        {
            //We assume that the parent of the robot gameobject is RobotWorld, so we can just directly access it.
            robot.transform.position = LaserEnd.transform.position;

            //two lines below make robot always face human
            //robot.transform.eulerAngles = new Vector3(0f, robot.transform.eulerAngles.y, 0f);

        if (_rotating)
            {
                robot.transform.Rotate(Vector3.up, +_rotationSpeed * Time.deltaTime);
            }
        }

        CheckControl();
    }

    void CheckControl()
    {
        if (_controller.TriggerValue > 0.2f)
        {
            if (Math.Abs(lastTriggerTimeChange.Subtract(DateTime.Now).TotalSeconds) > triggerTime)
            {
                //Debug.Log("heyo");
                if (_menu) //just pulled triggerr and menu is open, a menu option is selected
                {
                    _menu = menu.GetComponent<MenuScript>().triggerPulledMenu(); //triggerPulledMenu will take the trigger input and do the correct action. If after this trigger the menu is still open, it returns true. Otherwise, if menu should be closed, it returns false. TriggerPulledMenu will turn off the menu for you, this just needs to update _menu
                }
                lastTriggerTimeChange = DateTime.Now;
            }
        }

        if (_controller.Touch1PosAndForce.z > 0.0 && _menu)
        {
            Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

            if (curTouch.magnitude >= 0.4)
            {
                float signAng = Vector2.SignedAngle(curTouch, new Vector2(prevX, prevY));
                //Debug.Log(signAng);

                prevX = curTouch.x;
                prevY = curTouch.y;

                //Debug.Log(Math.Abs(lastMenuTimeChange.Subtract(DateTime.Now).TotalSeconds));
                if (Math.Abs(lastMenuTimeChange.Subtract(DateTime.Now).TotalSeconds) > menuSelectTime)
                {
                    if (signAng > 0)
                    {
                        menu.GetComponent<MenuScript>().incrementCurSelect();
                    }

                    else if (signAng < 0)
                    {
                        menu.GetComponent<MenuScript>().decrementCurSelect();
                    }
                    lastMenuTimeChange = DateTime.Now;
                }

            }
        }
    }

    void OnButtonDown(byte controller_id, MLInputControllerButton button)
    {

    }

    void OnButtonUp(byte controller_id, MLInputControllerButton button)
    {
        if (button == MLInputControllerButton.HomeTap)
        {
            if (_calibrating) //if calibrating
            {
                //robot.SetActive(false);
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(false);
                _calibrating = false;
            }
            else //home button tapped, not calibrating
            {
                //robot.SetActive(true);
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(true);
                _calibrating = true;

                menu.GetComponent<MenuScript>().TurnOffMenu();
                _menu = false; //set _menu to deactive when calibrating
            }
        }

        if (button == MLInputControllerButton.Bumper)
        {
            if (_calibrating) //Calibrating and bumper, start rotating
            {
                if (_rotating)
                {
                    _rotating = false;
                }
                else
                {
                    _rotating = true;
                }
            }

            else //not calibrating, bumper tapped
            {
                if (_menu) //turn off menu
                {
                    //menu.gameObject.SetActive(false);
                    menu.GetComponent<MenuScript>().TurnOffMenu();
                    _menu = false;
                }
                else // turn on menu
                {
                    //menu.gameObject.SetActive(true);
                    menu.GetComponent<MenuScript>().TurnOnMenu();
                    _menu = true;
                }

            }
        }


    }

}