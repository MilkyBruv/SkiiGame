#include <string.h>
#include "Font.h"
#include "../Macros.h"
#include "BitmapManager.h"

std::map<char, Bitmap> Font::fontMap;

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

void Font::renderText(const char* text, int x, int y)
{
	for (size_t i = 0; i < strlen(text); i++)
	{
		al_draw_bitmap(fontMap[text[i]], x + (i * 8), y, 0);
	}
}