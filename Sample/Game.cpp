#include "Game.h"
#include "DxLib.h"

Game::Game(ISceneChanger* changer) : BaseScene(changer) {
}

//初期化
void Game::Initialize(){
	frame=0;
	time=0;
	timeFlg = false;
}

//更新
void Game::Update(){

	DrawFormatString(0, 60, 0xffffff, "%d",time);

	if(time%2 == 0 && timeFlg == 0){
		int randX = GetRand(DISPLAY_WIDTH/BLOCK_WIDTH)*BLOCK_WIDTH;
		all_block.push_back(Block(randX, 0));
		timeFlg = true;
	}

	for(int i=0; i<all_block.size(); i++){
		all_block[i].Update();
	}


	frame++;

	if(frame > 60){
		frame = 0;
		timeFlg = false;
		time++;
	}
}

//描画
void Game::Draw(){
	BaseScene::Draw();//親クラスの描画メソッドを呼ぶ
    DrawString(0, 0,"ゲーム画面です。",GetColor(255,255,255));
    DrawString(0,20,"Escキーを押すとメニュー画面に戻ります。",GetColor(255,255,255));
}
