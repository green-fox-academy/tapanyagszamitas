#include <stdio.h>
#include <stdint.h>

/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/


int main() {

int a = -1;

while (a < 100) {
    a += 1;

    switch(a % 2){
        case 0:
            printf("Number is Even\n");
            break;

        case 1:
            printf("Number is Odd\n");
            break;
}
}

 return 0;
}

