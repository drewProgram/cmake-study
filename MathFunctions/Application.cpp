#include "MathFunctions.h"

#include <iostream>

namespace Functions {
    double Sum(double n1, double n2)
    {
        std::cout << "Function from lib" << std::endl;
        return n1 + n2;
    }

    double Substraction(double n1, double n2)
    {
        return n1 - n2;
    }
}