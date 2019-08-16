#include "CNet.h"

#include <iostream>

using namespace std;

CNet::CNet(const SParameters& parameters, IMessageReciver* reciver)
: mReciver(reciver)
, mPparameters(parameters)
{
    cout <<"CNet created. Parameters is:"  <<endl;
    cout <<"\t mPparameters.adress: "  <<mPparameters.adress <<endl;
}

bool CNet::send(const IMessage& message)
{
    bool ret = false;
    if (mReciver != nullptr)
    {
        mReciver->recive(message);
        ret = true;
    }
    return ret;
}


CNet::~CNet()
{

}
