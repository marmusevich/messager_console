#include "CTextMessage.h"

CTextMessage::CTextMessage()
: mData()
{

}

void CTextMessage::set(IData* data)
{
    mData.reset(data);
}

const IData* CTextMessage::get() const
{
    return mData.get();
}
