#include "Server.h"
#include <thread>

Server::Server(char* ip, int port)
{
	this->ip = ip;
	this->port = port;

	this->init();
}

Server::~Server()
{
	this->destroy();
}

void Server::init()
{
	// 
}

void Server::update()
{
	// 
}

void Server::destroy()
{
	free(this->ip);
}