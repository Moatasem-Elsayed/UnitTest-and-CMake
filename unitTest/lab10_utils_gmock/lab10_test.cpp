// Database.h
// DatabaseTest.cpp
#include "gtest/gtest.h"
#include "gmock/gmock.h"
using ::testing::Return;
/**interface*/
class Network
{
public:
    virtual int GetUserDataFromServer(int user_id) = 0;
};

class Database
{
public:
    Database(Network *network) : network_(network)
    {
    }
    int GetUserData(int user_id)
    {
        // Make a network request to get user data
        int result = network_->GetUserDataFromServer(user_id);
        // Process the result and return the data
        return result + 10;
    }

private:
    Network *network_;
};

class MockNetwork : public Network
{
public:
    MOCK_METHOD(int, GetUserDataFromServer, (int user_id), (override));
};

TEST(DatabaseTest, GetUserData)
{
    // Create a mock object of the Network class
    MockNetwork mock_network;
    // Set up expectations on the mock object
    EXPECT_CALL(mock_network, GetUserDataFromServer(42)).WillOnce(Return(100));
    // Create an instance of the Database class with the mock object
    Database database(&mock_network);
    // Call the method under test
    int result = database.GetUserData(42);
    // Check the result
    EXPECT_EQ(result, 110);

    // Example using Repeatedly
    EXPECT_CALL(mock_network, GetUserDataFromServer(42)).WillRepeatedly(Return(100));
    result = database.GetUserData(42);
    EXPECT_EQ(result, 110);
    result = database.GetUserData(42);
    EXPECT_EQ(result, 110);

    // Example using Times
    EXPECT_CALL(mock_network, GetUserDataFromServer(42)).Times(3).WillRepeatedly(Return(100));
    result = database.GetUserData(42);
    result = database.GetUserData(42);
    result = database.GetUserData(42);
    EXPECT_EQ(result, 110);
}
