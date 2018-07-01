using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyTriggerScript : MonoBehaviour
{
	public Rigidbody rigidbody;
	public GameObject player;
	// Use this for initialization
	void Start ()
	{
		rigidbody = this.gameObject.GetComponent<Rigidbody> ();
		rigidbody.velocity = new Vector3 (-25, 3, 0);
		player = GameObject.Find ("Player");
	}
	
	// Update is called once per frame
	void Update ()
	{
		//PlayerScript playerScript =GetComponent<PlayerScript> ();

	}

	void OnTriggerEnter (Collider col)
	{
		if (col.gameObject.name == "Player") {
			Destroy (this.gameObject);
			//Destroy (col.gameObject);
			//PlayerScript.currentHP -= 20;
			//Debug.Log ("attaataaaaaa");
		}
	}
}
