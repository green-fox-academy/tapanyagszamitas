//---------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int sum(void); //function declaration

int main()
{
    sum();
    printf("Sum with function %d", sum());
//    printf("Sum with function %d", c);//print out your sum
    return 0;
}

int sum(void) // function definition
{
    int a=10000;
    int b=20000;
    int c = 0;
    c = a + b;

    //return with their sum
    return;
}

