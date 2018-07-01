using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ArrowScript : MonoBehaviour
{

	public Rigidbody rigidbody;
	public float maxSpeedX = 25;
	public float minSpeedX = 15;
	public float maxSpeedY = -30;
	public float minSpeedY = -30;
	GameObject player;


	public float velocityX;
	public float velocityY;
	public GameObject MyDamageSound;



	void Start ()
	{
		//Debug.Log (velocityX);
		//Debug.Log (velocityY);
		rigidbody = this.gameObject.GetComponent<Rigidbody> ();
		player = GameObject.Find ("Player");
		rigidbody.velocity = new Vector3 (velocityX, velocityY, 0);
		Invoke ("DestroyArrow", 1.1f);

		//new Vector3(Input.mousePosition.x-player.transform.position.x/speed,Input.mousePosition.y-player.transform.position.y/speed,0.5f);
	}

	
	// Update is called once per frame
	void Update ()
	{
		

		

	}

	void DestroyArrow ()
	{
		Destroy (gameObject);
	}

	void OnTriggerEnter (Collider col)
	{
		if (col.gameObject.tag == "Enemy") {
			Destroy (this.gameObject);
			Destroy (col.gameObject);
			Instantiate (MyDamageSound);
			//他のスクリプトの変数を取得する
			PlayerScript playerScript = player.GetComponent<PlayerScript> ();
			playerScript.timer2 += 100;
		}
		if (col.gameObject.tag == "EnemyBeam") {
			Destroy (this.gameObject);

			Destroy (col.gameObject);
			Debug.Log ("赤かカカカカカカか");
		}
		if (col.gameObject.tag == "EnemyNinja") {
			Destroy (this.gameObject);
			Destroy (col.gameObject);
			Instantiate (MyDamageSound);
			PlayerScript playerScript = player.GetComponent<PlayerScript> ();
			playerScript.timer2 += 500;
			//playerScript += 500;
			Debug.Log ("agagagagaga");
		}


		

	}
}
