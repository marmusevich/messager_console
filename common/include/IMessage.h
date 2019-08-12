#ifndef IMESSAGE_H
#define IMESSAGE_H

#include "IData.h"

class IMessage
{
public:
    virtual ~IMessage() {}
    /**
     *  \param data
     */
    virtual void set(const IData* data) = 0;
    /**
     *  \return
     */
    virtual const IData* get() = 0;
};

#endif // IMESSAGE_H
