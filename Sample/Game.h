#pragma once

#include "common.h"

#include "BaseScene.h"
#include "ISceneChanger.h"
#include "Object.h"
#include "Player.h"
#include "Block.h"
#include <vector>

using namespace std;

//ゲーム画面クラス
class Game : public BaseScene {
private:
	int frame;
	int time;
	bool timeFlg;

public :
    Game::Game(ISceneChanger* changer);
    void Initialize() override;    //初期化処理をオーバーライド。
    //void Finalize() override;        //終了処理をオーバーライド。
    void Update() override;        //更新処理をオーバーライド。
    void Draw() override;            //描画処理をオーバーライド。

	vector<Block> all_block;
	Block block[BLOCK_MAX];

	//オブジェクト
	Player player;

};
