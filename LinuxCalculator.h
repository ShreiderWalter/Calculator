#ifndef LINUX_CALCULATOR_H
#define LINUX_CALCULATOR_H

#include "AbstractCalculator.h"


class LinuxCalculator : public AbstractCalculator
{
public:
    LinuxCalculator();
    float Summary(float x, float y) const override;
    float Substraction(float x, float y) const override;
    float Multiplication(float x, float y) const override;
    float Division(float x, float y) const override;

private:
    LinuxCalculator(const LinuxCalculator &) = delete;
    LinuxCalculator(LinuxCalculator &&) = delete;
};

#endif //LINUX_CALCULATOR_H
