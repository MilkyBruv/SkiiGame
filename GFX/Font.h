#pragma once

#include <map>
#include "../Macros.h"

class Font
{
public:
	// Map of char* to character Bitmap
	static std::map<char, Bitmap> fontMap;

	static void init();
	static void renderText(const char* text, int x, int y);

private:
	static void addTextBitmap(const char* text);
};

