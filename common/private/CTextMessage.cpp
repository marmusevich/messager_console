#include "CTextMessage.h"

CTextMessage::CTextMessage(const IMessage& parent)
: mParent(parent)
, mData(nullptr)
{

}

void CTextMessage::set(const IData* data)
{
    //mData.reset(data);
}

const IData* CTextMessage::get()
{
    return mData.get();
}
