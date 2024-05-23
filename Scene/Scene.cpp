#include <iostream>
#include "Scene.h"

Scene::Scene()
{
	this->init();
}

void Scene::init()
{
	// 
}

void Scene::update(bool &running, Scene* &currentScene)
{
	// 
}

void Scene::render()
{
	// 
}

void Scene::destroy()
{
	// Destroy scene attributes
}

Scene::~Scene()
{
	this->destroy();
}