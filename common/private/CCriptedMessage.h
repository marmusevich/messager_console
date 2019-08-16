#ifndef CCRIPTEDMESSAGE_H
#define CCRIPTEDMESSAGE_H

#include <IMessage.h>
        #include <boost/shared_ptr.hpp>


class CCriptedMessage : public IMessage
{
public:
    /**
     *  \param
     */
    explicit CCriptedMessage(const IMessage* parent)
    : mParent(parent)
    {

    }

    /**
     *  \param data
     */
    virtual void set(IData* data)
    {
        if (mParent != nullptr)
        {
            mParent.set(data);
        }
    }

    /**
     *  \return
     */
    virtual const IData* get() const
    {
        IData* ret = nullptr;
        if (mParent != nullptr)
        {
            ret =mParent.get();
        }
        return ret;
    }

private:
    boost::shared_ptr<IMessage> mParent;
};

#endif // CCRIPTEDMESSAGE_H
