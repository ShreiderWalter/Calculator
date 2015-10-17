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
    while(1)
    {
        std::cout << "======Calculator======\n";
        std::cout << "Enabled operations are:\n";
        std::cout << "sum arg1 arg2\n";
        std::cout << "sub arg1 arg2\n";
        std::cout << "mul arg1 arg2\n";
        std::cout << "div arg1 arg2\n";
        std::cout << "q = quit\n";

        std::string str;
        std::cin >> str;
        float x = 0.0f, y = 0.0f;
        if("sum" == str)
        {
            std::cout << "put in two args of binary operation\n";
            std::cin >> x >> y;
            std::cout << calculator->Summary(x, y) << "\n";
        }
        else if("sub" == str)
        {
            std::cout << "put in two args of binary operation\n";
            std::cin >> x >> y;
            std::cout << calculator->Substraction(x, y) << "\n";
        }
        else if("mul" == str)
        {
            std::cout << "put in two args of binary operation\n";
            std::cin >> x >> y;
            std::cout << calculator->Multiplication(x, y) << "\n";
        }
        else if("div" == str)
        {
            std::cout << "put in two args of binary operation\n";
            std::cin >> x >> y;
            std::cout << calculator->Division(x, y) << "\n";
        }
        else if("q" == str)
        {
            return 0;
        }
        else
        {
            std::cout << "Wrong param\n";
        }
    }
    return 0;
}

