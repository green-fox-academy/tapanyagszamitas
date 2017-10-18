#include <stdio.h>
#include <string.h>

int main ()
{
	char string[55] = "Fekete bikapata kopog a patika peptita koven";
	char *p;
	int k = 1;
	p = strchr(string, 'i');

	while( p != NULL)

	{
        printf("character i found at position %d\n", p - string + 1);
        printf( "more times found: \"i\" : %d \n", k);
        printf( "more times found: \"i\" in \"%s\" is \"%s\" \"\n" ,string, p);
        p = strchr( p + 1, 'i');
        k++;
	}
	//TODO: write a program, which lists all position where character 'i' is found
	return 0;
}
