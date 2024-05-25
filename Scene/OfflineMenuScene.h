#pragma once
#include "Scene.h"

class OfflineMenuScene : public Scene
{
public:
	int cursorIndex;

	OfflineMenuScene();
	~OfflineMenuScene();
	void init() override;
	void update(bool& running, Scene*& currentScene) override;
	void render() override;
	void destroy() override;
};

