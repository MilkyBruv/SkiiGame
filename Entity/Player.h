#pragma once

#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	void init() override;
	void update() override;
	void render() override;
};

