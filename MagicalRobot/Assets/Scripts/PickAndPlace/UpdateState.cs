using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateState : MonoBehaviour {
    public PickAndPlaceState pps;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
    {
        transform.parent.transform.LookAt(this.transform.parent.parent, Vector3.up);
        //transform.LookAt(this.transform.parent.parent, Vector3.up);
        this.GetComponent<TextMesh>().text = pps.GetState();
	}
}
