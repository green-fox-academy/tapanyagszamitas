#include <stdio.h>
#include <string.h>

int main ()
{
	char string[40] = "This is a sample string";
    char *first;
    char *last;
	int res = 0;
	int ch = 's';

    first = strchr( string, ch );
    printf( "The first occurrence of s in is '%d'\n", first-string+1);


    last = strrchr (string, ch);
    printf( "The last occurence of s in '%d' \n" , last-string+1);

    res = first-last;

    printf("so the distance is %d", last-first);


	//TODO: write a program which prints out the distance between the first and last occurance of character 's'

    return 0;
}
