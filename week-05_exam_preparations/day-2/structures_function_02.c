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

typedef struct
{
    int array[50];
    int counter;
} storage;

void add_last_number( storage *storage1, int input_value);
void get_a_number( storage *storage1, int get_index, int *back_index_position);
void changing_number(storage *storage1, int *return_value_after_change, int change_pos, int change_number);

int main()
{

    storage storage1;

    storage1.counter = 0;
    printf("enter how many numbers you want to store in a row:\n");
    scanf("%d", &storage1.counter);

    for(int i = 0; i <  storage1.counter ; i++)
    {
        (storage1.array[i] = i+1);
        printf("\n %d, %d", storage1.array[i], i);
    }
    printf("\n\nstorage1.counter %d\n\n", storage1.counter);


    /*
        int input_value = 0;

        printf("\nEnter a new number to the end of the row\n");

        scanf("%d", &input_value);




        add_last_number(&storage1, input_value);

        for(int k = 0; k <  storage1.counter ; k++)
        {
            printf("\n %d, %d", storage1.array[k], k);
        }
        printf("\n\nstorage1.counter %d\n\n", storage1.counter);

    */


    int get_index = 0;
    int back_index_position =0;
    printf("\n Please enter a number what you need from the struct\n");
    scanf("%d", &get_index);

    get_a_number(&storage1, get_index, &back_index_position );

    for(int m = 0; m <  storage1.counter ; m++)
    {
        printf("\n %d, %d", storage1.array[m], m);
    }
    printf("\n\nstorage1.counter %d\n\n", storage1.counter);
    printf("\n get index return value %d", back_index_position);


    int change_pos = 0;
    int change_number = 0;
    int return_value_after_change = 0;
    printf("\nplease enter the position you want to change\n");
    scanf("%d", &change_pos);
    /*
        if (change_pos >  storage1.counter)
        {
            printf("\n\nsorry, no such a number");
        }
        else {

        }*/
    changing_number(&storage1, &return_value_after_change, change_pos, change_number);

    printf("return value %d", return_value_after_change);

    return 0;
}

void add_last_number( storage *storage1, int input_value)
{


    storage1->array[storage1->counter] = input_value;
    storage1->counter++;

    printf("\n\n counter %d\n\n", storage1->counter);


    printf("\n\n=============\n\n");


    for(int j = 0; j <  storage1->counter ; j++)
    {
        printf("\n %d, %d", storage1->array[j], j);
    }

}

void get_a_number( storage *storage1, int get_index, int *back_index_position)
{

    *back_index_position = storage1->array[get_index-1] ;

}

void changing_number(storage *storage1, int *return_value_after_change, int change_pos, int change_number)
{
    storage1->array[change_pos-1] = change_number;
    *return_value_after_change = change_number;

}


