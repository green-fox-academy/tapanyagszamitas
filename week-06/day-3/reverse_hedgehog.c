#include <string.h>

void arr_reverse_and_print(char *array);

int main()
{
    char array[10]= "Green Fox";
    arr_reverse_and_print(array);
}

void arr_reverse_and_print(char *array)
{
    int length = strlen(array);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", array[i]);
    }
}
