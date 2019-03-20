using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuScript : MonoBehaviour {

    private int curMenu = 0; //which menu is selected
    private int curSelect = 0; //which item is selected in curMenu
    private List<GameObject> menus = new List<GameObject>();
    private List<GameObject> menuItems = new List<GameObject>();

    // Use this for initialization
    void Start ()
    {
        foreach (Transform child in transform)
        {
            if (child.parent == transform)
            {
                menus.Add(child.gameObject);
            }
        }

        updateMenuItems();
        highlight(curSelect);
    }

    void updateMenuItems()
    {
        menuItems = new List<GameObject>();
        foreach (Transform child in menus[curMenu].transform)
        {
            if (child.parent == menus[curMenu].transform)
            {
                menuItems.Add(child.gameObject);
            }
        }
    }
	
	// Update is called once per frame
	void Update ()
    {
        transform.LookAt(this.transform.parent, Vector3.up);
    }

    public bool triggerPulledMenu() //gets called when the trigger is pulled and the menu is up. Returns true if menus are still up, otherwise returns false (i.e: Trigger Action)
    {
        string tag = menuItems[curSelect].transform.tag;
        string name = menuItems[curSelect].transform.name;
        if (tag == "TriggerAction") // This item selection does not lead to another menu. We should Turn off the menu, and call the appriopiate action, and return false since menu will be turn off
        {

            if (name == "NavigateRobotToPoint")
            {
                //menuItems[curSelect].GetComponent<NavigateRobotToPoint>().setEnabled(true);
                GameObject.Find("NavigateRobotToPointScript").GetComponent<NavigateRobotToPoint>().setEnabled(true);
                Debug.Log("hi eric it's going okay now youd da best");
            }


            TurnOffMenu();
            return false;
        }
        else // tag ==TriggerMenu
        {
            return true;
        }
    }

    public void TurnOnMenu()
    {
        curMenu = 0;
        curSelect = 0;

        menus[curMenu].SetActive(true);
        highlight(curSelect);
    }

    public void TurnOffMenu()
    {
        dehighlight(curSelect);
        menus[curMenu].SetActive(false);
    }

    public void dehighlight(int menuItem)
    {
        Vector3 curPos = menuItems[menuItem].transform.localPosition;
        menuItems[menuItem].transform.localPosition = new Vector3(curPos.x, 0f, curPos.z);
    }

    public void highlight(int menuItem)
    {
        Vector3 curPos = menuItems[menuItem].transform.localPosition;
        menuItems[menuItem].transform.localPosition = new Vector3(curPos.x, 0.2f, curPos.z);
    }

    public void incrementCurSelect()
    {
        dehighlight(curSelect);
        if (curSelect < menus[curMenu].transform.childCount - 1)
        {
            curSelect += 1;
        }
        else
        {
            curSelect = 0;
        }
        updateMenuItems();
        highlight(curSelect);

    }

    public void decrementCurSelect()
    {
        dehighlight(curSelect);
        curSelect -= 1;
        if (curSelect < 0)
        {
            curSelect = menus[curMenu].transform.childCount - 1;
        }
        updateMenuItems();
        highlight(curSelect);
    }
}
