#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b, int c);
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("please enter the value for a\n");
    scanf("%d", &a);
    printf("please enter the value for b\n");
    scanf("%d", &b);

    sum( a,b,c);
    printf(" the sum of a and b is %d\n", sum (a,b,c));

    //get two number with scanf
    //calculate their sum with the function
    return 0;
}
int sum(int a,int b, int c)
{

    c = a + b;

    //it should return with the sum
    return c;
}
