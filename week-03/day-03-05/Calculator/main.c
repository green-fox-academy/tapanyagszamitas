#include <stdio.h>
#include <string.h>

int print_welcome_screen();
int data_input();
int datatransfer_from_strings();

int main()
{
print_welcome_screen();
data_input();

  return 0;
}
int data_input()
{

char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
printf("Please enter your commands!\n");

char datainput[100]= " ";
gets(datainput);

char array0[10] = " "; // num 1
char array1[10] = " ";// operator
char array2[10] = " "; // num 2


sscanf( datainput, "%s %s %s",array0, array1, array2);

printf("array2\n");
    int i2;
    for(i2=0; i2<=9; i2++){
    printf("%c\n", array2[i2]);
    }


int num1 = 0;
int num2 = 0;
int opperator = 0;
int num3 = 0;
num1 = atoi(array0);
num2 = atoi(array1);
num3 = num1+num2;
printf("num 2= %d \n ", num2);









    return main;
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

return main;
}

int datatransfer_from_strings()
{





    return main;
}
