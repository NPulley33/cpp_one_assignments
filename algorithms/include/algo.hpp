#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"
#include <iostream>
#include <string>

long fibonacci(const int n)
{
    //std:cout << n << std::endl;
    if (n == 0 || n ==1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
    //return 0;
}

int linear_search(Array * a, const int target)
{
    for (size_t i = 0; i < a->len; i++)
    {
        if (a->data[i] == target) return i;
    }
    return -1;
}

long factorial(const int n)
{
    //long result = n;
    //for (int i = n; i > 1; i--)
    //{
    //    result *= (i-1);
    //}
    //return result;

    if(n == 0) return 1;
    else return n * factorial(n - 1);
}

#endif // ALGO_H_
