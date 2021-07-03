#include <iostream>

#include "TestConfig.h"

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        // report version
        std::cout << argv[0] << " Version " << Test_VERSION_MAJOR << "." 
            << Test_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number\n" << std::endl;
    }
    
    std::cout << "Hello world!" << std::endl;

    auto number = 10;

    std::cout << "Printing an auto variable: " << number << std::endl;

    std::cin.get();
}