#include "CTextData.h"

CTextData::CTextData(const std::string& str)
: mString(str)
{

}

CTextData::CTextData(const CTextData& other)
: mString(other.mString)
{

}

const std::string CTextData::getString() const
{
    return mString;
}
