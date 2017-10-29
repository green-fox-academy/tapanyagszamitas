//---------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b);
int main()
{
    int a = 0;
    int b = 0;
    printf(" Please enter the first number\n");
    scanf("%d", &a);
    printf(" Please enter the second number\n");
    scanf("%d", &b);

    //printf("check: %d, %d \n", a, b);
    sum(a,b);
    //get two number with scanf
    //calculate their sum with the function
    printf("summation with function the result is : %d \n", sum(a,b));

    return 0;
}
int sum(int a,int b)
{
    int c = 0;
    c = a + b; //it should return with the sum
    return;
}
//---------------------------------------------------------------------------------------------------------------------
//write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120)
//---------------------------------------------------------------------------------------------------------------------
