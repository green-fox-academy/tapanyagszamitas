#include <stdio.h>
#include <math.h>
void square();
/*Write a program in C to find the square of any number using the function.
example :
Input any number for square : 20
Expected Output : 400*/

int main()
{



square();

return 0;
}

void square()
{


int a = 0;
int b = 0;

a = 8;

printf("Please enter a number to sqare it\n");
scanf ("%d", &a);


b = pow(a,2);

printf("%d \n", b);

return 0;
}
