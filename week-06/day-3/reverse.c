#include <stdio.h>
#include <stdlib.h>

/* Create a function that can reverse a string (char array)
 * It should take the string as a parameter and prints out
 * the reversed string.
 *
 *  Example:
 * input:  reverse_string("Green Fox")
 * output: xoF neerG
 *
 * In case of invalid parameter (integers) the function should
 * print out : "invalid parameter"
 */
void arr_reverse(char *array, int s);

int main()
{
    char array[10]= "Green Fox";
    printf("original state :\n %s \n\n", array);
    int s =sizeof(array)/sizeof(array[0]);
    arr_reverse(array, s);
    printf("\n\nreversed state");
    for(int k=0; k<=10; k++){
        ( printf("%c", array[k]));
    }
}

void arr_reverse( char *array, int s)
{
    int temp =0;
    for(int i=0; i<= s/2; i++){
        temp = array[i];
        array[i] = array[s-i];
        array[s-i] = temp;
    }
}

