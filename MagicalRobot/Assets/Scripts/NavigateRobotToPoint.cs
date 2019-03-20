using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavigateRobotToPoint : MonoBehaviour {

    public GameObject GoToLoc;
    public GameObject LaserEnd;
    public GameObject RobotWorld;

    private bool NavEnabled = false;

	// Use this for initialization
	void Start ()
    {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
        Debug.Log(NavEnabled);
        if (NavEnabled) //if enabled, GoToLoc should follow the position of the laser end.
        {
            Debug.Log("is life happy?");
            GoToLoc.transform.position = LaserEnd.transform.position;
            //Vector3 newLoc = LaserEnd.transform.position; //position of the end laser
            //GoToLoc.transform.position = new Vector3(newLoc.x, RobotWorld.transform.position.y, newLoc.z); //keep ball on ground
        }
	}

    public void setEnabled(bool e)
    {
        NavEnabled = e;
        Debug.Log("Hello thao you're in my debug statement");
        Debug.Log(NavEnabled);
        if (enabled) //when this is enabled, we should reenable the laser and the GoToLoc
        {
            GoToLoc.SetActive(true);
            LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(true);
        }
        else //Otherwise, turn them both off.
        {
            GoToLoc.SetActive(false);
            LaserEnd.transform.parent.transform.parent.transform.parent.gameObject.SetActive(false);
        }
    }
}
