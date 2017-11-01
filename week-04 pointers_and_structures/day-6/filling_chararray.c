#include <stdio.h>

int main()
{
    char screen_array[100];
    for(int i = 65; i < 90; ++i)
    {
        screen_array[i] = i;
    }
    for(int i = 65; i < 90; ++i)
    {
        printf("%c \n", screen_array[i]+32);
    }
    printf("\n");


    return 0;
}
