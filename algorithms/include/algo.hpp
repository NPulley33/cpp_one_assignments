#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

long fibonacci(const int n)
{
    return 0;
}

int linear_search(Array * a, const int target)
{
    return 0;
}

long factorial(const int n)
{
    long result = n;
    for (int i = n; i > 1; i--)
    {
        result *= (n-1);
    }
    return result;
}

#endif // ALGO_H_
