#ifndef CCRIPTEDMESSAGE_H
#define CCRIPTEDMESSAGE_H

#include <IMessage.h>


class CCriptedMessage : public IMessage
{
public:
    /**
     *  \param
     */
    explicit CCriptedMessage(const IMessage& parent);

    /**
     *  \param data
     */
    virtual void set(const IData* data)
    {
        parent.set(data);
    }

    /**
     *  \return
     */
    virtual const IData* get()
    {
        return parent.get();
    }

    protected:

    private:
        const IMessage& mParent;
};

#endif // CCRIPTEDMESSAGE_H
