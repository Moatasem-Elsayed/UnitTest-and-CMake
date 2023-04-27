#include <iostream>
#include <boost/filesystem.hpp>

int main()
{
    boost::filesystem::path path(".");
    std::cout << "Current directory is: " << boost::filesystem::absolute(path) << std::endl;
    return 0;
}