#include <stdio.h>
#include <stdlib.h>

/*
write a program to check whether a given number is positive or negative
*/

int main()
 {
	int a = 212;
	int b = 0;

	if (a > b)
        printf("%d is positive", a);
	else if (a < b)
        printf("%d negative", b);
	else
        printf("%d equal to %d", a, b);
	
	return 0;
}