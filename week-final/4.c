/* Peter Jolankai's final exam code
** 4:Create a function that returns how many characters are in a string without using `strlen()``
*/

#include <stdio.h>

int main()
{
char array[20] = {NULL};
strcpy(array, "abcdABCD012340000");

int count_of_capitals = 0;
int count_of_lowercase = 0;
int count_of_numbers = 0;

    for(int i=0; i < sizeof(array) - 1; i++){
        if (array[i] >= 'A' && array[i] <= 'Z')
            count_of_capitals ++;
        else if (array[i] >= 'a' && array[i] <= 'z')
            count_of_lowercase  ++;
        else if (array[i] >= '0' && array[i] <= '9')
            count_of_numbers ++;
        printf("%c", array[i]); //test print array
    }

printf( "\nIn this array the number of all elements: %d \n\n",count_of_capitals + count_of_lowercase + count_of_numbers);
printf( "\nIn this array the number of characters: %d \n\n",count_of_capitals + count_of_lowercase);
printf( "In this array the number of capital letters: %d \n", count_of_capitals);
printf( "In this array the number of lowercase letters: %d \n", count_of_lowercase);
printf( "In this array the number of numeric elements: %d \n", count_of_numbers);

return 0;
}


