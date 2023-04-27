#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <bits/stdc++.h>
using ::testing::Return;
/**Interface { Imatch.hpp}*/
class Math
{
public:
    virtual int sum(int a, int b) = 0;
};
/***Production add.cpp/.hpp*/
class add : public Math
{
public:
    int sum(int a, int b) override
    {
        return a + b;
    }
};

class Calculator
{
public:
    Calculator(Math *math) : math_(math) {}
    int Add(int a, int b)
    {
        int result = 0;
        if (math_->sum(a, b) == 5)
            result = 2;
        else
            result = 3;
        return result;
    }

private:
    Math *math_;
};
// int main(){
//     add obj1;
//     Calculator calc(&obj1);
// }
/**test mocking class **/
class MockMath : public Math
{
public:
    MOCK_METHOD(int, sum, (int a, int b), (override));
};

TEST(CalculatorTest, Add)
{
    MockMath mock_math;
    Calculator calculator(&mock_math);
    EXPECT_CALL(mock_math, sum(2, 3)).WillOnce(Return(3));
    EXPECT_EQ(calculator.Add(2, 3), 3);
}