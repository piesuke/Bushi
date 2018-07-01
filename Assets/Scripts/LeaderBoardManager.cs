using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;
public class LeaderBoardManager : MonoBehaviour {
	LeaderBoard lBoard;
	private HighScore currentHighScore;
	public GameObject[] top = new GameObject[5];
	public GameObject[] nei = new GameObject[5];
	bool isScoreFetched;
	bool isRankFetched;
	bool isLeaderBoardFetched;
	// Use this for initialization
	void Start () {
		
			lBoard = new LeaderBoard();

			// テキストを表示するゲームオブジェクトを取得
			for( int i = 0; i < 5; ++i ) {
				top[i] = GameObject.Find ("Top" + i);
				nei[i] = GameObject.Find ("Neighbor" + i);
			}
		isScoreFetched = false;
		isRankFetched = false;
		isLeaderBoardFetched = false;
	}
	
	// Update is called once per frame
	void Update () {
		if(currentHighScore.score!=-1&&!isScoreFetched){
			lBoard.fetchTopRankers ();
			isScoreFetched = true;
		}
		// 現在の順位の取得が完了したら1度だけ実行
		if( lBoard.currentRank != 0 && !isRankFetched ){
			lBoard.fetchTopRankers();
			lBoard.fetchNeighbors();
			isRankFetched = true;
		}

		// ランキングの取得が完了したら1度だけ実行
		if( lBoard.topRankers != null && lBoard.neighbors != null && !isLeaderBoardFetched){ 
			// 自分が1位のときと2位のときだけ順位表示を調整
			int offset = 2;
			if(lBoard.currentRank == 1) offset = 0;
			if(lBoard.currentRank == 2) offset = 1;

			// 取得したトップ5ランキングを表示
			for( int i = 0; i < lBoard.topRankers.Count; ++i) {
			}

			// 取得したライバルランキングを表示
			for( int i = 0; i < lBoard.neighbors.Count; ++i) {
			}
			isLeaderBoardFetched = true;
		}
	}


}
	
