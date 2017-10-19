#include <stdio.h>
#include <string.h>

int print_welcome_screen();

int main()
{
print_welcome_screen();

char enter = 0;
while (enter != '\r' && enter != '\n') { enter = getchar(); }
printf("Please enter your commands!\n");

char firstnumber[10] = " ";
char opperator [10] = " ";
char lastnumber[10] = " ";


scanf( "%s", &firstnumber[1]);
scanf( "%s", &opperator[1]);
scanf( "%s", &lastnumber[1]);

printf("firstnumber\n");
    int i;
    for(i=0; i<=9; i++){
    printf("%c\n", firstnumber[i]);
    }
printf("opperator\n");
     int i2;
    for(i2=0; i2<=9; i2++){
    printf("%c\n", opperator[i2]);
    }
printf("lastnumber\n");
     int i3;
    for(i3=0; i3<=9; i3++){
    printf("%c\n", lastnumber[i3]);
    }

char summation_if[] = "+";
char multiplication_if[] = "*";
char division_if[] = "/";
char division_w_remainder_if[] = "%";
char squaring_if[] = "<";


printf("summation_if\n");
     int i4;
    for(i4=0; i4<=5; i4++){
    printf("%c\n", summation_if[i4]);
    }




if((strcmp (opperator, summation_if ))==0)
    printf( "szamolj te");
else printf( "something is not ready,we need to work more. \n");


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

