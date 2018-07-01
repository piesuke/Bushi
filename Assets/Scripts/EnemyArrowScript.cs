using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyArrowScript : MonoBehaviour {
	 Rigidbody rigidbody;
	//public GameObject player;
	// Use this for initialization
	void Start () {
		rigidbody= this.gameObject.GetComponent<Rigidbody> ();
		rigidbody.velocity = new Vector3 (-14,4.5f, 0);
		//player = GameObject.Find ("Player");
		//Invoke ("DestroyEnemyArrow", 1.1f);
		}


	// Update is called once per frame
	void Update () {
		
	}
	void OnTriggerEnter(Collider col){
		//if (col.gameObject.name == "Player") {
			//Destroy (this.gameObject);
			//Destroy (col.gameObject);
			//SceneManager.LoadScene ("EndScene");

		if (col.gameObject.name == "Arrow") {
			Destroy (this.gameObject);

			Destroy (col.gameObject);
		}
	}
}

