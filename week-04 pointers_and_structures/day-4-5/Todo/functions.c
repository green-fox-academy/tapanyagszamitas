#include <stdlib.h>
#include "headertodo.h"

typedef struct task
{
    char name[100];
}task;

static task storage[1000];
static int task_count = 0;

data_input()
{
    while (1)
    {

        char data_input[100]= " "; //
        char array1[100] = " "; //operator
        char array2[100] = " ";// input
        char array3[100] = " ";// input
        char array4[100] = " ";// input
        char array5[100] = " ";// input
        char array6[100] = " ";// input
        char array7[100] = " ";// input
        char array8[100] = " ";// input

        gets(data_input);
    // cutting data input to several arrays by whitespaces
        sscanf( data_input, "%s %s %s %s %s", array1, array2, array3, array4, array5, array6, array7);

// unite arrays, putting second arguments after the first.
        strcat(array2, array8);
        strcat(array2, array3);
        strcat(array2, array8);
        strcat(array2, array4);
        strcat(array2, array8);
        strcat(array2, array5);
        strcat(array2, array8);
        strcat(array2, array6);
        strcat(array2, array8);
        strcat(array2, array7);


        if (!strcoll(array1, "-a")) //comparing arrays and CLA arguments
        {
            add_task(array2);
        }
        else if (!strcoll(array1, "-l"))
        {
            print_data();
        }
        else if (!strcoll(array1, "-e"))
        {
            clean_todo_list(array8);
        }
        else if (!strcoll(array1, "-x"))
        {
            exit(0);
        }
        else
        {
            error();
        }
        //print_data();
    }

}

void print_data()
{
    printf("===========================\n"
           "==========T=O=D=O==========\n"
           "===========================\n" );

    int i = 0;
    for(i=0; i<task_count; i++)
    {

        printf(
            "___________________________\n"
            " %d.  %s\n",
            i, storage[i].name
        );
    }
}


void add_task(char *new_task_name)
{

    strcpy(storage[task_count].name, new_task_name);
    task_count++;


}
void clean_todo_list()
{
    int i = 0;
    for (i=0; i < task_count-1; i++ )
    {
        strcpy(storage[i].name, "");
    }
    task_count=0;
}
void error()
{
    printf( "   An ERROR occured,\n there is some problem with your input.\n Please check the commands,\n and mind the spaces!\n");

}
void delete_from_list()
{
}

