#include "Key.h"
#include "../../DxLib/DxLib.h"

int Key[256]; // キーが押されているフレーム数を格納する

// キーの入力状態を更新する
void gpUpdateKey(){
	char tmpKey[256]; // 現在のキーの入力状態を格納する
	GetHitKeyStateAll(tmpKey); // 全てのキーの入力状態を得る
	for (int i = 0; i<256; i++){
		if (tmpKey[i] != 0){ // i番のキーコードに対応するキーが押されていたら
			Key[i]++;     // 加算
		}
		else {              // 押されていなければ
			Key[i] = 0;   // 0にする
		}
	}
}

//　キーを取得
int GetKey(int key_code){
	return Key[key_code];
}