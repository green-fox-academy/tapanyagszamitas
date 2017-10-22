#include <stdio.h>

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */

int main() {

#include <stdio.h>



int n = 10;
int i= 0;


if( n < 0){
    printf("sorry, next please enter just positive numbers");
exit(0);
}

for( i=1; i<=n; i++)
    {
        if (i%2 != 0)
        {
printf( "%d \n",  i );
        }
    }

return 0;
}



