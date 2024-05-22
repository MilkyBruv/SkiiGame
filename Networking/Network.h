#pragma once

#include <zmq.hpp>

typedef struct ClientToServerData
{
	int id;
	int x;
	int y;
	float vel;
} ClientToServerData;

typedef struct ServerToClientData
{
	ClientToServerData allPlayersData[];
} ServerToClientData;