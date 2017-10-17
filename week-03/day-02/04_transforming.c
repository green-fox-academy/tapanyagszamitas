#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float val;
	char str[5];
	strcpy(str, "3.14");

	puts(str);

    val = atof(str);
    printf("%f ", val);
   


	//TODO: print out the value of pi, first as a string, then a float value.

	return(0);
}
