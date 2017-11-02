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
 * If the array is too small, create a new one, copy everything into it, add the new element and delete the old array.
 *
 * Test in the main function whether everything works.
 */

typedef struct storage
{
    int array[50];
    int counter;
};

void add_last_number( struct storage storage1 );


int main()
{

    struct storage storage1;

    storage1.counter = 0;
    printf("enter how many numbers you want to store in a row:\n");
    scanf("%d", &storage1.counter);

    for(int i = 0; i <  storage1.counter ; i++)
    {
        (storage1.array[i] = i+1);
        printf("\n %d, %d", storage1.array[i], i);
    }
    printf("\n\nstorage1.counter %d\n\n", storage1.counter);

    add_last_number(storage1);

    for(int k = 0; k <  storage1.counter ; k++)
    {
        printf("\n %d, %d", storage1.array[k], k);
    }
    printf("\n\nstorage1.counter %d\n\n", storage1.counter);






    return 0;
}

void add_last_number( struct storage storage1)
{



    int input_value = 0;

    printf("\nEnter a new number to the end of the row\n");


    scanf("%d", &input_value);


    storage1.array[storage1.counter] = input_value;
    storage1.counter++;

    printf("\n\n counter %d\n\n", storage1.counter);


    printf("\n\n=============\n\n");


    for(int j = 0; j <  storage1.counter ; j++)
    {
        printf("\n %d, %d", storage1.array[j], j);
    }

}

