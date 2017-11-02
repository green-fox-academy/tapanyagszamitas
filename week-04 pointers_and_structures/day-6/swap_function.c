#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int swap(int , int );
int swap2(int , int );
/*Write a program in C to swap two numbers using function.
example :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2
*/

int main(){


int a = 0;
int b = 0;



printf("Please enter the first number (A)\n");
scanf("%d", &a);
printf("Please enter the second number (B)\n");
scanf("%d", &b);


printf(" a = %d, b = %d\n", a, b);

int g = swap(a, b);
int f = swap2(a, b);

printf("\n\n\n A erteke:%d B erteke: %d", g, f);

return 0;

}
int swap(int a, int b){

printf(" Let's swap them");

a = a + b;
b = a - b;
a = a - b;

return (a);
}

int swap2(int a, int b){

printf(" Let's swap them");

a = a + b;
b = a - b;
a = a - b;

return (b);
}
