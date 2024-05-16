#include <allegro5/allegro5.h>
#include "Macros.h"

#pragma once

class Entity
{
public:
	int x;
	int y;
	int width;
	int height;
	int renderX;
	int renderY;
	Bitmap bitmap;
	Bitmap bitmaps;

	Entity();
	const void init();
	const void update();
	const void render();
};

