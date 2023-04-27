#ifndef UNIT_TEST
#include "serviceImpl.hpp"
#endif
class service
{
private:
#ifndef UNIT_TEST
    serviceImpl impl;
#endif
public:
    service(/* args */);
    ~service();
    bool init();
    bool run();
};
