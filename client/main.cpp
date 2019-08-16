

#include "CConsoleReciver.h"
#include "CNet.h"


#include ".\..\..\common\private\CTextMessage.h"
#include ".\..\..\common\private\CTextData.h"

#include <boost/shared_ptr.hpp>


int main()
{
    const SParameters param = {"dummy addres"};

    CNet net(param, new CConsoleReciver());

    boost::shared_ptr<IMessage> mes( new CTextMessage());

    mes->set(new CTextData("test test 11111111111"));
    net.send(*mes);

    mes->set(new CTextData("test test 222222222222"));
    net.send(*mes);


    return 0;
}
