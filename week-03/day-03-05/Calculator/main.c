#include <stdio.h>
int print_welcome_screen();

int main()
{
print_welcome_screen();

char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
printf("Please enter your commands!\n");

char collect_data[100] = " ";

scanf( "%s %s %s", &collect_data[1], &collect_data[40], &collect_data[60]);


    int i;
    for(i=0; i<=99; i++){
    printf("%c\n", collect_data[i]);
    }




  return 0;
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

