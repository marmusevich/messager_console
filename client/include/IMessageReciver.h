#ifndef IMESSAGERECIVER_H
#define IMESSAGERECIVER_H

#include "IMessage.h"

class IMessageReciver
{
public:
    virtual ~IMessageReciver() {}

    virtual void recive(const IMessage& message) =0;
};

#endif // IMESSAGERECIVER_H
