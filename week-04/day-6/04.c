#include <stdio.h>
#include<string.h>
//fill abc string from a to z, print out
//fill and print out abc from a to z, and A to Z in a function
//fill and print out abc from a to z, and A to Z in a function with pointers



int main()
{

    char abc[30] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i=0;
    for (i = 0; i < 26; i++)
    {
        abc[i];

        printf("%c ", abc[i]);
    }
    return 0;

}
