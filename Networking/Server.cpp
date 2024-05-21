#include "Server.h"

Server::Server(char* ip, int port)
{
	this->ip = ip;
	this->port = port;

	this->init();
}

void Server::update()
{
	// 
}