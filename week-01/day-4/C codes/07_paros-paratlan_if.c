#include <stdio.h>
#include <stdlib.h>

/*
create a simple program which checks if the num is odd or even
*/

int main()
{
    int num;
    num = 11;

    if (num % 2 != 0)
        printf("this is odd number");
    else
        printf("this is an even number");


    return 0;
}
