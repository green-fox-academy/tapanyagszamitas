/*
 * Create an array of integers. Make it 10 long at least. Fill it up with numbers - random or toherwise - as You wish.
 * Iterate over this array using a pointer. Print out it's elements.
 */
#include <stdio.h>

int main()
{
    int integers[20];
    int *apointer = integers;
    int i = 0;

    for(i=0; i<= 20; i++)
    {
        *apointer = i;
        apointer++;
    }

    apointer = apointer - 20;

    int j = 0;
    while (j < 20)
    {
        printf("integers[%d]: %d\n\n", j, *apointer);
        j++;
        apointer++;
    }


    return 0;
}
