#include<stdio.h>
#include<conio.h>

int main() {
    int i;
    int j;
    int rows;

    rows=10;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; ++j) {
           printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
