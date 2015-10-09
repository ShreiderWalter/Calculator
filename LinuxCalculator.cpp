#include "LinuxCalculator.h"

LinuxCalculator::LinuxCalculator() {}

float LinuxCalculator::Summary(float x, float y) const
{
    float result = 0.0f;
    __asm__ ("fld %1;"
             "fld %2;"
             "fadd;"
             "fstp %0;" : "=m" (result) : "m" (x) , "m" (y));
    return result;
}

float LinuxCalculator::Substraction(float x, float y) const
{
    float result = 0.0f;
    __asm__ ("fld %2;"
             "fld %1;"
             "fsub;"
             "fstp %0;" : "=m" (result) : "m" (x) , "m" (y));
    return result;
}

float LinuxCalculator::Multiplication(float x, float y) const
{
    float result = 0.0f;
    __asm__ ("fld %1;"
             "fld %2;"
             "fmul;"
             "fstp %0;" : "=m" (result) : "m" (x) , "m" (y));
    return result;
}

float LinuxCalculator::Division(float x, float y) const
{
    float result = 0.0f;
    __asm__ ("fld %2;"
             "fld %1;"
             "fdiv;"
             "fstp %0;" : "=m" (result) : "m" (x) , "m" (y));
    return result;
}
