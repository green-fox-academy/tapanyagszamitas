#include <stdio.h>

int main() {
    char buffer[255];   // Buffer variable for user input

    printf("Please enter your name!\n");
    scanf("%s", buffer);

    printf("\n\n\n\nAs far as I know, you are %s", buffer);

    //TODO:
    // Get the user's name with scanf

    //TODO:
    // Print it out with printf

    return 0;
}
