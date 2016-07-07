#pragma once

#include "Object.h"

class Player : public Object{
	int moveSpeed;
public:
	virtual void Initialize();        //初期化処理は実装してもしなくてもいい
    virtual void Finalize();        //終了処理は実装してもしなくてもいい
	virtual void Update();    //更新処理は必ず継承先で実装する
	virtual void Draw();    //描画処理は必ず継承先で実装する
};