using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuScriptPickAndPlace : MonoBehaviour {

    private int curMenu = 0; //which menu is selected
    private int curSelect = 0; //which item is selected in curMenu
    private List<GameObject> menus = new List<GameObject>();
    private int numMeshes = 5;

    // Use this for initialization
    void OnEnable ()
    {
        
        foreach (Transform child in transform)
        {
            if (child.parent == transform)
            {
                menus.Add(child.gameObject);
            }
        }

        numMeshes = menus.Count;
        //Debug.Log("Number of stuff!");
        //Debug.Log(numMeshes);
        dehighlight(curSelect);
        curSelect = 0;
        highlight(0);
    }

    // Update is called once per frame
    void Update ()
    {
        transform.LookAt(this.transform.parent, Vector3.up);
    }

    public void dehighlight(int menuItem)
    {
        Vector3 curPos = menus[menuItem].transform.localPosition;
        menus[menuItem].transform.localPosition = new Vector3(curPos.x, 0f, curPos.z);
    }

    public void highlight(int menuItem)
    {
        //Debug.Log("Trying right here");
        //Debug.Log(0);
        Vector3 curPos = menus[menuItem].transform.localPosition;
        menus[menuItem].transform.localPosition = new Vector3(curPos.x, 0.1f, curPos.z);
    }

    public GameObject getSelectedGO()
    {
        return menus[curSelect];

    }


    public void incrementCurSelect()
    {
        dehighlight(curSelect);
        if (curSelect < numMeshes- 1)
        {
            curSelect += 1;
        }
        else
        {
            curSelect = 0;
        }
        highlight(curSelect);
    }

    public void decrementCurSelect()
    {
        dehighlight(curSelect);
        curSelect -= 1;
        if (curSelect < 0)
        {
            curSelect = numMeshes - 1;
        }
        highlight(curSelect);
    }
}
