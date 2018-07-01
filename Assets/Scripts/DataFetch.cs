using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;

public class DataFetch : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
		//スコアが10より大きいプレイヤーデータを取得する
		FetchScoreList (200);	

	}

	private void FetchScoreList (int higherThan)
	{
//		複数のNCMBObjectを取得するクエリを作成	
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("PlayerData");
		//条件設定
		query.WhereGreaterThan ("Score", higherThan);
		query.FindAsync ((List<NCMBObject>objList, NCMBException e) => {
			if (e != null) {
							
			} else {
				foreach (NCMBObject obj in objList) {
					Debug.Log (
						"PlayerName:" + obj ["PlayerName"] +
						",Score:" + obj ["Score"]
			
					);
				}
			}

		});
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
}
