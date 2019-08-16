#ifndef CNET_H
#define CNET_H


#include "IMessageReciver.h"

#include "IMessage.h"

#include <string>
#include <boost/shared_ptr.hpp>

struct SParameters
{
    std::string adress;
};

class CNet
{
public:
    /** Default constructor */
    CNet(const SParameters& parameters, IMessageReciver* reciver);
    /** Default destructor */
    virtual ~CNet();

    bool send(const IMessage& message);

protected:

private:
    boost::shared_ptr<IMessageReciver> mReciver;
    const SParameters mPparameters;
};

#endif // CNET_H
