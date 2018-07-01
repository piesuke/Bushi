using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;
public class UserSave : MonoBehaviour {
	public string userName;
	public string userPassword;
	// Use this for initialization
	void Start () {
		SignUp (userName,userPassword);
	}
	public void SignUp(string userName,string userPassword){
	//NCMBのインスタンス作成
		NCMBUser user=new NCMBUser();
//		ユーザー名の指定
		user.UserName=userName;
		user.Password = userPassword;
//		会員登録を行う
		user.SignUpAsync((NCMBException e)=>{
			if(e!=null){
				Debug.Log("新規登録に失敗:"+e.ErrorMessage);
			}else{
				Debug.Log("新規登録に成功");
			}
		});
	}

}
