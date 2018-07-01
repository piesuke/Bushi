using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HorseEnemyScrit : MonoBehaviour
{
	public float speed = 5;
	GameObject player;
	// Use this for initialization
	void Start ()
	{
		player = GameObject.Find ("Player");
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (this.transform.position.x -player.transform.position.x<15) {
			this.transform.position -= new Vector3 (Time.deltaTime * speed, 0, 0);
		}
	}

}
