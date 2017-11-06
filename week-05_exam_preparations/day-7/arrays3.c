#include <stdio.h>
#include <stdlib.h>


//fill and print out abc from a to z, and A to Z in a function with pointers


void arr_printer( char *abc);

int main()
{

    char abc[26]="";
    arr_printer(abc);
    return 0;
}

void arr_printer(char *abc)
{
    int i = 0;
    for( i = 97; i <= 122; i++)
    {
        abc[i]= i;
        printf("%c",abc[i]);
    }

    printf("\n");

    int j = 0;
    for( j = 65; j <= 90; j++)
    {
        abc[j]= j;
        printf("%c",abc[j]);
    }


}

