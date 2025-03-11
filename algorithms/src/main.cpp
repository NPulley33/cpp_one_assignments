#include <iostream>
#include "../include/algo.hpp"

unsigned long fib_iterative(const unsigned long n) {
    unsigned long prev = 1;
    unsigned long prev_prev = 0;
    unsigned long sum = 0;
    for (int i = 2; i < n; i++) {
        sum = prev + prev_prev;
        prev_prev = prev;
        prev = sum;
    }
    return sum;
}

auto main(int argc, char *argv[]) -> int {
    long y = fib_iterative(5);
    std::cout << y << std::endl;
    return 0;
}
