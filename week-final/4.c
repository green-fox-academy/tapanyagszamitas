/* Peter Jolankai's final exam code
** 4:Create a function that returns how many characters are in a string without using `strlen()``
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int array_length = 20;
char array[array_length] = {NULL};
strcpy(array, "abcdABCD012340000");

int count_of_capitals = 0;
int count_of_lowercase = 0;
int count_of_numbers = 0;

    for(int i=0; i<=array_length-1; i++){
    if (array[i] >= 'A' && array[i] <= 'Z')
        count_of_capitals ++;
    else if (array[i] >= 'a' && array[i] <= 'z')
        count_of_lowercase  ++;
    else if (array[i] >= '0' && array[i] <= '9')
        count_of_numbers ++;

    printf("%c", array[i]);
    }

printf( "\nIn this array the number of characters is: %d \n\n",count_of_capitals + count_of_lowercase);
printf( "In this array the number of capital letters is: %d \n", count_of_capitals);
printf( "In this array the number of lowercase letters is: %d \n", count_of_lowercase);
printf( "In this array the number of numeric elements is: %d \n", count_of_numbers);

}


