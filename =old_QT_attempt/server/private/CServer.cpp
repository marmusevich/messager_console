#include "CServer.h"

#include <simple.h>

#include <iostream>

using namespace std;

bool CServer::init()
{
    simple();
	cout << "CServer::init()" <<endl;
    return false;
}
	
bool CServer::run()
{
	cout << "CServer::run()" <<endl;
    return false;
}

