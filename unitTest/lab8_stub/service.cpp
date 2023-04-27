#include "service.hpp"
#include <bits/stdc++.h>
service::service(/* args */)
{
}

service::~service()
{
}

bool service::init()
{
    bool result = false;
    result = impl.init();
    return result;
}

bool service::run()
{
    bool result = false;
    std::cout << "Service is running" << std::endl;
    result = impl.run();
    return result;
}
