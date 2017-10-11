#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// create a function which returns the power of a base number


int main()
{
    int base = 2;
    int exponent = 3;
    long long result = 1;

    while (exponent != 0)
{
    result = result * base;
    exponent--;
}
    printf("%d", result);
    return 0;
}