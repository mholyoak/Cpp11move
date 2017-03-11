//
// Created by demo on 3/11/17.
//

#include "InstanceContainer.h"

InstanceContainer::InstanceContainer()
{

}

void InstanceContainer::ShareObject(const std::shared_ptr<InstanceLogger>& instanceLogger)
{
    _instanceLogger = instanceLogger;
}

void InstanceContainer::TakeObject(const std::shared_ptr<InstanceLogger>& instanceLogger)
{
    _instanceLogger = std::move(instanceLogger);
}

