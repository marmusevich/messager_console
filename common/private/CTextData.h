#ifndef CTEXTDATA_H
#define CTEXTDATA_H

#include "IData.h"

#include <string>


class CTextData : public IData
{
public:
    /**
     *  \param
     */
    explicit CTextData(const std::string& str);

    /** Copy constructor
     *  \param other Object to copy from
     */
    CTextData(const CTextData& other);

    /** Access mData
     * \return The message string
     */
    const std::string getString() const;

private:
    // Assignment operator - avoid
    //CTextData& operator=(const CTextData& other) ;

    std::string mString;
};

#endif // CTEXTDATA_H
