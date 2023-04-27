#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <bits/stdc++.h>
TEST(TEST_SUIT1, ASSERT_THAT_TEST)
{
    std::string value2("Hello");
    ASSERT_THAT(1, 1);
    ASSERT_THAT("Hello", value2);
}
TEST(TEST_SUIT1, ASSERT_Boolean_TEST)
{
    auto even = [](int x)
    {
        return (x % 2) == 0;
    };
    ASSERT_TRUE(even(11)); // Failed
    ASSERT_FALSE(even(9)); // Will not run
}
TEST(TEST_SUIT1, ASSERT_Binary_TEST)
{
    auto power2 = [](int x)
    {
        return (x * x);
    };
    ASSERT_EQ(power2(10), 100);
    ASSERT_EQ(power2(3), 9);
    ASSERT_NE(power2(3), 3);
    ASSERT_LT(5, 7);
    ASSERT_LE(7, 7);
    ASSERT_GT(15, 7);
    ASSERT_GE(15, 15);
}
TEST(TEST_SUIT1, ASSERT_String_TEST)
{

    ASSERT_STREQ("Moatasem", "Moatasem");
    ASSERT_STRNE("zein", "Zein");
    ASSERT_STRCASEEQ("MoataseM", "Moatasem"); // ignoring case but same content
    ASSERT_STRCASENE("MoataseM", "MOAtase");  // ignoring case but different content
}

TEST(TEST_SUIT1, GTEST_UTILS)
{
    using ::testing::StartsWith;

    std::string value1("Hello World");
    ASSERT_THAT(value1, StartsWith("Hello"));
}
