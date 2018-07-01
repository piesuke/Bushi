using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;

public class DataSave : MonoBehaviour
{
	// Use this for initialization
	void Start ()
	{

		SavePlayerData ("BBB", 2000);
	}

	public void SavePlayerData (string PlayerName, int score)
	{

		NCMBObject obj = new NCMBObject ("PlayerData");
		obj.Add ("PlayerName", PlayerName);
		obj.Add ("Score", score);
		obj.SaveAsync ((NCMBException e) => {
			if (e != null) {
				Debug.Log ("保存失敗、通信環境を確認してください");
			} else {
				Debug.Log ("保存成功！");
			}
		});
	}
}
