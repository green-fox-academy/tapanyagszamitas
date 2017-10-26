

typedef struct task
{
    char name[100];
} task;

static task storage[10];
static int task_count = 0;

data_input()
{
    while (1)
    {

        char data_input[100]= " "; //
        char array1[100] = " "; //operator
        char array2[100] = " ";// input
        gets(data_input);

        sscanf( data_input, "%s %s", array1, array2);


        if (!strcoll(array1, "-a"))
        {
            add_task(array2);

        }
        else
        {
            printf( "egyeb\n");

        }
        print_data();
    }

}

void print_data()
{
    int i = 0;
    for(i=0; i<task_count; i++)
    {
        printf("%d. item of storage %s\n",i, storage[i].name);
    }

}


void add_task(char *new_task_name)
{

    strcpy(storage[task_count].name, new_task_name);
    task_count++;


}
