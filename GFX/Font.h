#pragma once

#include <map>
#include "../Macros.h"

class Font
{
public:
	// Map of char* to character Bitmap
	static std::map<char, Bitmap> fontMap;
	static Bitmap tempBitmap;

	static void init();
	static Bitmap getTextBitmap(const char* text);
};

