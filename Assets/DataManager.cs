using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;
using UnityEngine.UI;
public class DataManager : MonoBehaviour {

	public static DataManager instance;
	public int currentRank=0;

	[SerializeField]
	public List<HighScore> highScoreList = new List<HighScore>();
	public List<HighScore> neighborsScoreList = new List<HighScore>();


	void Awake(){
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (this.gameObject);
		} else {
			Destroy (this.gameObject);
		}
	}
	void Start(){
		FetchTopRankingData ();
		fetchNeighbors ();
	}


	public void FetchTopRankingData(){
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("HighScore");
		//ここでqueryに色々条件を与える
		 query.OrderByDescending ("score");
		query.Limit = 5;
		query.FindAsync ((List<NCMBObject> objList, NCMBException e) => {
			if (e != null) {
				//検索失敗時の処理


			} else {
				//検索成功時の処理
				// 取得したレコードをHighScoreクラスとして保存
				foreach (var obj in objList) {
					int s = System.Convert.ToInt32 (obj ["score"]);
					string n = System.Convert.ToString (obj ["name"]);

					HighScore highScore = new HighScore();
					highScore.name = n;
					highScore.score = s;
//					Debug.Log("score"+s,"name"+n);
					highScoreList.Add(highScore);
				}
			}
		});
	}
	public void fetchNeighbors()
	{

		// スキップする数を決める（ただし自分が1位か2位のときは調整する）
		int numSkip = currentRank - 3;
		if(numSkip < 0) numSkip = 0;

		// データストアの「HighScore」クラスから検索
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("HighScore");
		query.OrderByDescending ("Score");
		query.Skip  = numSkip;
		query.Limit = 5;
		query.FindAsync ((List<NCMBObject> objList ,NCMBException e) => {

			if (e != null) {
				//検索失敗時の処理
			} else {
				//検索成功時の処理
				// 取得したレコードをHighScoreクラスとして保存
				foreach (NCMBObject obj in objList) {
					int    s = System.Convert.ToInt32(obj["Score"]);
					string n = System.Convert.ToString(obj["Name"]);
					HighScore highScore = new HighScore();

					neighborsScoreList.Add( highScore );
				}
			}
		});
	}
}
