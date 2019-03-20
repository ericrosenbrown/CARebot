using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickAndPlaceState : MonoBehaviour {

    // Use this for initialization
    private string PickPlaceState = "CALIBRATE";
	void Start ()
    {
        PickPlaceState = "CALIBRATE";
	}
	
    public string GetState()
    {
        return PickPlaceState;
    }

    public void SetState(string state)
    {
        PickPlaceState = state;
    }

}
