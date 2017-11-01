#include <stdio.h>

int main()
{
    int num;
    num = 13;
   
    switch(num % 2)
    {
        /* If n%2 == 0 */
        case 0:
            printf("Number is Even");
            break;

        /* Else if n%2 == 1 */
        case 1:
            printf("Number is Odd");
            break;
    }

    return 0;
}