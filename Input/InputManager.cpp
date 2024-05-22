#include "InputManager.h"

bool InputManager::keyState[256];

bool InputManager::keyLeftLimited = false;
bool InputManager::keyRightLimited = false;
bool InputManager::keyPushLimited = false;
bool InputManager::keyUpLimited = false;
bool InputManager::keyDownLimited = false;
bool InputManager::keyEnterLimited = false;

bool InputManager::isKeyDown(int keyIndex)
{
	return keyState[keyIndex];
}