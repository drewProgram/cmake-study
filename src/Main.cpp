#include <iostream>

#include "TestConfig.h"

#ifdef USE_MYMATH
    #include "MathFunctions.h"
#endif

double Sum(double n1, double n2)
{
    std::cout << "Function without lib" << std::endl;
    return n1 + n2;
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        // report version
        std::cout << argv[0] << " Version " << Test_VERSION_MAJOR << "." 
            << Test_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number\n" << std::endl;
    }

    std::cout << "Hello world!" << std::endl;
    
    double n1;
    double n2;

    std::cout << "Write a number: ";
    std::cin >> n1;
    std::cout << "Write another number: ";
    std::cin >> n2;

    #ifdef USE_MYMATH
        const double outputValue = Functions::Sum(n1, n2);
    #else
        const double outputValue = Sum(n1, n2);
    #endif

    std::cout << "The sum of those number is: " << outputValue << std::endl;

    return 0;
}