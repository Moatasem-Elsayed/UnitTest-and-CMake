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
#ifndef UNIT_TEST
    result = impl.init();
#else
    result = true;
#endif
    return result;
}

bool service::run()
{
    bool result = false;
    std::cout << "Service is running" << std::endl;
#ifndef UNIT_TEST
    result = impl.run();
#else
    result = true;
#endif
    return result;
}
