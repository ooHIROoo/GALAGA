#pragma once
#include "../utility/Vec2f.h"

//=====================================
//オブジェクトクラス(基底クラス)
//=====================================

class Object{
public:
	Object():
		m_hp(10),
		m_power_val(10),
		m_state(State::LIVE){}
	virtual ~Object() = default;

	virtual void Update() = 0;
	virtual void Draw() = 0;
	
	//　状態の種類
	enum class State{
		NONE,			//　存在していない
		LIVE,			//　存在している
		TRANSPARENCY	//　透明
	};

protected:

	int m_hp;							//　hp
	int m_power_val;					//　攻撃力
	State m_state;						//　現在の状態
	Vec2f m_pos;						//　ポジション
	Vec2f m_size;						//　オブジェクトの大きさ


public:
	//　状態を取得
	State GetState(){ return m_state; }
};

