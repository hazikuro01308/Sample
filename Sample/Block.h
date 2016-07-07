#pragma once

#include "Object.h"

class Block : public Object{
	int fallSpeed;
	float position[4];
public:

	virtual void Initialize();        //初期化処理は実装してもしなくてもいい
    virtual void Finalize();        //終了処理は実装してもしなくてもいい
	virtual void Update();    //更新処理は必ず継承先で実装する
	virtual void Draw();    //描画処理は必ず継承先で実装する
	
	bool collider(Block &b);

	void set_X(float get_x);
	void set_Y(float get_y);

	float get_X();
	float get_Y();

	Block();		//コンストラクタ
	Block(int init_x, int init_y);
};