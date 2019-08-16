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
    virtual void set(IData* data) = 0;
    /**
     *  \return
     */
    virtual const IData* get() const = 0;
};

#endif // IMESSAGE_H
