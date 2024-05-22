#pragma once

class Scene
{
public:
	int id;

	Scene();
	virtual ~Scene();
	virtual void init();
	virtual void update(bool &running);
	virtual void render();
	virtual void destroy();
};
