#include <gtest/gtest.h>
#include <algorithm>

#include "algorithm.h"

TEST(ReverseString, Functionality) {
    ASSERT_EQ("SAEP", reverseString("PEAS", 3));
    ASSERT_EQ("OBMUJOCOC", reverseString("COCOJUMBO", 8));
}

TEST(ReverseString, CompareWithStandardLibrary) {
    std::string str1{"PEAS"};
    std::string str2{"COCOJUMBO"};

    std::string str1std{str1};
    std::string str2std{str2};
    std::reverse(str1std.begin(), str1std.end());
    std::reverse(str2std.begin(), str2std.end());

    ASSERT_EQ(str1std, reverseString(str1, str1.length() -1));
    ASSERT_EQ(str2std, reverseString(str2, str2.length() -1));
}

// Additional test to check test suites
TEST(TestAddition, Functionality) {
    ASSERT_EQ(3, 1 + 2);
}

TEST(TestSubtraction, Functionality) {
    ASSERT_EQ(5, 8 - 3);
}

// Additional test to check test fixture
class FixtureTest : public ::testing::Test {
  public:
    int getMyNumber() { return myNumber; }
  private:
    int myNumber{7};
};

TEST_F(FixtureTest, IsMyNumberSeven) {
    EXPECT_EQ(getMyNumber(), 7);  // We didn't have to create object manually.
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
