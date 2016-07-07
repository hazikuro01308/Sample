#pragma once

#include "Object.h"

class Block : public Object{
	int fallSpeed;
	float position[4];
public:

	virtual void Initialize();        //�����������͎������Ă����Ȃ��Ă�����
    virtual void Finalize();        //�I�������͎������Ă����Ȃ��Ă�����
	virtual void Update();    //�X�V�����͕K���p����Ŏ�������
	virtual void Draw();    //�`�揈���͕K���p����Ŏ�������
	
	bool collider(Block &b);

	void set_X(float get_x);
	void set_Y(float get_y);

	float get_X();
	float get_Y();

	Block();		//�R���X�g���N�^
	Block(int init_x, int init_y);
};