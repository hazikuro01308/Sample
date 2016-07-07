#include "Game.h"
#include "DxLib.h"

Game::Game(ISceneChanger* changer) : BaseScene(changer) {
}

//������
void Game::Initialize(){
	frame=0;
	time=0;
	timeFlg = false;
}

//�X�V
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

//�`��
void Game::Draw(){
	BaseScene::Draw();//�e�N���X�̕`�惁�\�b�h���Ă�
    DrawString(0, 0,"�Q�[����ʂł��B",GetColor(255,255,255));
    DrawString(0,20,"Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B",GetColor(255,255,255));
}
