#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

int print_welcome_screen();
void data_input();
void help();
void clear_screan();
void exit_program();
void addition();
float float_converter();

int main()
{
print_welcome_screen();
data_input();

  return 0;
}
void data_input()
{

char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
printf("Please enter your commands!\n");

char datainput[100]= " ";
gets(datainput);

char array0[100] = " "; // num 1
char array1[100] = " ";// operator
char array2[100] = " "; // num 2


sscanf( datainput, "%s %s %s",array0, array1, array2);

 if (!strcoll(array0, "help"))
    {
       help();
    }else if (!strcoll(array0, "clear")) {
        clear_screan();
    }else if (!strcoll(array0, "exit")) {
        exit_program();
    }else if (!strcoll(array1, "+")) {
        addition();
    }


    data_input();
}
int print_welcome_screen()
{


 printf("\t The Boring Calculator\n"
        "====================================\n"
        "usage: [number] [operation] [number]\n"
        "Commands:\n"
        "\n"
        " + \tsummation\n"
        " * \tmultiplication\n"
        " / \tdivision\n"
        " % \tdivision with remainder\n"
        " ^ \tsquaring\n"
        " < \tsquare root\n"
        " log \tlogarithm\n"
        " binto \tbinary to hex or dec\n"
        " hexto \thexadecimal to bin or dec\n"
        " decto \tdecimal to bin or hex\n"
        "====================================\n"
        "exit \texiting from the program\n"
        "clear \tclear the screen\n"
        "help \tprint usage\n"
        "====================================\n"
        "Hit enter to start!\n"
        "====================================\n");

data_input();
}

void help()
{
printf(" don't drink unwashed apple juice\n\n");

data_input();

}

void clear_screan()
{
system ("cls");
 data_input();

}

void exit_program()
{
 exit(0);
}

void addition(char array0[], char array2[])
{
double a0 = 0;
double a2 = 0;
a0 = strtod(array0, NULL);
printf("Float value : %4.8f\n", a0);

a2 = atof(array2);

printf(" result is %f\n",  a2 );

}


