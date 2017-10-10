#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input
    char ch,dogs_name[20];

    printf("Enter your name: ");
    gets(buffer);

    printf("%s", buffer);

    puts(" is your name");

    int i=0;
    printf("Enter your dog name:");

    while ( ((ch=getche())!='\r') && (i <20) )
    {
        dogs_name[i]=ch;
        i++;
    }
    dogs_name[i] = '\0';
    printf(" Your dogs name is %s\n",dogs_name);




    //TODO:
    // Get the user's name with gets

    //TODO:
    // Print it out with puts

    //TODO:
    // Get the user's pet name with getch

    //TODO:
    // Print it out

    return 0;
}