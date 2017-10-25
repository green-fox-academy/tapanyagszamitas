#include <stdio.h>

void calc(int x, int y, int *p_sum, int *p_mul);

int main()
{
	int x, y;
	x = 4;
	y = 8;

	int sum, mul;

    calc(x, y, &sum, &mul);

    printf(" sum %d, mul %d \n", sum, mul );
//TODO: write a void function which calculates the sum and multiplication
	//of x and y according to the function prototype. Use 'output parameters'. Print out these values.
	return 0;
}

void calc(int x, int y, int *p_sum, int *p_mul){

*p_sum = x + y;
*p_mul = x * y;

}
