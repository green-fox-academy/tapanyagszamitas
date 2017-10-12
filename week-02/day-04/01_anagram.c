#include <stdio.h>
#include <string.h>

int find_anagram(char[], char[]);

int main(){
char arr1[255];
char arr2[255];
int flag = 0;

printf("please enter first word\n");
scanf("%s", arr1 );

printf("please enter second word\n");
scanf("%s", arr2 );

if (strlen(arr1) != strlen(arr1)){
        flag = 0;
flag= find_anagram( arr1, arr2);
}

 if (flag == 1)
        printf("%s and %s are anagramms\n", arr1, arr2);
    else
        printf("%s and %s are not anagramms\n", arr1, arr2);


return 0;
}

int find_anagram(char arr1[], char arr2[])
{
  int num1[100] = {0}, num2[100] = {0}, i = 0;

    while (arr1[i] != '\0')
    {
        num1[arr1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (arr2[i] != '\0')
    {
        num2[arr2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 50; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;


}

