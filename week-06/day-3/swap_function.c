#include <stdio.h>
/* practice to swap two integrs in a function*/

void swap_function(int *a, int *b);

int main()
{
    int a = 5;
    int b = 3;

    printf("The original state is a= %d, b = %d\n\n", a,b);

    swap_function(&a,&b);

    printf("The result aftes swap state is a= %d, b = %d\n\n", a,b);


    return 0;
}

void swap_function(int *a, int *b)
{

    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

}
