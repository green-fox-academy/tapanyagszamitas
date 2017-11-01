#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"
// Create a function called `printer`
// which prints the input parameters
// can have multiple number of arguments
// store your variables in a .h file

int main()
{

    printer(a,b,c);

    return 0;
}

void printer (int number1, int number2, int number3)
{
    printf( "three numbers %d, %d, %d, \n", number1 ,number2, number3);
}

