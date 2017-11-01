#include <stdio.h>
#include <stdlib.h>


int main()
{
    srand(time(NULL));

    int array_of_five[5]= {1,2,3,4,5};

    int array_of_seven[7]= {1,2,3,4,5,6,7};

    int i = 0;
    for (i = 0; i < 5; i++)
    {
        array_of_five[i] = rand()/100;
    }

    int s5 = 0;
    int s7 = 0;

    s5 = sizeof(array_of_five)/sizeof(array_of_five[0]);
    s7 = sizeof(array_of_five)/sizeof(array_of_five[0]);

    int j= 0;
    for(j=0; j<s7; j++)
    {
        array_of_seven[j+1] = array_of_five[j];
    }
    int a = 42;
    array_of_seven[6]= a;
    array_of_seven[0]= a;


    int k =0;
    for( k =0; k < 7; k++)
    {
        printf("%d ", array_of_seven[k]) ;
    }

    return 0;
}


/*
 * Create an array of 5 integers, fill it with random numbers.
 * Create an other of 7 integers.
 * Copy the contents of the first array into the second one in a way,
 * that the first and the last numbers of the second array are both 42,
 * and it contains all the elements of the first array.
 */
