#pragma once

#include "../Entity/Player.h"

// NetworkPlayer is desplayed on client screen in place for other online players
class NetworkPlayer : public Player
{
public:
	int id;
	NetworkPlayer(int id);
};

