#include <stdio.h>
#include <stdlib.h>

/*
 * Create a function that takes two arrays of characters and a number.
 * It should replace the contents of the first array from the given index
 * with the contents of the second array.
 * The function should return a number which tells whether it was successful:
 *    * If all is right it should return 0.
 *    * If the index is out of bounds it should return -1.
 *    * If the inserted content would be longer than the receiving array it should return 1 and leave the array as it is.
 * IMPORTANT: Think about what kind of arguments You need to make this happen and craft the function accordingly.
 *
 * Write code in the main function to test all scenarios and write out the result You need to check whether this works.
 */
void array_cutter_and_changer(char *array1, char *array2, int a_number);

int main()
{
    char array1[20] = "csatahajo_kikoto";
    char array2[20] = "vitorlazorepulogep";
    int a_number = 10;

    array_cutter_and_changer(array1, array2, a_number);

    return 0;
}
void array_cutter_and_changer(char *array1, char *array2, int a_number)
{
    int sizear1 =0;
    int sizear2 =0;
    sizear1 = sizeof(array1)/sizeof(array1[0]);
    sizear2 = sizeof(array2)/sizeof(array2[0]);

    if (sizear1 > sizear2)
    {
        return 1;
    }
    else if (a_number < sizear1)
        {
    return -1;
        }

int i =0;
for( i = a_number; i<20; i++)
    {
        array2[i] = array1[i];
    }

    int j =0;
    for( j = 0; j<20; j++)
    {
        printf("\n a1 %c       a2 %c ", array1[j], array2[j]);
    }


return 0;
}
