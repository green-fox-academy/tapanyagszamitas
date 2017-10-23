#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap()
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

swap();

return 0;
}
void swap(a, b){

printf("Please enter the first number (a)\n");
scanf("%d", &a);
printf("Please enter the second number (b)\n");
scanf("%d", &b);

printf(" a = %d, b = %d\n", a, b);

printf(" Let's swap them");

a = a + b;
b = a - b;
a = a - b;

printf("after swap\n a = %d, b = %d\n", a, b);
}
