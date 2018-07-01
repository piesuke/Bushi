using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using NCMB;

public class PlayerScript : MonoBehaviour
{

	public float speed = 5f;
	public float jumppower = 10;
	float timer = 1;
	float attackInterval = 0.5f;
	public GameObject arrow;
	int jumpcount;
	bool isAttacking = false;
	GameObject player;
	public int MaxHP = 100;
	public int currentHP = 100;
	public Slider HPSlider;
	public int count;
	public Text countText;
	public Text timer2Text;
	public   float timer2 = 1.0f;
	float timer3 = 0;
	public GameObject KobanSound;
	public GameObject ArrowAttackSound;
	public GameObject EnemyDamageSound;
	public GameObject CureSound;

	void Start ()
	{
		count = PlayerPrefs.GetInt ("KobanScore");
		countText.text = count.ToString ();
		timer2 = PlayerPrefs.GetInt ("score");
		player = GameObject.Find ("Player");
		this.gameObject.GetComponent<Slider> ();
		//小判カウントの実装

	}

	
	// Update is called once per frame
	void Update ()
	{


		this.transform.position += new Vector3 (speed * Time.deltaTime, 0, 0);
		timer2 += Time.deltaTime * 10;
		timer2Text.text = timer2.ToString ("f0");

		
		if (isAttacking == false) {
			timer += Time.deltaTime;
			


		}
		if (timer > attackInterval) {
			isAttacking = true;
			if (isAttacking == true)
			if (Input.GetMouseButtonDown (0) && Input.mousePosition.x > Screen.width / 2) {
				GameObject arrowClone = Instantiate (arrow, this.transform.position, this.transform.rotation) as GameObject;
				ArrowScript arrowScript = arrowClone.GetComponent<ArrowScript> ();





				Vector2 mousePos = Input.mousePosition;
				float ratioX = (mousePos.x - Screen.width / 2) / (Screen.width / 2);
				float ratioY = mousePos.y / Screen.height;
				//Debug.Log (arrowScript.maxSpeedY);
				//Debug.Log (arrowScript.minSpeedY);
				arrowScript.velocityX = arrowScript.minSpeedX + (arrowScript.maxSpeedX - arrowScript.minSpeedX) * ratioX;
				arrowScript.velocityY = arrowScript.minSpeedY + (arrowScript.maxSpeedY - arrowScript.minSpeedY) * ratioY;
				;

				isAttacking = false;
				timer = 0;
				Instantiate (ArrowAttackSound);
					


			}
		}

			


		

		//ジャンプカウント一回
		if (jumpcount < 1) {
			if (Input.GetMouseButtonDown (0) && Input.mousePosition.x < Screen.width / 2) {
				this.gameObject.GetComponent<Rigidbody> ().velocity = new Vector3 (0, jumppower, 0);
				jumpcount += 1;

			}

		
		}
		//死ぬ系
		if (player.transform.position.y <= -10.0f) {
			
			PlayerPrefs.SetInt ("score", (int)timer2);
			PlayerPrefs.SetInt ("KobanScore", (int)count);
			SceneManager.LoadScene ("EndScene");


			//体力なくなった時,
			if (currentHP < 0 || currentHP == 0) {
				PlayerPrefs.SetInt ("score", (int)timer2);
				PlayerPrefs.SetInt ("KobanScore", (int)count);
				SceneManager.LoadScene ("EndScene");


			}
		
		}
	}




	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.tag == "Enemy") {
			Destroy (col.gameObject);
			currentHP -= 10;
			HPSlider.value = currentHP;
			Instantiate (EnemyDamageSound);

		
		

		}
		if (col.gameObject.tag == "Ground") {
			jumpcount = 0;
		}
		if (col.gameObject.tag == "EnemyNinja") {
			Destroy (col.gameObject);
			currentHP -= 10;
			HPSlider.value = currentHP;
			Instantiate (EnemyDamageSound);



		}
	}




	void OnTriggerEnter (Collider col)
	{
		if (col.gameObject.tag == "EnemyArrow") {
			Destroy (col.gameObject);
			currentHP -= 20;
			HPSlider.value = currentHP;
			Instantiate (EnemyDamageSound);
		}
		if (col.gameObject.tag == "EnemyBeam") {
			Destroy (col.gameObject);
			currentHP -= 30;
			HPSlider.value = currentHP;
			Instantiate (EnemyDamageSound);
			//Debug.Log ("adadaa");
		}
		if (col.gameObject.tag == "Koban") {
			Destroy (col.gameObject);
			count += 1;
			countText.text = count.ToString ();
			Instantiate (KobanSound);
		}
		if (col.gameObject.tag == "Onigiri") {
			if (currentHP == 100) {
				Destroy (col.gameObject);
				Instantiate (CureSound);
			}
			if (currentHP < 100) {
				Destroy (col.gameObject);
				currentHP += 20;
				HPSlider.value = currentHP;
				Instantiate (CureSound);
			}
		
		}

	}
}





