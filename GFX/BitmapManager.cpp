#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>
#include "BitmapManager.h"

Bitmap BitmapManager::bitmaps[TOTAL_BITMAPS];
int BitmapManager::bitmapIndex = 0;

const void BitmapManager::loadBitmaps()
{
	// Load all sub-bitmaps from spritesheet

	Bitmap spritesheet = al_load_bitmap("./res/image.png");

	// Loop through each x,y position on first 25 images on spritesheet
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 45; j++)
		{
			addBitmap(al_create_sub_bitmap(spritesheet, i * 8, j * 8, 8, 8));
		}
	}

	// Destroy spritesheet bitmap after finished with it
	al_destroy_bitmap(spritesheet);

	// Add frambuffer bitmap
	addBitmap(al_create_bitmap(FB_WIDTH, FB_HEIGHT));
}

const void BitmapManager::addBitmap(Bitmap bitmap)
{
	// Add new bitmap if there is space
	if (bitmapIndex < TOTAL_BITMAPS)
	{
		bitmaps[bitmapIndex] = bitmap;
		bitmapIndex++;
	}
}

const void BitmapManager::addBitmap(Bitmap bitmap, const int* bmi)
{
	// Add new bitmap if there is space
	if (bitmapIndex < TOTAL_BITMAPS)
	{
		bitmaps[bitmapIndex] = bitmap;
		bmi = &bitmapIndex;
		bitmapIndex++;
	}
}

const void BitmapManager::destroyBitmap(int index)
{
	// If the bitmap is present, destroy it
	if (bitmaps[index] != NULL)
	{
		al_destroy_bitmap(bitmaps[index]);
		bitmaps[index] = NULL;
	}
}

const void BitmapManager::destroyAllBitmaps()
{
	// Destroy all bitmaps
	for (size_t i = 0; i < sizeof(bitmaps) / sizeof(bitmaps[0]); i++)
	{
		destroyBitmap(i);
	}
}

Bitmap BitmapManager::getBitmap(int index)
{
	// Return bitmap from index from Macros.h
	return bitmaps[index];
}