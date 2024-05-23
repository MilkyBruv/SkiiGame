#include <iostream>
#include "MainMenuScene.h"
#include "QuitGameScene.h"
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
		this->cursorIndex = this->cursorIndex == 0 ? 1 : 0;
		InputManager::keyUpLimited = true;

	} if (InputManager::isKeyDown(KEY_DOWN) && !InputManager::keyDownLimited)
	{
		this->cursorIndex = this->cursorIndex == 0 ? 1 : 0;
		InputManager::keyDownLimited = true;
	}

	if (InputManager::isKeyDown(KEY_ENTER) && !InputManager::keyEnterLimited)
	{
		if (this->cursorIndex == 0) { std::cout << "start game" << std::endl; }
		else if (this->cursorIndex == 1) { 
			currentScene = new QuitGameScene();
		}
	}
}

void MainMenuScene::render()
{
	al_draw_bitmap(Font::getTextBitmap("skii"), 16, 8, 0);
	al_draw_bitmap(BitmapManager::getBitmap(TITLE_BMI), 100, 8, 0);
	al_draw_bitmap(Font::getTextBitmap("copyright"), 8, 144 - 24, 0);
	al_draw_bitmap(Font::getTextBitmap(" milkybruv 2024"), 8, 144 - 16, 0);

	if (this->cursorIndex == 0)
	{
		al_draw_bitmap(Font::getTextBitmap(">play<"), 8, 32, 0);
		al_draw_bitmap(Font::getTextBitmap(" quit"), 8, 48, 0);
	
	} if (this->cursorIndex == 1)
	{
		al_draw_bitmap(Font::getTextBitmap(" play"), 8, 32, 0);
		al_draw_bitmap(Font::getTextBitmap(">quit<"), 8, 48, 0);
	}
}

void MainMenuScene::destroy()
{
	// 
}