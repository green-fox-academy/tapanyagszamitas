// with tis code we add 3 + 10

#include <stdio.h>

main()
{
   int a = 3;

   /* Storing result of addition in variable a */

   a = a + 10;

   /** Not recommended because original value of a is lost
    *  and you may be using it somewhere in code considering it
    *  as it was entered by the user.
    */

   printf("Sum of a and b = %d\n", a);

   return 0;
}