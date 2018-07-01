using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using NCMB;

public class StartSceneManager : MonoBehaviour
{
	public GameObject StartSound;
	GameObject StartPlayer;
	float speed = 10.0f;
	Animator animator;
	bool PlayerWalk = false;
	public InputField inputField;
	public GameObject playernameInput;

	DataManager dataManager;

		
		

	void Start ()
	{
		dataManager = GameObject.Find ("DataManager").GetComponent<DataManager> ();
		if (!PlayerPrefs.HasKey ("name")) {
			playernameInput.SetActive (true);
		}



		dataManager.FetchTopRankingData ();
		dataManager.fetchNeighbors();

	}

	void Update ()
	{
		if (PlayerWalk) {
			StartPlayer.transform.position += new Vector3 (speed * Time.deltaTime, 0, 0);
		
		}
	}

	public void HowToButton ()
	{
		SceneManager.LoadScene ("HowToScene");
	}

	void LoadScene ()
	{
		SceneManager.LoadScene ("Main");
	}

	public void StartButton ()
	{
		PlayerWalk = true;

		Invoke ("LoadScene", 2);
		StartPlayer = GameObject.Find ("StartPlayer");

		animator = StartPlayer.GetComponent <Animator> ();
		PlayerPrefs.SetInt ("score", 0);
//		 PlayerPrefs.GetInt ("KobanScore");
		animator.SetBool ("Walk", true);
		Instantiate (StartSound, this.transform.position, Quaternion.identity);




	}


	public void OkButton ()
	{
		PlayerPrefs.SetString ("name", inputField.text);
		Debug.Log (inputField.text);
		playernameInput.SetActive (false);

	}


}




