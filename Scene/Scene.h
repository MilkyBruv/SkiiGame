#pragma once

class Scene
{
public:
	Scene();
	virtual ~Scene();
	virtual void init();
	virtual void update(bool &running, Scene* &currentScene);
	virtual void render();
	virtual void destroy();
};
