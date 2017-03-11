//
// Created by demo on 3/11/17.
//

#ifndef CPP11MOVE_INSTANCECONTAINER_H
#define CPP11MOVE_INSTANCECONTAINER_H

#include <memory>
#include "InstanceLogger.h"

class InstanceContainer {
public:
    InstanceContainer();

    void ShareObject(const std::shared_ptr<InstanceLogger>& instanceLogger);

    void TakeObject(const std::shared_ptr<InstanceLogger>& instanceLogger);

private:
    std::shared_ptr<InstanceLogger> _instanceLogger;
};


#endif //CPP11MOVE_INSTANCECONTAINER_H
