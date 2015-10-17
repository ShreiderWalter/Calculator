#include "WindowsCalculator.h"

WindowsCalculator::WindowsCalculator() {}

WindowsCalculator::Summary(float x, float y) const
{
    float res = 0.0f;
    __asm
    {
        fld x
        fld y
        faddp st(1), st(0)
        fstp res
    }

    return res;
}

WindowsCalculator::Substraction(float x, float y) const
{
    float res = 0.0f;
    __asm
    {
        fld x
        fld y
        fsubp st(1), st(0)
        fstp res
    }

    return res;
}

WindowsCalculator::Multiplication(float x, float y) const
{
    float res = 0.0f;
    __asm
    {
        fld x
        fld y
        fmulp st(1), st(0)
        fstp res
    }

    return res;
}

WindowsCalculator::Division(float x, float y) const
{
    float res = 0.0f;
    __asm
    {
        fld x
        fld y
        fdivp st(1), st(0)
        fstp res
    }

    return res;
}
