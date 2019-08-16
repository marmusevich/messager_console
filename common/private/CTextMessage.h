#ifndef CTEXTMESSAGE_H
#define CTEXTMESSAGE_H

#include "IMessage.h"

#include <boost/shared_ptr.hpp>


class CTextMessage : public IMessage
{
public:
    /**
     *  \param
     */
    CTextMessage();

    /**
     *  \param data
     */
    virtual void set(IData* data);

    /**
     *  \return
     */
    virtual const IData* get() const;

private:
    boost::shared_ptr<IData> mData;
};

#endif // CTEXTMESSAGE_H
