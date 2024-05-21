#pragma once

#include "Scene.h"

class MainMenuScene : public Scene
{
public:
	int index;

	void init() override;
	void update() override;
	void destroy() override;
};

