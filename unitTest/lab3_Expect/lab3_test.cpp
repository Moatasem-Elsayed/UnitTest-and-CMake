#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <bits/stdc++.h>
TEST(TEST_SUIT1, EXPECT_THAT_TEST)
{
    std::string value2("Hello");
    EXPECT_THAT(1, 1);
    EXPECT_THAT("Hello", value2);
}
TEST(TEST_SUIT1, EXPECT_Boolean_TEST)
{
    auto even = [](int x)
    {
        return (x % 2) == 0;
    };
    EXPECT_TRUE(even(10));
    EXPECT_FALSE(even(9));
}
TEST(TEST_SUIT1, EXPECT_Binary_TEST)
{
    auto power2 = [](int x)
    {
        return (x * x);
    };
    EXPECT_EQ(power2(10), 100);
    EXPECT_EQ(power2(3), 9);
    EXPECT_NE(power2(3), 3);
    EXPECT_LT(5, 7);
    EXPECT_LE(7, 7);
    EXPECT_GT(15, 7);
    EXPECT_GE(15, 15);
}
TEST(TEST_SUIT1, EXPECT_String_TEST)
{

    EXPECT_STREQ("Moatasem", "Moatasem");
    EXPECT_STRNE("zein", "Zein");
    EXPECT_STRCASEEQ("MoataseM", "Moatasem"); // ignoring case but same content
    EXPECT_STRCASENE("MoataseM", "MOAtase");  // ignoring case but different content
}

TEST(TEST_SUIT1, GTEST_UTILS)
{
    using ::testing::StartsWith;

    std::string value1("Hello World");
    EXPECT_THAT(value1, StartsWith("Hello"));
}
