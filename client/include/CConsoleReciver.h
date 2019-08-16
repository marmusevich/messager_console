#ifndef CCONSOLERECIVER_H
#define CCONSOLERECIVER_H

#include "IMessageReciver.h"

#include "IData.h"
#include ".\..\..\common\private\CTextData.h"

#include <iostream>

class CConsoleReciver : public IMessageReciver
{
public:
    /** Default constructor */
    CConsoleReciver() {}
    /** Default destructor */
    virtual ~CConsoleReciver() {}


virtual void recive(const IMessage& message)
{
/*    const IData* data = message.get();
    if (data != nullptr)
    {
        print(*data);
    }
    */
}

private:

void print(const CTextData& data)
{
//    std::cout << data.getString() << std::endl;
}

void print(const IData& data)
{
    //nothing do
}

};

#endif // CCONSOLERECIVER_H
