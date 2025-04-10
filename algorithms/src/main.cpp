#include <iostream>
#include "../include/algo.hpp"

typedef long long longest;
typedef unsigned long positive_long_only;

positive_long_only fib_iterative(const positive_long_only n)
{
    positive_long_only prev = 1;
    positive_long_only prev_prev = 0;
    positive_long_only sum = 0;
    for(positive_long_only i = 2; i <= n; i++)
    {
        sum = prev + prev_prev;
        prev_prev = prev;
        prev = sum;
    }
    return sum;
}

int main() {
    
    return 0;
}
