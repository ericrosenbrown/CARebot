using RosSharp;
using RosSharp.RosBridgeClient;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.MagicLeap;

public class ControlScriptPickAndPlace : MonoBehaviour
{
    public GameObject robot;
    public GameObject menu;
    public GameObject PickPlaceState;
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
    private GameObject SetItemGO;
    private GameObject SetGraspGO;
    private GameObject SetPickGO;
    private GameObject SetPlaceGO;
    private GameObject SetPlaceLocGO;
    private GameObject SetParentGO;
    public GameObject GroundedItems;
    public GameObject EECopyModel;
    public GameObject SetPoseCopyModel;
    public PoseStampedSetTransPublisher goalPublisher; //this is for the BASE
    public PoseStampedSetTransGraspPublisher goalGraspPublisher; //this is for the GRASPER
    public GameObject UnityRobotLeftHand;
    public PoseLeftHandSubscriber ROSRobotLeftHand;
    private bool flood = true;

    //Hitting home tap will go between calibration and not calibrating
    //When calibrating, bumper rotates the robot.
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

    IEnumerator cleanRobot(Transform child)
    {
        Transform GoToPickLoc = child.transform.Find("PICK_LOC");
        goalPublisher.setTransform(GoToPickLoc);
        goalPublisher.UpdateMessage();

        //Debug.Log("(CONTROL) GO TO PICK LOC UNITY POS AND ROTATION");
        //Debug.Log(child.transform.Find("PICK_LOC").transform.localPosition);
        //Debug.Log(child.transform.Find("PICK_LOC").transform.localRotation.eulerAngles);

        Debug.Log("waiting 10 seconds");
        yield return new WaitForSeconds(10);

        Debug.Log(" 10 seconds complete");
        Transform GoToGraspLoc = GameObject.Find("GRASP_POSE_PICK").transform;
        goalGraspPublisher.setTransform(GoToGraspLoc);
        goalGraspPublisher.UpdateMessage();

        Debug.Log("waiting 10 seconds");
        yield return new WaitForSeconds(10);

        Transform GoToPlaceLoc = child.transform.Find("PLACE_LOC");
        goalPublisher.setTransform(GoToPlaceLoc);
        goalPublisher.UpdateMessage();

        yield return new WaitForSeconds(10);

        Debug.Log(" 10 seconds complete");
        Transform GoToGraspPlaceLoc = GameObject.Find("GRASP_POSE_PLACE").transform;
        goalGraspPublisher.setTransform(GoToGraspPlaceLoc);
        goalGraspPublisher.UpdateMessage();
    }

    void Update()
    {
        try
        {
            //Debug.Log("(CONTROL) MOVO UNITY POS AND ROTATION");
            //Debug.Log(SetGraspGO.transform.localPosition);
            //Debug.Log(SetGraspGO.transform.localRotation);
            //Debug.Log(SetGraspGO.transform.localRotation.eulerAngles);
        }
        catch
        {

        }
        string curState = PickPlaceState.GetComponent<PickAndPlaceState>().GetState();
        if (curState == "CALIBRATE") //Robot calibration is on. Move RobotWorld to Laser Pointer end
        {
            //robot.transform.position = LaserEnd.transform.position;

            if (_controller.TriggerValue > 0.2f) //if trigger pulled
            {
                robot.transform.Rotate(Vector3.up, +_rotationSpeed * Time.deltaTime);
                //robot.transform.position = LaserEnd.transform.position;
            }

            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {
                    float signAng = Vector2.SignedAngle(new Vector2(0, 1), curTouch);

                    if (Mathf.Abs(signAng) <= 45)
                    {
                        //Debug.Log("UP!");
                        robot.transform.Translate(Vector3.left * Time.deltaTime*2);
                    }
                    else if (45 <= signAng && signAng <= 135)
                    {
                        //Debug.Log("Left!");
                        robot.transform.Translate(-1 * Vector3.forward * Time.deltaTime*2);
                    }
                    else if (-45 >= signAng && signAng >= -135)
                    {
                        //Debug.Log("Right");
                        robot.transform.Translate(Vector3.forward * Time.deltaTime*2);
                    }
                    else if (Mathf.Abs(signAng) >= 135)
                    {
                        //Debug.Log("DOWN!");
                        robot.transform.Translate(Vector3.right * Time.deltaTime*2);
                    }
                    else
                    {
                        Debug.Log("ERROR CALCULATING ANGLE INPUT, SHOULD NOT SEE THIS MESSAGE");
                    }

                }
            }
        }

        if (curState == "STABLE")
        {
            if (_controller.TriggerValue > 0.2f) //if trigger pulled, clean up shit
            {
                //int counter = 0;
                foreach (Transform child in GroundedItems.transform) //loop through each item
                {
                    if (child.parent == GroundedItems.transform) //for a particular item
                    {
                        //Transform GoToPickLoc = child.transform.Find("PICK_LOC");
                        //goalPublisher.setTransform(GoToPickLoc);
                        //goalPublisher.UpdateMessage();

                        //More stuff below
                        //Transform GoToGraspLoc = child.transform.Find("GRASP_POSE");

                        //Debug.Log("The true quaternion is about (0,0,0,1). In unity, that quaternion should be:");
                        //Quaternion qt = new Quaternion(0, 0, 0, 1);
                        //Debug.Log(qt.Ros2Unity());
                        //Debug.Log("The euler angles of that are");
                        //Debug.Log(qt.Ros2Unity().eulerAngles);
                        //Debug.Log("(NEW) Unity Rotation (local and nonlocal)");
                        //Debug.Log(GoToGraspLoc.rotation);
                        //Debug.Log(GoToGraspLoc.localRotation);
                        //Debug.Log("(NEW) ROS Rotation (local and nonlocal)");
                        //Debug.Log(GoToGraspLoc.rotation.Unity2Ros());
                        //Debug.Log(GoToGraspLoc.localRotation.Unity2Ros()); //USE THIS LOCAL POSITIOPN FOR SENDING THE TRANSFORM POSITION!!

                        if (flood)
                        {
                            flood = false;
                            StartCoroutine(cleanRobot(child));
                            
                        }

                        //foreach (Transform grandchild in child.transform)
                        //{
                        //    if (grandchild.parent == child.transform) //going through top level parts of item. Should be "PICK_ITEM", "PICK_LOC"; "PLACE_ITEM"; "PLACE_LOC"; (GRASP_POSE under *_ITEM)
                        //    {
                        //        if(grandchild.name == "PICK_LOC");

                        //    }


                        //}

                        //counter += 1;
                    }
                }
               // Debug.Log(counter);
            }
        }

        if (curState == "SELECT_ITEM_MESH") //select item mesh is on
        {
            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {

                    float signAng = Vector2.SignedAngle(curTouch, new Vector2(prevX, prevY));

                    prevX = curTouch.x;
                    prevY = curTouch.y;

                    if (Math.Abs(lastMenuTimeChange.Subtract(DateTime.Now).TotalSeconds) > menuSelectTime)
                    {
                        if (signAng > 0)
                        {
                            //Debug.Log("HERE BOY");
                            //triggered, to the right
                            menu.GetComponent<MenuScriptPickAndPlace>().incrementCurSelect();
                        }

                        else if (signAng < 0)
                        {
                            //triggered, to the left
                            menu.GetComponent<MenuScriptPickAndPlace>().decrementCurSelect();
                        }
                        lastMenuTimeChange = DateTime.Now;
                    }

                }
            }
        }

        if (curState == "SELECT_ITEM_POSE")
        {
            if (_controller.TriggerValue > 0.2f) //if trigger pulled
            {
                SetItemGO.transform.position = LaserEnd.transform.position;
            }

            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {
                    float signAng = Vector2.SignedAngle(new Vector2(0, 1), curTouch);

                    if (Mathf.Abs(signAng) <= 45)
                    {
                        //Debug.Log("UP!");
                        SetItemGO.transform.Translate(Vector3.left * Time.deltaTime);
                    }
                    else if (45 <= signAng && signAng <= 135)
                    {
                        //Debug.Log("Left!");
                        SetItemGO.transform.Translate(-Vector3.forward * Time.deltaTime);
                    }
                    else if (-45 >= signAng && signAng >= -135)
                    {
                        //Debug.Log("Right");
                        SetItemGO.transform.Translate(Vector3.forward * Time.deltaTime);
                    }
                    else if (Mathf.Abs(signAng) >= 135)
                    {
                        //Debug.Log("DOWN!");
                        SetItemGO.transform.Translate(Vector3.right * Time.deltaTime);
                    }
                    else
                    {
                        Debug.Log("ERROR CALCULATING ANGLE INPUT, SHOULD NOT SEE THIS MESSAGE");
                    }

                }
            }
        }

        if (curState == "SELECT_GRASP_POSE")
        {
            if (_controller.TriggerValue > 0.2f) //if trigger pulled
            {
                SetGraspGO.transform.position = LaserEnd.transform.position;
            }

            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {
                    float signAng = Vector2.SignedAngle(new Vector2(0, 1), curTouch);

                    if (Mathf.Abs(signAng) <= 45)
                    {
                        //Debug.Log("UP!");
                        SetGraspGO.transform.Rotate(Vector3.left * Time.deltaTime*15);
                    }
                    else if (45 <= signAng && signAng <= 135)
                    {
                        //Debug.Log("Left!");
                        SetGraspGO.transform.Rotate( Vector3.down * Time.deltaTime*15);
                    }
                    else if (-45 >= signAng && signAng >= -135)
                    {
                        //Debug.Log("Right");
                        SetGraspGO.transform.Rotate(Vector3.back * Time.deltaTime*15);
                    }
                    else if (Mathf.Abs(signAng) >= 135)
                    {
                       // Debug.Log("DOWN!");
                        SetGraspGO.transform.Rotate(Vector3.down * Time.deltaTime*15);
                    }
                    else
                    {
                        Debug.Log("ERROR CALCULATING ANGLE INPUT, SHOULD NOT SEE THIS MESSAGE");
                    }

                }
            }
        }

        if (curState == "SELECT_PICK_POSE")
        {
            if (_controller.TriggerValue > 0.2f) //if trigger pulled
            {
                Vector3 RobotWorldPos = robot.transform.position;
                Vector3 LaserEndPos = LaserEnd.transform.position;
                SetPickGO.transform.position = new Vector3(LaserEndPos.x, RobotWorldPos.y, LaserEndPos.z);
            }

            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {
                    float signAng = Vector2.SignedAngle(new Vector2(0, 1), curTouch);

                    if (Mathf.Abs(signAng) <= 45)
                    {
                        //Debug.Log("UP!");
                        //SetPickGO.transform.Translate(Vector3.left * Time.deltaTime);
                        //SetPickGO.transform.Rotate(Vector3.left * Time.deltaTime);
                    }
                    else if (45 <= signAng && signAng <= 135)
                    {
                        //Debug.Log("Left!");
                        //SetPickGO.transform.Translate(-1 * Vector3.forward * Time.deltaTime);
                        SetPickGO.transform.Rotate(-1*Vector3.up * Time.deltaTime * 30);
                    }
                    else if (-45 >= signAng && signAng >= -135)
                    {
                        //Debug.Log("Right");
                        //SetPickGO.transform.Translate(Vector3.forward * Time.deltaTime);
                        SetPickGO.transform.Rotate(Vector3.up * Time.deltaTime * 30);
                    }
                    else if (Mathf.Abs(signAng) >= 135)
                    {
                        //Debug.Log("DOWN!");
                        //SetPickGO.transform.Translate(Vector3.right * Time.deltaTime);
                        //SetPickGO.transform.Rotate(Vector3.right * Time.deltaTime);
                    }
                    else
                    {
                        Debug.Log("ERROR CALCULATING ANGLE INPUT, SHOULD NOT SEE THIS MESSAGE");
                    }

                }
            }
        }

        if (curState == "SELECT_PLACE_POSE")
        {
            if (_controller.TriggerValue > 0.2f) //if trigger pulled
            {
                SetPlaceGO.transform.position = LaserEnd.transform.position;
            }

            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {
                    float signAng = Vector2.SignedAngle(new Vector2(0, 1), curTouch);

                    if (Mathf.Abs(signAng) <= 45)
                    {
                        //Debug.Log("UP!");
                        SetPlaceGO.transform.Translate(Vector3.left * Time.deltaTime);
                    }
                    else if (45 <= signAng && signAng <= 135)
                    {
                        //Debug.Log("Left!");
                        SetPlaceGO.transform.Translate(-1 * Vector3.forward * Time.deltaTime);
                    }
                    else if (-45 >= signAng && signAng >= -135)
                    {
                        //Debug.Log("Right");
                        SetPlaceGO.transform.Translate(Vector3.forward * Time.deltaTime);
                    }
                    else if (Mathf.Abs(signAng) >= 135)
                    {
                        //Debug.Log("DOWN!");
                        SetPlaceGO.transform.Translate(Vector3.right * Time.deltaTime);
                    }
                    else
                    {
                        Debug.Log("ERROR CALCULATING ANGLE INPUT, SHOULD NOT SEE THIS MESSAGE");
                    }

                }
            }
        }
        
         if (curState == "SELECT_PLACE_LOC_POSE")
        {
            if (_controller.TriggerValue > 0.2f) //if trigger pulled
            {
                Vector3 RobotWorldPos = robot.transform.position;
                Vector3 LaserEndPos = LaserEnd.transform.position;
                SetPlaceLocGO.transform.position = new Vector3(LaserEndPos.x, RobotWorldPos.y, LaserEndPos.z);
            }

            if (_controller.Touch1PosAndForce.z > 0.0) //touching the touch pad
            {
                Vector2 curTouch = new Vector2(_controller.Touch1PosAndForce.x, _controller.Touch1PosAndForce.y);

                if (curTouch.magnitude >= 0.4) //enough pressure
                {
                    float signAng = Vector2.SignedAngle(new Vector2(0, 1), curTouch);

                    if (Mathf.Abs(signAng) <= 45)
                    {
                        //Debug.Log("UP!");
                        //SetPickGO.transform.Translate(Vector3.left * Time.deltaTime);
                        //SetPickGO.transform.Rotate(Vector3.left * Time.deltaTime);
                    }
                    else if (45 <= signAng && signAng <= 135)
                    {
                        //Debug.Log("Left!");
                        //SetPickGO.transform.Translate(-1 * Vector3.forward * Time.deltaTime);
                        SetPlaceLocGO.transform.transform.Rotate(-1 * Vector3.up * Time.deltaTime * 30);
                    }
                    else if (-45 >= signAng && signAng >= -135)
                    {
                        //Debug.Log("Right");
                        //SetPickGO.transform.Translate(Vector3.forward * Time.deltaTime);
                        SetPlaceLocGO.transform.transform.Rotate(Vector3.up * Time.deltaTime * 30);
                    }
                    else if (Mathf.Abs(signAng) >= 135)
                    {
                        //Debug.Log("DOWN!");
                        //SetPickGO.transform.Translate(Vector3.right * Time.deltaTime);
                        //SetPickGO.transform.Rotate(Vector3.right * Time.deltaTime);
                    }
                    else
                    {
                        Debug.Log("ERROR CALCULATING ANGLE INPUT, SHOULD NOT SEE THIS MESSAGE");
                    }

                }
            }
        }

    }

    void OnButtonDown(byte controller_id, MLInputControllerButton button)
    {

    }

    void OnButtonUp(byte controller_id, MLInputControllerButton button)
    {
        //Debug.Log("On button up!");
        string curState = PickPlaceState.GetComponent<PickAndPlaceState>().GetState();

        if (button == MLInputControllerButton.HomeTap) //Home Button tapped
        {
            if (curState == "CALIBRATE") //Robot calibration is on. We should switch to stable mode, and turn off the laser
            {
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(false);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("STABLE");
            }

            if (curState == "STABLE") //Robot is in stable mode. Should switchg to calibrate mode, and turn on laser
            {
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(true);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("CALIBRATE");
            }

            if (curState == "SELECT_ITEM_MESH") //in menu screen and home button, should global reset to stable.
            {
                menu.SetActive(false);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("STABLE");
            }
            if (curState == "SELECT_ITEM_POSE" || curState == "SELECT_GRASP_POSE" || curState == "SELECT_PICK_POSE" || curState == "SELECT_PLACE_POSE" || curState == "SELECT_PLACE_LOC_POSE")
            {
                Destroy(SetParentGO);
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(false);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("STABLE");
            }

        }

        if (button == MLInputControllerButton.Bumper) //bumper tapped
        {
            if (curState == "CALIBRATE")
            {
                robot.transform.position = LaserEnd.transform.position;
            }
            if (curState == "STABLE") //Robot is in stable mode. Should switchg to SelectItemMesh mode, turn on menu
            {
                menu.SetActive(true);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("SELECT_ITEM_MESH");
            }
            if (curState == "SELECT_ITEM_MESH") //select item mesh is on. Switch to SetItemPose, deactivate menu, get grounded item model, set it to child of Grounded Items, reactive laser.
            {
                menu.SetActive(false);
                SetItemGO = Instantiate(menu.GetComponent<MenuScriptPickAndPlace>().getSelectedGO());
                SetParentGO = new GameObject(SetItemGO.name);
                SetParentGO.transform.SetParent(GroundedItems.transform);
                SetItemGO.transform.SetParent(SetParentGO.transform);
              
                SetItemGO.name = "PICK_ITEM";

                SetParentGO.transform.localRotation = Quaternion.identity;
                SetParentGO.transform.localPosition = Vector3.zero;

                SetItemGO.transform.localRotation = Quaternion.identity;
                SetItemGO.transform.localPosition = Vector3.zero;

                SetParentGO.transform.localPosition = new Vector3(0, 0, 0);
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(true);
                LaserEnd.transform.localPosition = new Vector3(0, 0.1f, 0);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("SELECT_ITEM_POSE");
            }
            if (curState == "SELECT_ITEM_POSE") //select item pose is on. Switch to End Effector Pose. Add End Effector to scene. Make it child of SetItemGO.
            {
                //Debug.Log("Select grasp pose has changed");
                SetGraspGO = Instantiate(EECopyModel);
                Debug.Log("enter color");
                Material colormat = SetItemGO.GetComponent<MeshRenderer>().material;
                Component[] partsToColor = SetGraspGO.GetComponentsInChildren<MeshRenderer>();

                foreach (MeshRenderer colorpart in partsToColor)
                {
                    Debug.Log("COLORING!");
                    colorpart.material = colormat;
                }

                //GameObject wtf = Instantiate(UnityRobotLeftHand, robot.transform.GetChild(0)).gameObject;
                //GameObject wtf = Instantiate(robot).gameObject;
                //GameObject wtff = wtf.Find("left_ee_link");
                //wtf.name = "wtf";
                SetGraspGO.name = "GRASP_POSE_PICK";
                //GameObject wtff = wtf.transform.GetChild(0).GetChild(1).GetChild(2).GetChild(2).GetChild(2).GetChild(5).GetChild(2).GetChild(2).GetChild(2).GetChild(2).GetChild(2).GetChild(2).GetChild(2).GetChild(2).GetChild(2).gameObject;
                //Debug.Log
                //Quaternion globpos = wtff.transform.rotation;
                // Debug.Log("Glob1");
                //Debug.Log(wtff.transform.rotation);
                //Quaternion wtffpos = wtff.transform.localRotation;

                //wtff.transform.SetParent(SetGraspGO.transform, true);
                //Debug.Log("Glob2");
                //wtff.transform.rotation = globpos;
                //Debug.Log(wtff.transform.rotation);

                //wtff.transform.localRotation = wtffpos;


                //SetGraspGO.transform.SetParent(SetItemGO.transform); //REDO THIS LATER
                SetGraspGO.transform.SetParent(SetParentGO.transform);
                
                SetGraspGO.transform.localRotation = Quaternion.identity;
                SetGraspGO.transform.localPosition = Vector3.zero;

                //SetGraspGO.transform.SetParent(SetParentGO.transform);

                //Debug.Log("Scoop scoop");
                //Debug.Log(ROSRobotLeftHand.getRotation());
                //Debug.Log(ROSRobotLeftHand.getRotation().eulerAngles);
                //SetGraspGO.transform.localRotation = ROSRobotLeftHand.getRotation(); //apply rotation to the temp object
                //Debug.Log("(ERIC) UNITY quaterion to be sent - temp");
                //Debug.Log(SetGraspGO.transform.localRotation);
                //Debug.Log("Rotaiton values of unity hand are below");
                //Debug.Log(UnityRobotLeftHand.transform.rotation);
                //SetGraspGO.transform.GetChild(0).rotation = ROSRobotLeftHand.getRotation();
                //SetGraspGO.transform.GetChild(0).rotation = new Quaternion(0.0f, 0.0f, 0.0f, 1.0f);
                //Debug.Log("UnityRobotLeftHandGlobal");
                //Debug.Log(SetGraspGO.transform.GetChild(0).localRotation.eulerAngles);
                //Debug.Log("UnityVirtualLeftHandGlobal");
                //Debug.Log(ROSRobotLeftHand.getRotation());
                //SetGraspGO.transform.GetChild(0).localRotation = Quaternion.Inverse(UnityRobotLeftHand.transform.rotation) * robot.transform.rotation;
                //wtf.transform.rotation = Quaternion.Inverse(UnityRobotLeftHand.transform.rotation)*robot.transform.rotation;


                //Debug.Log("Instantied a grasper!");

                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("SELECT_GRASP_POSE");

            }
            if (curState == "SELECT_GRASP_POSE") //select item pose is on. Switch to End Effector Pose. Add End Effector to scene. Make it child of SetItemGO.
            {
                SetItemGO.transform.SetParent(SetGraspGO.transform);//already placed the gripper, make it a child of object
                SetPickGO = Instantiate(SetPoseCopyModel);

                Material colormat = SetItemGO.GetComponent<MeshRenderer>().material;
                Component[] partsToColor = SetPickGO.GetComponentsInChildren<MeshRenderer>();

                foreach (MeshRenderer colorpart in partsToColor)
                {
                    Debug.Log("COLORING!");
                    colorpart.material = colormat;
                }

                SetPickGO.name = "PICK_LOC";
                LaserEnd.transform.localPosition = new Vector3(0, 1.5f, 0);
                //Debug.Log("Instantied a go to!");
                SetPickGO.transform.SetParent(SetParentGO.transform);
                SetPickGO.transform.localRotation = Quaternion.identity;
                SetPickGO.transform.localPosition = Vector3.zero;
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("SELECT_PICK_POSE");

            }

            if (curState == "SELECT_PICK_POSE")
            {
                //SetPlaceGO = Instantiate(menu.GetComponent<MenuScriptPickAndPlace>().getSelectedGO());
                //eric you touched this line below last
                //SetPlaceGO = Instantiate(SetGraspGO);
                SetPlaceGO = Instantiate(EECopyModel);
                SetPlaceGO.name = "GRASP_POSE_PLACE";
                LaserEnd.transform.localPosition = new Vector3(0, 0.1f, 0);
                SetPlaceGO.transform.SetParent(SetParentGO.transform);
                SetPlaceGO.transform.localRotation = Quaternion.identity;
                SetPlaceGO.transform.localPosition = Vector3.zero;
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("SELECT_PLACE_POSE");
            }

            
            if (curState == "SELECT_PLACE_POSE") //go into mode to place final base
            {
                SetPlaceLocGO = Instantiate(SetPoseCopyModel);

                Material colormat = SetItemGO.GetComponent<MeshRenderer>().material;
                Component[] partsToColor = SetPlaceLocGO.GetComponentsInChildren<MeshRenderer>();

                foreach (MeshRenderer colorpart in partsToColor)
                {
                    Debug.Log("COLORING!");
                    colorpart.material = colormat;
                }

                LaserEnd.transform.localPosition = new Vector3(0, 1.5f, 0);

                SetPlaceLocGO.name = "PLACE_LOC";
                Debug.Log("Instantied a go to!");
                SetPlaceLocGO.transform.SetParent(SetParentGO.transform);
                SetPlaceLocGO.transform.localRotation = Quaternion.identity;
                SetPlaceLocGO.transform.localPosition = Vector3.zero;
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("SELECT_PLACE_LOC_POSE");
            }

            if (curState == "SELECT_PLACE_LOC_POSE")
            {
                //Correc the GRASP POSE
                SetGraspGO.transform.SetParent(SetParentGO.transform);
                //SetPlaceGO.transform.GetChild(0).name = "GRASP_POSE_PLACE";
                //SetPlaceGO.transform.GetChild(0).SetParent(SetParentGO.transform);
                LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(false);
                PickPlaceState.GetComponent<PickAndPlaceState>().SetState("STABLE");
            }

        }


    }

}