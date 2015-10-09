#ifndef ABSTRACT_CALCULATOR_H
#define ABSTRACT_CALCULATOR_H

#include <memory>
#include <iostream>

class AbstractCalculator
{
public:
    static AbstractCalculator * GetInstance();

    virtual float Summary(float x, float y) const = 0;
    virtual float Substraction(float x, float y) const = 0;
    virtual float Division(float x, float y) const = 0;
    virtual float Multiplication(float x, float y) const = 0;

protected:
    AbstractCalculator();

private:
    AbstractCalculator(const AbstractCalculator &) = delete;
    AbstractCalculator(AbstractCalculator && )= delete;

private:
    static AbstractCalculator * m_instance;
};

#endif //ABSTRACT_CALCULATOR_H
