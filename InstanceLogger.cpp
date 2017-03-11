//
// Created by demo on 3/11/17.
//

#include "InstanceLogger.h"
#include <iostream>

InstanceLogger::InstanceLogger()
{
    std::cout << "CREATED Instance " << std::to_string(long(this)) << std::endl;
}

InstanceLogger::~InstanceLogger()
{
    std::cout << "DESTROYED Instance " << std::to_string(long(this)) << std::endl;
}
