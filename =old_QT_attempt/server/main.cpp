#include "CServer.h"

//#include <libconfig.h++>

int main()
{
	
	CServer server;
	bool isInit = server.init();
	bool isRun = server.run();
    int ret = (isInit && isRun) ? 0 : 0;
    return ret;
}
