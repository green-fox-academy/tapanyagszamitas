#include <stdio.h>

/*
create a program which converts the fahrenheit to celsius
the output should look like this:
Fahrenheit       Celsius
  0               -17.8
 20                -6.7
 40                 4.4
 60                15.6
...
print out at least 10 lines
*/
#include <stdio.h>
#include <stdint.h>

int main() {

float a = 220;


while (a > -40) {
    a -= 20;
    printf("%.0lf Fahrenheit %.1lf Celsius\n", a , (a-32)/1.8 );
}
return 0;
}
