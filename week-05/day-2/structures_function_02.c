#include <stdio.h>
#include <stdlib.h>

/*
 * Create a structure to represent a list of numbers. The structure should know how many number it has stored.
 * Store the numbers in an array.
 * Create functions to:
 *    * Add a new number at the end.
 *    * Get a number at a given index.
 *    * Replace a number at a given index if it exists.
 *
 * If the array is too smal, create a new one, copy everything into it, add the new element and delete the old array.
 *
 * Test in the main function whether everything works.
 */

struct storage
{
    int array[50];
    int a;
};

int main()
{


    struct storage macko;

   int h = 0;
    for(h = 0; h< 50; h++)
    {
        macko.array[h] = 0;
        printf("\n%d", macko.array[h] );
    }


    int i = 0;
    for(i = 0; i< 30; i++)
    {
        macko.array[i] = i+1 ;
        printf("\n%d", macko.array[i] );
    }

    macko.a = sizeof(macko.array)/sizeof(macko.array[0]);
    int count = 0;
    int j = 0;
    for(j = 0; j< macko.a; j++)
    {
        if(macko.array[j] != 0)
        {
            count = count+1;
        }
    }

    printf("\n count %d", count);


printf("\n\n a size %d", macko.a);




return 0;
}
