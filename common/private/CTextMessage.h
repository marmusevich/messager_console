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
    explicit CTextMessage(const IMessage& parent);

    /**
     *  \param data
     */
    virtual void set(const IData* data);

    /**
     *  \return
     */
    virtual const IData* get();

protected:

private:
    const IMessage& mParent;
    boost::shared_ptr<IData> mData;
};

#endif // CTEXTMESSAGE_H
