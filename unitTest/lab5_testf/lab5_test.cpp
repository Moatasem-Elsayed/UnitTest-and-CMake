#include "gtest/gtest.h"
#include "lab5_calc.hpp"
#include <iostream>
class CalcTest : public ::testing::Test
{
public:
    Calculator obj;
    // Sets up the test fixture.
    void SetUp() override
    {
        std::cout <<"Started"<<std::endl;
    }

    // Tears down the test fixture.
    void TearDown() override
    {
        std::cout <<"Finished"<<std::endl;
    }
};
TEST_F(CalcTest, TEST_SUM_SHALL_RETURN_5)
{
    EXPECT_EQ(obj.sum(2, 3), 5);
}
TEST_F(CalcTest, TEST_SUB_SHALL_RETURN_NEG)
{
    EXPECT_EQ(obj.sub(2, 3), -1);
}
TEST_F(CalcTest, TEST_MULT_SHALL_RETURN_6)
{
    EXPECT_EQ(obj.mult(2, 3), 6);
}