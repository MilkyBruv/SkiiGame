#include <string.h>
#include "Font.h"
#include "../Macros.h"
#include "BitmapManager.h"

std::map<char, Bitmap> Font::fontMap;
Bitmap Font::tempBitmap;

void Font::init()
{
	// Add characters with correspending image to fontMap

	char tempChars[] = "abcdefghijklmnopqrstuvwxyz0123456789>< ";

	for (size_t i = 0; i < (312 / 8); i++)
	{
		fontMap[tempChars[i]] = al_create_sub_bitmap(BitmapManager::getBitmap(FONT_BMI),
				i * 8, 0, 8, 8);
	}
}

Bitmap Font::getTextBitmap(const char* text)
{
	// Get original target bitmap to reset back to after creating text bitmap
	Bitmap tempTargetBitmap = al_get_target_bitmap();

	// Create temporary bitmap and render text into it from map

	tempBitmap = al_create_bitmap(strlen(text) * 8, 8);
	al_set_target_bitmap(tempBitmap);
	
	for (size_t i = 0; i < strlen(text); i++)
	{
		al_draw_bitmap(fontMap[text[i]], i * 8, 0, 0);
	}

	// Reset target bitmap
	al_set_target_bitmap(tempTargetBitmap);

	return tempBitmap;
}