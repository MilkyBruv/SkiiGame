#pragma once

#include "Scene.h"

class QuitGameScene : public Scene
{
public:
	QuitGameScene();
	~QuitGameScene();
	void init() override;
	void update(bool& running, Scene* &currentScene) override;
	void render() override;
	void destroy() override;
};

