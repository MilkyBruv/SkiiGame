#include "Entity.h"
#include "../GFX/BitmapManager.h"
#include "../Macros.h"

// Basic implementations of Entity.h stuff

Entity::Entity()
{
	this->init();
}

Entity::~Entity()
{
	al_destroy_bitmap(this->bitmap);
}

void Entity::init()
{
	this->x = 0;
	this->y = 0;
	this->width = 8;
	this->height = 8;
	this->renderX = this->x;
	this->renderY = this->y;
	this->bitmap = BitmapManager::getBitmap(UNDEFINED_BMI);
}

void Entity::update()
{

}

void Entity::render()
{
	al_draw_bitmap(this->bitmap, this->renderX, this->renderY, 0);
}