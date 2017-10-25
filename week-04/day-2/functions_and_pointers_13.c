#include <stdio.h>

int my_strlen(char *string);

int main()
{
	char my_string[50] = "Hello world!";

    //int length = 0;
    //length = strlen(my_string);
    //printf(" %d ", length);

    printf(" function %d \n", my_strlen(my_string));
	//TODO: implement your own strlen function.

	return 0;
}

int my_strlen(char *string) {


    int i = 0;
    int count = 0;

    while (string[count] != '\0') {
        count++;
    }

    return count;

}
