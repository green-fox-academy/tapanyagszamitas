#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int x, y;
	x = 5;
	y = 8;

	//TODO: write a function which swaps the values of x and y. Then print out the values of x and y.
    swap(&x, &y);

    printf("After Swapping\nx = %d\ny = %d\n", x, y);

	return 0;
}
void swap(int *a, int *b){

int     c = *a;
        *a = *b;
        *b = c;
}
