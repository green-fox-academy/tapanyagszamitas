#include <stdio.h>
#include <stdlib.h>


int main()
{
    srand(time(NULL));

    int array_of_five[5]= {1,2,3,4,5};

    int l = 0;
    for (l = 0; l < 5; l++)
    {
        array_of_five[l] = rand()/100;
    }

    int g =0;
    for( g =0; g < 5; g++)
    {
        printf("%d ", array_of_five[g]) ;
    }

    printf("\n");

    int temp = 0;
    /*
        temp = array_of_five[4];

        array_of_five[4] = array_of_five[0];

        array_of_five[0] = temp;


        temp = array_of_five[3];

        array_of_five[3] = array_of_five[1];

        array_of_five[1] = temp;
    */
    int s = 0;
    int s2 = 0;

    s = sizeof(array_of_five)/sizeof(array_of_five[0]);
    s2 = sizeof(array_of_five)/sizeof(array_of_five[0]);

    printf("\n\n+++ %d ++++", s);

    int i = 0;
    int j = 0;
    for (i = 0, j = s2; i< s/2 && j > s2/2; i++, j--)

    {
        temp = array_of_five[j-1];
        array_of_five[j-1] = array_of_five[i];
        array_of_five[i] = temp;
    }

    int k =0;
    for( k =0; k < 5; k++)
    {
        printf("%d ", array_of_five[k]) ;
    }

    return 0;
}


/*
 * Create an array of 5 integers.
 * Fill it with random integer numbers.
 * Print out the array elements in one line, divided by " | ".
 * Reverse the order of the numbers _in_the_array_ an print them out again.
 */


