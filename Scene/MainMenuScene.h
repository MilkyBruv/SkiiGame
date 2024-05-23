#pragma once

#include "Scene.h"

class MainMenuScene : public Scene
{
public:
	int cursorIndex;

	MainMenuScene();
	~MainMenuScene();
	void init() override;
	void update(bool &running, Scene* &currentScene) override;
	void render() override;
	void destroy() override;
};

