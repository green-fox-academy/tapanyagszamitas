#include <stdio.h>

/**
 * Create a function that prints out the fist "N" positive even numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   0, 2, 4, 6, 8
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */


int main()
{
    even_num_printer(10) ;

    return 0;
}

int even_num_printer(int n)
{

    if(n < 0)
    {
        printf("N should be a positive integer number");
        return 0;
    }
    for(int i=0; i<= 2*n+2; i++)
        if(i%2 != 0)
        {
            printf("\n %d",i-1);
        }

}
