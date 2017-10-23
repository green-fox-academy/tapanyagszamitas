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
void subtraction();
void multiplication();
void division();
void division_with_remainder();
void square();
void square_root();


int main()
{
print_welcome_screen();


  return 0;
}
void data_input()
{

char enter = 0;
while (enter != '\r' && enter != '\n') {
        enter = getchar();
        }
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
        addition(array0, array2);
    }else if (!strcoll(array1, "-")) {
        subtraction(array0, array2);
    }else if (!strcoll(array1, "*")) {
        multiplication(array0, array2);
    }else if (!strcoll(array1, "/")) {
        division(array0, array2);
    }else if (!strcoll(array1, "%")) {
        division_with_remainder(array0, array2);
    }else if (!strcoll(array1, "^")) {
        square(array0, array2);
    }else if (!strcoll(array1, "<")) {
        square_root(array0, array2);
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
printf("=====================================\n"
       "            Help menu                \n"
       "enter the calculation in this form:  \n"
       "number operator number               \n"
       "additional commands: clear, exit     \n"
       "=====================================\n");

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

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n",  a + b);

}

void subtraction(char array0[], char array2[])
{

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n",  a - b);

}

void multiplication(char array0[], char array2[])
{

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n",  a * b);

}

void division(char array0[], char array2[])
{

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
if (b == 0){
    printf(" Dividing by 0 is non sense");
    data_input();
}
else;
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n",  a / b);

}

void division_with_remainder(char array0[], char array2[])
{

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
if (b == 0){
    printf(" Dividing by 0 is non sense");
    data_input();
}
else;
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n", fmod( a , b));

}


void square(char array0[], char array2[])
{

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n",  pow(a, b));

}

void square_root(char array0[], char array2[])
{

float a = 0;
float b = 0;

a = atof(array0);
b = atof(array2);
printf(" value of a is %f\n", a);
printf(" value of b is %f\n", b);
printf(" result is %.2f\n",  sqrt(b));

}
