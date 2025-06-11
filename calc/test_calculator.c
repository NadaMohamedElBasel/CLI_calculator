//
// Created by Admin on 6/2/2025.
//
#include <assert.h>
#include "calculator.h"
#include <stdio.h>

int main()
{
    printf("Running C unit tests...\n");
    assert(add(1, 2) == 3);
    assert(add(-5, -10) == -15); // Negative numbers
    assert(add(0, 0) == 0); // Zero
    assert(add(2147483647, 0) == 2147483647); // Large int max edge case

    assert(sub(5, 2) == 3);
    assert(sub(-5, -10) == 5);
    assert(sub(0, 0) == 0);

    assert(mul(3, 4) == 12);
    assert(mul(-3, 4) == -12);
    assert(mul(0, 100) == 0);
    assert(mul(100000, 100000) == 10000000000LL); // Large multiplication

    assert(divide(10.0, 2.0) == 5.0f);

    printf("All C tests passed!\n");
    return 0;
}
