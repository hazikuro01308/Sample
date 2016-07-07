#include "DxLib.h"
#include "Block.h"
#include "common.h"

Block::Block(){
	x = 0;
	y = 0;
	Initialize();
}

Block::Block(int init_x, int init_y){
	x = init_x;
	y = init_y;
	Initialize();
}

void Block::Initialize(){
	width = BLOCK_WIDTH;
	height = BLOCK_HEIGHT;
	fallSpeed = BLOCK_FALL_SPEED;
}

void Block::Update(){
	y += GRAVITY;

	if(y+height > DISPLAY_HEIGHT){
		y = DISPLAY_HEIGHT-height;
	}

	Draw();
}

void Block::Draw(){
		DrawBox(x, y, x+width, y+height, 0xffcc00, true);
}

bool Block::collider(Block &b){
	
	if((y+BLOCK_HEIGHT) < (b.get_Y()-(BLOCK_HEIGHT/2))){
		y = b.get_Y()+(BLOCK_HEIGHT/2);
	}
	
	return false;
}

void Block::set_X(float get_x){
	x = get_x;
}

void Block::set_Y(float get_y){
	y = get_y;
}

float Block::get_X(){
	return x+BLOCK_WIDTH/2;
}

float Block::get_Y(){
	return y+BLOCK_HEIGHT/2;
}



void Block::Finalize(){
	
}