#pragma once

#include <iostream>

class Server
{
public:
	char* ip = NULL;
	int port = NULL;

	Server(char* ip, int port);
	~Server();
	void init();
	void update();
	void destroy();
};
