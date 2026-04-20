#include "Calculator.h"
#include <stdexcept>

int Calculator::multiply(int a, int b)
{
    return a * b;
}

int Calculator::divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("Division by zero");
    }
    return a / b;
}