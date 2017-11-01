#include <stdio.h>

int main() {
    int int_array[] = {1, 654, 987, 654, 31};
    float float_array[] = {1.2, 3.14, 1.41, 0.707, 1.73};


    printf("numbers of int_array\n");
    int i;
	for( i=0; i<=4; i++){
        printf("\n %d, ", int_array[i] );
	}
	   printf("\n \n numbers of float_array \n");

    int j;
	for( j=0; j<=4; j++){
        printf(" %.2f, \n", float_array[j] );
	}

	//TODO:
    // Print out the content of the arrays

    return 0;
}
