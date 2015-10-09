#include "AbstractCalculator.h"


#ifdef WIN32
#include "WindowsCalculator.h"
#elif defined __linux__
#include "LinuxCalculator.h"
#endif

AbstractCalculator * AbstractCalculator::m_instance = nullptr;

AbstractCalculator::AbstractCalculator() {}

AbstractCalculator * AbstractCalculator::GetInstance()
{
#ifdef WIN32
    m_instance = new WindowsCalculator;
#elif defined __linux__
    m_instance = new LinuxCalculator;
#endif
    return m_instance;
}
