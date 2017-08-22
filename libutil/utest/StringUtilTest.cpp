#include <util/StringUtil.h>
#include <gtest/gtest.h>
#include <string>

using namespace std;
using namespace util;

TEST(StringUtilTest, testTrim) {
    string str = "   123   ";
    StringUtil::trim(str);
    EXPECT_EQ("123", str);
    
    StringUtil::trim(str);
    EXPECT_EQ("123", str);
}
