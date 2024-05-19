#pragma once

#include "Entity.h"
#include "../Macros.h"

class EntityManager
{
public:
	// Total number of possible entities that can me on the screen at any time,
	// (width * (height + 1)) for full screen of tiles plus an extra row to account for scrolling,
	// then add 8 for each possible player
	const static Entity entities[(TILE_WIDTH * (TILE_HEIGHT + 1)) + 8];
};

