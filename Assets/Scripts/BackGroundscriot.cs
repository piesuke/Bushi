using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundscriot : MonoBehaviour
{
	public GameObject[] backgrounds;
	Transform nextEndPos;
	float spawnDistance = 70;

	// Use this for initialization
	void Start ()
	{
		GameObject backgroundClone = Instantiate (backgrounds [0], new Vector3(815,127.244f,16),  Quaternion.identity) as GameObject;
		backgroundClone.name = "aoao";
		nextEndPos = backgroundClone.transform.Find ("EndPos");

	}
	
	// Update is called once per frame
	void Update ()
	{
		if (this.transform.position.x + spawnDistance > nextEndPos.position.x) {
			Vector3 instantiatePosition = new Vector3(nextEndPos.transform.position.x+427,nextEndPos.transform.position.y,nextEndPos.transform.position.z);
			GameObject backgroundClone = Instantiate (backgrounds [0], instantiatePosition, Quaternion.identity) as GameObject;
			backgroundClone.name = "waowao";
			nextEndPos = backgroundClone.transform.Find ("EndPos");
			//Debug.Log ("uoi");
		}
	}
}

