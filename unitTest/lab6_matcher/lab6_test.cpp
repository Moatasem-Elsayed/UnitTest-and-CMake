#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <bits/stdc++.h>

TEST(TEST_SUIT1, GTEST_MATCHER_UTILS)
{
    using ::testing::AllOf;
    using ::testing::Each;
    using ::testing::ElementsAre;
    using ::testing::Gt;
    using ::testing::IsNull;
    using ::testing::IsTrue;
    using ::testing::Lt;
    using ::testing::MatchesRegex;
    using ::testing::StartsWith;
    using ::testing::WhenSorted;

    int *ptr = nullptr;
    // generic
    EXPECT_THAT(ptr, IsNull());
    EXPECT_THAT(true, IsTrue());
    std::string value1("Hello World");
    // string
    EXPECT_THAT(value1, StartsWith("Hello"));
    EXPECT_THAT(value1, MatchesRegex(".*World.*"));
    // composite
    int value = 10;
    EXPECT_THAT(value, AllOf(Gt(2), Lt(100)));
    // container
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7};
    EXPECT_THAT(v, ElementsAre(1, 2, 3, 4, 5, 6, 7));
    std::vector<int> v2{2, 4, 6, 1, 3, 5, 7};
    EXPECT_THAT(v2, WhenSorted(ElementsAre(1, 2, 3, 4, 5, 6, 7)));
    EXPECT_THAT(v2, Each(Gt(0)));
}
