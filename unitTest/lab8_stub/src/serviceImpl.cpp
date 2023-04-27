#include "serviceImpl.hpp"
serviceImpl::serviceImpl(/* args */)
{
}

serviceImpl::~serviceImpl()
{
}

bool serviceImpl::init()
{
    std::cout << "Init Data base" << std::endl;
    return true;
}

bool serviceImpl::run()
{
    std::cout << "Read Data base" << std::endl;
    return true;
}

void serviceImpl::fun1()
{
}

void serviceImpl::fun2()
{
}

void serviceImpl::fun3()
{
}