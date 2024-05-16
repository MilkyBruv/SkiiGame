#include "Entity.h"
#include <allegro5/allegro5.h>

Entity::Entity()
{
	// 
}

const void Entity::render()
{
	al_draw_bitmap(Entity::bitmap, Entity::renderX, Entity::renderY, 0);
}