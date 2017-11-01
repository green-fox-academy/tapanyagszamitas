/*
 * Create a function that takes an array of integers as an argument (a pointer) and it's length as an unsigned integer.
 * The function should sort the elements of the array in ascending order.
 *
 * Print it out before and after to be able to check whether it works as supposed.
 */

#include <stdio.h>
#include <stdlib.h>

void bubble(int size, int *array_of_dozen);

int main()
{
    srand(time(NULL));

    int array_of_dozen[12]= {12,11,10,9,8,7,6,5,4,3,2,1};

    int size = 0;

    size = sizeof(array_of_dozen)/sizeof(array_of_dozen[0]);

    int i = 0;
    for (i = 0; i < size; i++)
    {
        array_of_dozen[i] = rand()/100;
        printf("%d ", array_of_dozen[i]);
    }

    printf("\n values of the array after filling with random numbers\n\n");

    bubble(size,array_of_dozen);

    for (i = 0; i < size; i++)
    {

        printf("%d ", array_of_dozen[i]);
    }
 printf("\n values of the array after bubble sort in a function\n");

    return 0;
}

void bubble(int size, int *array_of_dozen)
{
    int j=0;
    int k =0;
    int swap = 0;
    for (j =0; j < size-1; j++)
    {
        for (k = 0; k < size-j-1; k++)
        {
            if (array_of_dozen[k] > array_of_dozen[k+1])
            {
                swap       = array_of_dozen[k];
                array_of_dozen[k]   = array_of_dozen[k+1];
                array_of_dozen[k+1] = swap;
            }
        }
    }

}
