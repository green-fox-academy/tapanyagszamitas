#include <stdio.h>
#include <stdlib.h>


int main()
{
    srand(time(NULL));

    int array_of_dozen[12]= {1,2,3,4,5,6,7,8,9,10,11,12};

    int s12 = 0;

    s12 = sizeof(array_of_dozen)/sizeof(array_of_dozen[0]);

    int i = 0;
    for (i = 0; i < s12; i++)
    {
        array_of_dozen[i] = rand()/100;
        printf("%d ", array_of_dozen[i]);
    }

    int j=0;
    int k =0;
    int swap = 0;
    for (j =0; j < s12-1; j++)
    {
        for (k = 0; k < s12-j-1; k++)
        {
            if (array_of_dozen[k] > array_of_dozen[k+1])
            {
                swap       = array_of_dozen[k];
                array_of_dozen[k]   = array_of_dozen[k+1];
                array_of_dozen[k+1] = swap;
            }
        }
    }



printf("\n-----------------------------------\n");

    int b = 0;
    for (b= 0; b < s12; b++)
    {
               printf("%d ", array_of_dozen[b]);
    }



printf("\n------------------------------------\n");


    return 0;
}

/*
 * Create an array of 12 integers. Fill it with random numbers.
 * Sort them in ascending order using bubble sort. -- Google it if You don't know it. (It's easy)
 * Print out the numbers before and after the sorting.
 */
