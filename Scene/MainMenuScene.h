#pragma once

#include "Scene.h"

class MainMenuScene : public Scene
{
public:
	int id;
	int cursorIndex;

	MainMenuScene();
	~MainMenuScene();
	void init() override;
	void update(bool &running) override;
	void render() override;
	void destroy() override;
};

