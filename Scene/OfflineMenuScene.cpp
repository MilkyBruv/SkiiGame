#include <iostream>
#include "OfflineMenuScene.h"
#include "../Input/InputManager.h"
#include "../Macros.h"
#include "../GFX/Font.h"
#include "../GFX/BitmapManager.h"

OfflineMenuScene::OfflineMenuScene()
{
	this->init();
}

OfflineMenuScene::~OfflineMenuScene()
{
	this->destroy();
}

void OfflineMenuScene::init()
{
	this->cursorIndex = 0;
}

void OfflineMenuScene::update(bool& running, Scene*& currentScene)
{
	if (InputManager::isKeyDown(KEY_LEFT) && !InputManager::keyLeftLimited)
	{
		this->cursorIndex = this->cursorIndex == 0 ? 1 : 0;
		InputManager::keyLeftLimited = true;

	} if (InputManager::isKeyDown(KEY_RIGHT) && !InputManager::keyRightLimited)
	{
		this->cursorIndex = this->cursorIndex == 0 ? 1 : 0;
		InputManager::keyRightLimited = true;
	}

	if (InputManager::isKeyDown(KEY_ENTER) && !InputManager::keyEnterLimited)
	{
		std::cout << "do some singleplayer crap idk" << std::endl;
	}
}

void OfflineMenuScene::render()
{
	Font::renderText("offline", 16, 8);

	if (this->cursorIndex == 0)
	{
		Font::renderText(">offline<", 8, 32);
		Font::renderText("online", 16, 48);
		Font::renderText("quit", 16, 64);

	} if (this->cursorIndex == 1)
	{
		Font::renderText("offline", 16, 32);
		Font::renderText(">online<", 8, 48);
		Font::renderText("quit", 16, 64);

	}
}

void OfflineMenuScene::destroy()
{
	// 
}