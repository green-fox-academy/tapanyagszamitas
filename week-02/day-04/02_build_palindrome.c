#include <stdlib.h>
#include <stdio.h>

int main()
{
   char arr[100];

    printf("enter word\n");
    scanf("%s", arr);


    int i;
    i = strlen(arr);

     printf("Here is your Conjoined twins style palindrom\n");

    for(i=0; i<=(strlen(arr))-1; i++){
    printf("%c", arr[i]);
    }

    for(i=(strlen(arr))-1; i>=0; i--){
    printf("%c", arr[i]);
    }

    return;
}
