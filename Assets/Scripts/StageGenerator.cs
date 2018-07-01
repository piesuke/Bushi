using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageGenerator : MonoBehaviour
{

	public GameObject[] stages;
	//GameObject nextStage;
	Transform nextEndPos;
	float spawnDistance = 30;
	float distanceBetweenStages ;
	float randomHeight;
	public GameObject[] enemies;
	public GameObject[] Koban;
	public GameObject BigEnemy;
	GameObject player;
	bool isGenerating = false;
	float timer = 1;
	public GameObject EnemyNinja;
	float ranbomGenerate;
	float randomHeightNinja;
	// Use this for initialization
	void Start ()
	{
//		最初にステージ一個作る
		GameObject stageClone = Instantiate (stages [0], this.transform.position + new Vector3 (spawnDistance, -4.5f, 0), Quaternion.identity) as GameObject;
		stageClone.name = "stagekun";
//		EndPosを探させる
		nextEndPos = stageClone.transform.Find ("EndPos");
	}


	// Update is called once per frame
	void Update ()
	{
		if (this.transform.position.x + spawnDistance> nextEndPos.position.x) {
			GenerateStage ();
			InstantiateEnemy ();
			InstantiateKoban ();
			InstantiateEnemyNinja ();
		}



			
		
		
			
				
		
		/*if (isGenerating == false) {
			timer += Time.deltaTime * 100;
		}
		
		if (timer > 100000) {
			Debug.Log ("aaaaaaaa");
			isGenerating = true;
		}
			if (isGenerating == true) {
				
				isGenerating = false;
				timer = 0;
			}*/


		}
	


//	ステージ生成
	void GenerateStage ()
	{
//		ステージ間のながさ
//		distanceBetweenStages = Random.Range (15, 17);
//		ステージ間の高さ
		randomHeight = Random.Range (0, 2);
//		ポジションを決めます
		Vector3 instantiatePosition = nextEndPos.transform.position + new Vector3 (0, 0, 0);
//		生成します
		GameObject stageClone = Instantiate (stages [Random.Range (0, stages.Length)], instantiatePosition, Quaternion.identity) as GameObject;
		stageClone.name = "unko";
//		次のEndPosを定義
		nextEndPos = stageClone.transform.Find ("EndPos");
	}

	void InstantiateEnemy ()
	{
		
		Instantiate (enemies [Random.Range (0, enemies.Length)], nextEndPos.transform.position + new Vector3 (-1, 0.2f, 0), Quaternion.identity);

	}

	void InstantiateKoban ()
	{
		Instantiate (Koban [Random.Range (0, Koban.Length)], nextEndPos.transform.position + new Vector3 (11.5f, 5.5f, 0), Quaternion.identity);
	}



	void InstantiateEnemyNinja(){
		ranbomGenerate = Random.Range (5, 29);
		randomHeightNinja = Random.Range (5, 30);
		Instantiate (EnemyNinja, this.transform.position + new Vector3( ranbomGenerate, randomHeightNinja, 0), Quaternion.identity);
	}
	
}
		
		
	
		


