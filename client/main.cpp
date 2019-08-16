

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

    mes->set(new CTextData("test"));

    net.send(*mes);

    return 0;
}
