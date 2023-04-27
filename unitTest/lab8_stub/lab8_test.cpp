#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <bits/stdc++.h>
#include "service.hpp"
TEST(TEST_FAKE, TEST_INIT_SHALL_RETURN_TRUE)
{
    service obj;
    EXPECT_TRUE(obj.init());
}
TEST(TEST_FAKE, TEST_RUN_SHALL_RETURN_TRUE)
{
    service obj;
    EXPECT_TRUE(obj.run());
}
// Test the run() function
TEST(TEST_FAKE, RunReturnsTrue)
{

    service obj;
    testing::internal::CaptureStdout();                          // Capture stdout to check the printed message
    ASSERT_TRUE(obj.run());                                      // Ensure the function returns true
    std::string output = testing::internal::GetCapturedStdout(); // Retrieve the printed message
    EXPECT_EQ(output, "Service is running\n");                   // Ensure the printed message is correct
}