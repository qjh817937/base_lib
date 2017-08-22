#ifndef UTIL_STRING_UTIL_H
#define UTIL_STRING_UTIL_H

#include <util/CommonMacros.h>
#include <string>

UTIL_BEGIN_NAMESPACE(util)

class StringUtil {
public:
    static void trim(std::string& str);
};

UTIL_END_NAMESPACE(autil)
#endif // UTIL_STRING_UTIL_H
