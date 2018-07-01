using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class RankSceneManager : MonoBehaviour {
	HighScore currentHighScore;
	public GameObject[] top = new GameObject[5];
	public GameObject[] nei = new GameObject[5];
	// Use this for initialization
	void Start () {
		for( int i = 0; i < 5; ++i ) {
			top[i] = GameObject.Find ("Top" + i);
			nei[i] = GameObject.Find ("Neighbor" + i);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
