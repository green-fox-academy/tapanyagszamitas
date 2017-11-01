#include <stdio.h>
#include <string.h>

int main()
{
 char store[20]  = " ";
 char name[20] = " ";
    printf("Please enter a number!\n");
    scanf("%s", store);

 printf("Enter your name: ");
   // gets(name);   replaced-that was the problem

    scanf("%s", name);

    puts(name);






 //write a void function which asks for a number with scanf and print it out with printf,
    //then asks for a name with gets, and print it out with puts
    //you will notice something is wrong
    //try to solve the problem

   // func();

    return 0;
}
