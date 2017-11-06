#include <stdio.h>
#include <stdlib.h>

//write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120)


long factorial(int n);

int main()
{
    int n = 0;
    printf("please enter N series for factorial\n");
    scanf("%d", &n);


    factorial(n);


    printf("%d! = %ld\n", n, factorial(n));



    return 0;
}
long factorial(int n)
{

    int c = 0;
    long result = 1;

    for (c = 1; c <= n; c++)
        result = result * c;

    return result;
}
