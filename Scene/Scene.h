#pragma once

class Scene
{
public:
	int index;

	Scene();
	~Scene();
	virtual void init();
	virtual void update();
	virtual void destroy();
};
