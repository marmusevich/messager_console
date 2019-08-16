

#include "CConsoleReciver.h"
#include "CNet.h"

int main()
{
    const SParameters param = {"dummy addres"};

    CNet net(param, new CConsoleReciver());



    return 0;
}
