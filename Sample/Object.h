#pragma once

#include "Task.h"

class Object : public Task{
public:
	float x;
	float y;
	float width;
	float height;
public:
	Object(){}
	virtual void Initialize(){}        //�����������͎������Ă����Ȃ��Ă�����
	virtual void Finalize(){}        //�I�������͎������Ă����Ȃ��Ă�����
	virtual void Update(){}    //�X�V�����͕K���p����Ŏ�������
	virtual void Draw(){}    //�`�揈���͕K���p����Ŏ�������
};