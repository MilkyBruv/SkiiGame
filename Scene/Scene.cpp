#include <iostream>
#include "Scene.h"

Scene::Scene()
{
	this->init();
}

void Scene::init()
{
	this->id = 0;
}

void Scene::update(bool &running)
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