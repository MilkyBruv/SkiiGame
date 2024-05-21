#include "InputManager.h"

bool InputManager::keyState[256];

bool InputManager::keyLeftDown = false;
bool InputManager::keyRightDown = false;
bool InputManager::keyPushDown = false;
bool InputManager::keyUpDown = false;
bool InputManager::keyDownDown = false;

bool InputManager::keyLeftLimiter = false;
bool InputManager::keyRightLimiter = false;
bool InputManager::keyPushLimiter = false;
bool InputManager::keyUpLimiter = false;
bool InputManager::KeyDownLimiter = false;

bool InputManager::isKeyDown(int keyIndex)
{
	return keyState[keyIndex];
}