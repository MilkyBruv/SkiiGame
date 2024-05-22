#pragma once

#include "Entity.h"

class Player : public Entity
{
public:
	float vel;

	Player();
	~Player();
	virtual void init() override;
	virtual void update() override;
	void render() override;
};

