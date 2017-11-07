/*
 * Create an array of integers. Make it 16 long. Fill itnup with numbers as You wish. Print them out.
 *     * Iterate over it with a pointer so, that You only get to each _second_ element. Print out only these.
 *     * Iterate over it only touching each _fourth_ element. Print out only these.
 *     * Iterate over it only touching each _eighth_ element. Print out only these.
 */
#include <stdio.h>
#define SIZE 16
int main()
{
    int array[SIZE];
    int *p= array;
    for(int i = 0; i<=SIZE; i++) {
        array[i]=i;
    }

    for(int j = 0; j<=SIZE; j++){
        printf("% d", array[j]);
    }

    printf("\n\n\n");


    for(int k =0; k<=SIZE; k+=2){
        printf("\n%d", *p);
        p+=2;
    }

    printf("\n\n\n");
    p = p-SIZE-2;
    for(int k =0; k<=SIZE; k+=4) {
        printf("\n%d", *p);
        p+=4;
    }

printf("\n\n\n");
    p = p-SIZE-4;
    for(int k =0; k<=SIZE; k+=8){
        printf("\n%d", *p);
        p+=8;
    }

    return 0;
}
