#include <iostream>
#include "QuitGameScene.h"
#include "../Input/InputManager.h"
#include "../Macros.h"
#include "../GFX/Font.h"
#include "../GFX/BitmapManager.h"

QuitGameScene::QuitGameScene()
{
	this->init();
}

QuitGameScene::~QuitGameScene()
{
	this->destroy();
}

void QuitGameScene::init()
{
	// 
}

void QuitGameScene::update(bool& running, Scene* &currentScene)
{
	running = false;
}

void QuitGameScene::render()
{
	al_draw_bitmap(Font::getTextBitmap("saving"), 8, 8, 0);
}

void QuitGameScene::destroy()
{
	// 
}