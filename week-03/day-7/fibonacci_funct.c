#include<stdio.h>
void fibonacci();

int main()
{
   int n, first = 0, second = 1, next, c;
    printf("Enter a number\n");

    scanf("%d", &n);
    fibonacci(n,first,second,next,c);

    return 0;
}

void fibonacci(int n, int first, int second, int next, int c){
printf("the %d. th number of Fibonacci series is \n",n);

    for ( c = 0 ; c < n ; c++ )
    {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }

    }
    printf("%d\n",next);

}
