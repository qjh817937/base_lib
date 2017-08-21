#include <util/StringUtil.h>

using namespace std;
UTIL_BEGIN_NAMESPACE(util)

void StringUtil::trim(string& str) {
    str.erase(str.find_last_not_of(' '));
    str.erase(0, str.find_first_not_of(' '));
}

UTIL_END_NAMESPACE(util)
