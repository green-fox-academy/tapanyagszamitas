#include <stdio.h>

int main() {
    char char_array[] = {'a', 'b', 'c', 'd','\0'};
    char char_array_the_same[] = "abcd";

    int i;
    for(i=0; i<=4; i++){
    printf("%c\n", char_array[i]);
    }

    int j;
    for(j=0; j<=3; j++){
    printf("%c\n", char_array_the_same[j]);
    }

