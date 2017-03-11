#include <iostream>
#include "InstanceLogger.h"
#include "InstanceContainer.h"

int main() {
    std::cout << "Hello, Instance Logger" << std::endl;

    {
        std::cout << "Define Instance logger" << std::endl;
        auto myInstLogger = std::make_shared<InstanceLogger>();

        std::cout << "Define Instance Container" << std::endl;
        InstanceContainer myInstContainer;

        std::cout << "Pass by Value" << std::endl;
        myInstContainer.PassByValue(myInstLogger);

        std::cout << "Pass by Reference" << std::endl;
        myInstContainer.PassByValue(myInstLogger);

        myInstContainer.ShareObject(myInstLogger);
        std::cout << "Instance Logger pointer after sharing " << std::to_string(long(myInstLogger.get())) << std::endl;

        myInstContainer.TakeObject(myInstLogger);
        std::cout << "Instance Logger pointer after taking " << std::to_string(long(myInstLogger.get())) << std::endl;
    }
    std::cout << "Exited Instance defined scope" << std::endl;

    {
        std::cout << "Define Unique pointer instance" << std::endl;
        std::unique_ptr<InstanceLogger> initialUniqueInstance(new InstanceLogger);

        std::cout << "Compiler error without std::move " << "\""
        "std::unique_ptr<InstanceLogger> newOwnerWithoutMove = initialUniqueInstance;\" " << std::endl;
        std::cout << "After reassigning ownership without move " << std::to_string(long(initialUniqueInstance.get())) << std::endl;

        std::unique_ptr<InstanceLogger> newOwnerWithMove = std::move(initialUniqueInstance);
        std::cout << "After reassigning ownership with move " << std::endl;
        std::cout << "  Moved From ponter: " << std::to_string(long(initialUniqueInstance.get())) << std::endl;
        std::cout << "  Moved to pointer: " << std::to_string(long(newOwnerWithMove.get())) << std::endl;
    }
    std::cout << "Exited Unique pointer Instance defined scope" << std::endl;

    return 0;
}