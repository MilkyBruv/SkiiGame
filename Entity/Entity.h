#include <allegro5/allegro5.h>
#include "../Macros.h"

#pragma once

class Entity
{
protected:
	int x;
	int y;
	int width;
	int height;
	int renderX;
	int renderY;
	Bitmap bitmap;

	Entity();
	~Entity();
	virtual void init();
	virtual void update();
	virtual void render();
};

