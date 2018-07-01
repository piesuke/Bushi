using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;

public class TestScript : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
		Fetch ();
	}


	void Create ()
	{
		Debug.Log ("create");
		NCMBObject obj = new NCMBObject ("HighScore");
		obj.Add ("score", 2345);
		obj.Add ("name", "qwert");
		obj.SaveAsync ((NCMBException e) => {      
			if (e != null) {
				//エラー処理

				Debug.Log ("失敗");


			} else {
				//成功時の処理
				Debug.Log ("成功");
				Debug.Log (obj.ObjectId);
			}                   
		});
	}

	void Read ()
	{
		Debug.Log ("read");
		NCMBObject obj = new NCMBObject ("HighScore");
		obj.ObjectId = "CJ3FoEZuSPAZasL4";
		obj.FetchAsync ((NCMBException e) => {      
			if (e != null) {
				//エラー処理

				Debug.Log ("失敗");


			} else {
				//成功時の処理
				Debug.Log ("成功");
				Debug.Log (obj ["name"]);
				Debug.Log (obj ["score"]);
			}                   
		});
	}

	void UpdateNCMB ()
	{
		Debug.Log ("update");
		NCMBObject obj = new NCMBObject ("HighScore");
		obj.ObjectId = "YIZsWQ96ODkWqy21";
		obj ["score"] = 10000000;
		obj.SaveAsync ((NCMBException e) => {      
			if (e != null) {
				//エラー処理

				Debug.Log ("失敗");


			} else {
				//成功時の処理
				Debug.Log ("成功");
			}                   
		});
	}

	void Delete ()
	{
		Debug.Log ("delete");
		NCMBObject obj = new NCMBObject ("HighScore");
		obj.ObjectId = "YIZsWQ96ODkWqy21";
		obj.DeleteAsync ((NCMBException e) => {      
			if (e != null) {
				//エラー処理

				Debug.Log ("失敗");


			} else {
				//成功時の処理
				Debug.Log ("成功");
			}                   
		});
	}

	void Fetch ()
	{
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("HighScore");
		//ここでqueryに色々条件を与える

		query.WhereGreaterThan ("score", 5000);
		query.OrderByDescending ("score");
		query.FindAsync ((List<NCMBObject> objList, NCMBException e) => {
			if (e != null) {
				//検索失敗時の処理


			} else {
				//検索成功時の処理
				// 取得したレコードをHighScoreクラスとして保存
				foreach (var obj in objList) {
					int s = System.Convert.ToInt32 (obj ["score"]);
					string n = System.Convert.ToString (obj ["name"]);
					Debug.Log (n + ":" + s);
				}
			}
		});
	}
}
