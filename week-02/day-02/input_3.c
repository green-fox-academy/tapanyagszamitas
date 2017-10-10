#include <stdio.h>
int main()
{
    char store [20] = " ";
    //as you know, a character is represented as a numeric value(ASCII value) in the memory
    //write a function which asks for one charcter and prints out the character in character format then in ASCII too
    
    printf("Type in one character then press enter: ");
    scanf("%s", store);
    printf("\n ascii code for your letter is %d", store[0]);

    //char_to_ascii();

    return 0;
}
