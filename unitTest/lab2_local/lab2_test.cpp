#include "gtest/gtest.h"
#include "lab2_calc.hpp"

TEST(TEST_SUIT1, TESTCASE1)
{
    EXPECT_EQ(sum(2, 3), 5);
}
TEST(TEST_SUIT1, TESTCASE2)
{
    EXPECT_EQ(sum(12, 2), 14);
}
TEST(TEST_SUIT1, TESTCASE3)
{
    EXPECT_NE(sum(12,32), 14);
}