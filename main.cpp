#include <iostream>
#include "AbstractCalculator.h"

#ifdef WIN32
#include "WindowsCalculator.h"
#elif defined __linux__
#include "LinuxCalculator.h"
#endif

using namespace std;

int main()
{
    AbstractCalculator * calculator = AbstractCalculator::GetInstance();
    std::cout << calculator->Division(8, 7);
    return 0;
}

