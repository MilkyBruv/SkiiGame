#pragma once

#include <iostream>

typedef struct SendData
{
	// 
} SendData;

typedef struct RecieveData
{
	// 
} RecieveData;

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
