#pragma once

#include "common.h"

#include "BaseScene.h"
#include "ISceneChanger.h"
#include "Object.h"
#include "Player.h"
#include "Block.h"
#include <vector>

using namespace std;

//�Q�[����ʃN���X
class Game : public BaseScene {
private:
	int frame;
	int time;
	bool timeFlg;

public :
    Game::Game(ISceneChanger* changer);
    void Initialize() override;    //�������������I�[�o�[���C�h�B
    //void Finalize() override;        //�I���������I�[�o�[���C�h�B
    void Update() override;        //�X�V�������I�[�o�[���C�h�B
    void Draw() override;            //�`�揈�����I�[�o�[���C�h�B

	vector<Block> all_block;
	Block block[BLOCK_MAX];

	//�I�u�W�F�N�g
	Player player;

};
