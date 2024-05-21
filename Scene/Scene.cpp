#include "Scene.h"

Scene::Scene()
{
	this->init();
}

void Scene::init()
{
	this->index = 0;
}

void Scene::update()
{
	// Update scene
}

void Scene::destroy()
{
	// Destroy scene attributes
}

Scene::~Scene()
{
	this->destroy();
}