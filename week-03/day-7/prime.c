#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
Write a program in C to check whether a number is a prime number or not using the function.
example :
Input a positive number : 5
Expected Output :

The number 5 is a prime number.


*/
main()
{
   int n = 0;
   int c = 2;

   printf("Enter a number to check if it is prime\n");
   scanf("%d",&n);

   for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
      {
         printf("%d is not a prime number.\n", n);
	 break;
      }
   }
   if ( c == n )
      printf("%d is a prime number.\n", n);

   return 0;
}




