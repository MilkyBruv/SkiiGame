#pragma once

#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include "Macros.h"

class BitmapManager
{
private:
	static Bitmap bitmaps[TOTAL_BITMAPS];
	static int bitmapIndex;

public:
	const static void loadBitmaps();
	const static void addBitmap(Bitmap bitmap);
	const static void destroyAllBitmaps();
	const static void destroyBitmap(int index);
	static Bitmap getBitmap(int index);
};