#include <iostream>
#include "MainMenuScene.h"
#include "QuitGameScene.h"
#include "OfflineMenuScene.h"
#include "../Input/InputManager.h"
#include "../Macros.h"
#include "../GFX/Font.h"
#include "../GFX/BitmapManager.h"

MainMenuScene::MainMenuScene()
{
	this->init();
}

MainMenuScene::~MainMenuScene()
{
	this->destroy();
}

void MainMenuScene::init()
{
	this->cursorIndex = 0;
}

void MainMenuScene::update(bool &running, Scene* &currentScene)
{
	if (InputManager::isKeyDown(KEY_UP) && !InputManager::keyUpLimited)
	{
		this->cursorIndex = this->cursorIndex == 0 ? 2 : this->cursorIndex - 1;
		InputManager::keyUpLimited = true;

	} if (InputManager::isKeyDown(KEY_DOWN) && !InputManager::keyDownLimited)
	{
		this->cursorIndex = this->cursorIndex == 2 ? 0 : this->cursorIndex + 1;
		InputManager::keyDownLimited = true;
	}

	if (InputManager::isKeyDown(KEY_ENTER) && !InputManager::keyEnterLimited)
	{
		if (this->cursorIndex == 0) { currentScene = new OfflineMenuScene(); }
		if (this->cursorIndex == 1) { std::cout << "start game online" << std::endl; }
		if (this->cursorIndex == 2) { currentScene = new QuitGameScene(); }
	}
}

void MainMenuScene::render()
{
	Font::renderText("skii", 16, 8);
	// BitmapManager::renderBitmap(TITLE_BMI, 100, 8);
	Font::renderText("copyright", 8, 144 - 24);
	Font::renderText("milkybruv 2024", 16, 144 - 16);

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

	} if (this->cursorIndex == 2)
	{
		Font::renderText("offline", 16, 32);
		Font::renderText("online", 16, 48);
		Font::renderText(">quit<", 8, 64);
	}
}

void MainMenuScene::destroy()
{
	// 
}