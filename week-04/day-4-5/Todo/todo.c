#include "headertodo.h"




int main()
{
menu();

char data_input[100]= " "; //
char array1[100] = " "; //operator
char array2[100] = " ";// command
gets(data_input);

//
sscanf( data_input, "%s %s", array1, array2);
       printf(" input check array1 %s\n", array1);
       printf(" input check array2 %s\n", array2);




if (!strcoll(array1, "-a"))
    { printf(" input check array1 %s\n", array1);
       printf(" input check array2 %s\n", array2);


    }else   {
        printf( " egyeb");

    }


    return 0;
}
