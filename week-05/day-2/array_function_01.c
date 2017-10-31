/*
 * Create a function that takes an array as argument and it's length. Determine the right data types to do this.
 * This function should order the arguments in ascending order and return this in a new sorted array.
 *
 * Create a second function that takes 3 arguments. An array, it's length and a number it is searching for.
 * The function should return the index of the number when found or -1 if it's not part of the array.
 * IMPORTANT: this function expects a sorted array and uses the strategy we used when we play guess the number.
 *
 *
 * In the main function create an unsorted array filled with random numbers, Make it 50 long.
 * Try 2 scenarios:
 *    * In the first: You pick a random element in the unsorted array and check at which index it is after the array is sorted.
 *    * In the second: You pick a number You are sure is not in the array. Check whether the search function returns the right number.
 * Print out what You need to check these.
 */
#include <stdio.h>
#include <stdlib.h>

void bubble(int size, int *array_50);
int value_search(int size, int search, int *array_50);

int main()
{
    srand(time(NULL));

    int array_50[12]= {12,11,10,9,8,7,6,5,4,3,2,1};

    int size = 0;
    int search = 9;
    int value_coming_back_main = 0;
    size = sizeof(array_50)/sizeof(array_50[0]);


    int i = 0;
    for (i = 0; i < size; i++)
    {
        //  array_50[i] = rand()/100;
        printf("%d ", array_50[i]);
    }

    printf("\n values of the array after filling with random numbers\n\n");

    bubble(size,array_50);

    for (i = 0; i < size; i++)
    {
        printf("%d ", array_50[i]);
    }
    printf("\n values of the array after bubble sort in a function\n");

   value_coming_back_main= value_search(size, search, array_50);

    printf("\nvalue coming back is %d", value_search(size, 7,array_50) );



    return 0;
}

void bubble(int size, int *array_50)
{
    int j=0;
    int k =0;
    int swap = 0;
    for (j =0; j < size-1; j++)
    {
        for (k = 0; k < size-j-1; k++)
        {
            if (array_50[k] > array_50[k+1])
            {
                swap       = array_50[k];
                array_50[k]   = array_50[k+1];
                array_50[k+1] = swap;
            }
        }
    }

}


int value_search(int size, int search,  int *array_50)
{
    int value_coming_back = 0;
    int g = 0;
    for(g = 0; g < size; g ++)
    {
        if( array_50[g] == search)
        {
            printf("\njuhe megvan %d.", g);
            value_coming_back = g;

        }
        else printf("\n%d.",g);


    }
    return value_coming_back;
}

