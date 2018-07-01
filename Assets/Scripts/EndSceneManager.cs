using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine .UI;
using NCMB;
public class EndSceneManager : MonoBehaviour
{
	public Text lastScoreText;
	public Text highScoreText;
	public Text GekokuzyouText;
	int lastScore;
	int highScore;
	int KobanCount;
	public Text KobanScoreText;
	GameObject player;
	bool Isappearing = false;
	StartSceneManager startManager;
	void Start ()
	{
		SavePlayerData ();
		lastScore = PlayerPrefs.GetInt ("score");//Scoreの
		KobanCount = PlayerPrefs.GetInt ("KobanScore");
		if (PlayerPrefs.HasKey ("HighScore") == false) {//HighScoreが存在しない時
			highScore = lastScore;//lastScoreをhighScoreにして、
			PlayerPrefs.SetInt ("HighScore", lastScore);//HighScoreデータとして格納

		} else {//HighScore存在する時
			highScore = PlayerPrefs.GetInt ("HighScore");

			if (highScore < lastScore) {//直近の結果の方がhighScoreよりも高かった時
				highScore = lastScore;//highScoreにlastSccoreを代入して
				PlayerPrefs.SetInt ("HighScore", lastScore);//lastScoreの値をHighScoreとして保存
				Fetch();
			}

			highScoreText.text = highScore.ToString ();
			lastScoreText.text = lastScore.ToString ();
			KobanScoreText.text = KobanCount.ToString ();

		}
		if (lastScore < 500.0f) {
			GekokuzyouText.GetComponent<Text> ().text = ("下級武士");
			//Debug.Log ("aa");
		}
		if (500.0f < lastScore && lastScore < 1000.0f) {
			GekokuzyouText.GetComponent<Text> ().text = ("中級武士");
			//Debug.Log ("aa");
		}
		if (1000 < lastScore && lastScore < 3000) {
			GekokuzyouText.GetComponent<Text> ().text = ("上級武士");
			//Debug.Log ("aa");
		}
		if (3000 < lastScore && lastScore < 6000) {
			GekokuzyouText.GetComponent<Text> ().text = ("家老");
			//Debug.Log ("aa");
		}
		if (6000 < lastScore && lastScore < 9999) {
			GekokuzyouText.GetComponent<Text> ().text = ("筆頭家老");
			//Debug.Log ("aa");
		}
		if (10000 < lastScore && lastScore < 100000) {
			GekokuzyouText.GetComponent<Text> ().text = ("小大名");
			//Debug.Log ("aa");
		}
		if (100000 < lastScore && lastScore < 500000) {
			GekokuzyouText.GetComponent<Text> ().text = ("中大名");
			//Debug.Log ("aa");
		}

		if (500000 < lastScore && lastScore < 999999) {
			GekokuzyouText.GetComponent<Text> ().text = ("大大名");
			//Debug.Log ("aa");
		}
		if (1000000 < lastScore) {
			GekokuzyouText.GetComponent<Text> ().text = ("天下人");
			//Debug.Log ("aa");
		}
	}




	public void GameOverButton ()
	{
		SceneManager.LoadScene ("StartScene");
	}

	public void RetryButton ()
	{
		
		if (KobanCount > 30) {
			PlayerPrefs.SetInt ("score", lastScore);
			SceneManager.LoadScene ("Main");
			KobanCount -= 30;
			PlayerPrefs.SetInt ("KobanScore", KobanCount);
		}
	}
	public void RankButton(){
		SceneManager.LoadScene ("RankScene");
	}


	void TextMibun ()
	{
		Isappearing = true;
			
		
	}
	public void SavePlayerData ()
	{
		string name = PlayerPrefs.GetString ("name");
		int score = PlayerPrefs.GetInt ("score");
		NCMBObject obj = new NCMBObject ("HighScore");
		if (PlayerPrefs.HasKey ("objectId")) {
			obj.ObjectId = PlayerPrefs.GetString ("objectId");

		}
		obj.Add ("name", name);
		obj.Add ("score", score);
		obj.SaveAsync ((NCMBException e) => {
			if (e != null) {
				Debug.Log ("保存失敗、通信環境を確認してください");
			} else {
				Debug.Log ("保存成功！");
				if(PlayerPrefs.HasKey("objectId") == false){
					PlayerPrefs.SetString("objectId", obj.ObjectId);
				}
			}
		});
	}
	public void Fetch(){
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("HighScore");
		query.FindAsync ((List<NCMBObject> objList, NCMBException e) => {
			if (e != null) {
				//検索失敗時の処理
				Debug.Log("検索失敗");

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
