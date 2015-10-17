#ifndef WINDOWS_CALCULATOR_H
#define WINDOWS_CALCULATOR_H

#include "AbstractCalculator.h"

class WindowsCalculator : public AbstractCalculator
{
public:
    WindowsCalculator();
    float Summary(float x, float y) const override;
    float Substraction(float x, float y) const override;
    float Multiplication(float x, float y) const override;
    float Division(float x, float y) const override;

private:
    WindowsCalculator(const WindowsCalculator &) = delete;
    WindowsCalculator(WindowsCalculator &&) = delete;
};

#endif //WINDOWS_CALCULATOR_H
