#include "Player.h"
#include "../GFX/BitmapManager.h"
#include "../Macros.h"

Player::Player()
{
	this->init();
}

Player::~Player()
{
	al_destroy_bitmap(this->bitmap);
}

void Player::init()
{
	this->vel = 0.0f;
	this->x = 0;
	this->y = 0;
	this->width = 8;
	this->height = 8;
	this->renderX = this->x;
	this->renderY = this->y;
	this->bitmap = BitmapManager::getBitmap(PLAYER_F_BMI);
}

void Player::update()
{

}

void Player::render()
{
	al_draw_bitmap(this->bitmap, this->renderX, this->renderY, 0);
}