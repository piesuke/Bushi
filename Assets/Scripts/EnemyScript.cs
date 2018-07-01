using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour
{
	public GameObject arrow;
	GameObject player;
	float attackInterval = 2.5f;
	float timer;
	bool isAttacking = false;
	public GameObject EnemyAttackSound;
	public GameObject EnemyAttackSound2;
	// Use this for initialization
	void Start ()
	{
		player = GameObject.Find ("Player");
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (this.transform.position.x - player.transform.position.x < 36.5f&& isAttacking == false) {
			isAttacking = true;
			//Debug.Log ("true!!");
		}
		if (this.transform.position.x - player.transform.position.x < -3 && isAttacking == true) {
			isAttacking = false;
		}
		if (isAttacking == true) {
			timer += Time.deltaTime*1.5f;

			if (timer > attackInterval) {
				//攻撃をする
				//Debug.Log ("や発車");
				Instantiate (arrow, this.transform.position, this.transform.rotation);
				timer = 0;
				Instantiate (EnemyAttackSound);
				Instantiate (EnemyAttackSound2);
			}
		
		}

	}
}
