#include <stdio.h>
#include <math.h>

int main () {
   char str[80];

   sprintf(str, "kiskutya \n a = %d", 10);

   printf("\n%s", str );

   return(0);
}
