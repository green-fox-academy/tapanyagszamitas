#include <stdio.h>
#include <stdlib.h>
int sum(int c); //function declaration
int main()
{
    int c = 0;
    printf(" the result of a + b is %d", sum(c));
    //print out your sum
    return 0;
}
int sum( int c) // function definition
{
    int a=10000;
    int b=20000;
    c = a +b;//return with their sum
    return c;
}
