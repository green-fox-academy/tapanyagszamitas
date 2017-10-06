#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27



int main() {

int a = 1;
int b = 7;
int c = 0;                  //counter

  printf("Oddnumbers between %d and %d \n\n", a, b);
    a = a + 1;
    while (a < b) {
        if (a % 2 != 0) {
            c++;
            printf("%d \n", a);
        }
        a += 1;
    }
    printf("\n %d counted odds\n", c);
 return 0;
}

