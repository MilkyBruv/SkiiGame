#pragma once

#include <iostream>

class InputManager
{
public:
	// Set key state from index recieved from ALLEGRO_EVENT_KEY_DOWN in Main.cpp
	static bool keyState[256];

	// Preset key held
	static bool keyLeftDown;
	static bool keyRightDown;
	static bool keyPushDown;
	static bool keyUpDown;
	static bool keyDownDown;

	// Preset key held limiters
	static bool keyLeftLimiter;
	static bool keyRightLimiter;
	static bool keyPushLimiter;
	static bool keyUpLimiter;
	static bool KeyDownLimiter;

	// Used for obscure, rare-use keys
	static bool isKeyDown(int keyIndex);
};

