#pragma once

#include <iostream>

class InputManager
{
public:
	// Set key state from index recieved from ALLEGRO_EVENT_KEY_DOWN in Main.cpp
	static bool keyState[256];

	// Preset key held limiters
	static bool keyLeftLimited;
	static bool keyRightLimited;
	static bool keyPushLimited;
	static bool keyUpLimited;
	static bool keyDownLimited;
	static bool keyEnterLimited;

	// Used for obscure, rare-use keys
	static bool isKeyDown(int keyIndex);
};

