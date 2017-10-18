#include <string.h>
#include <stdio.h>

int main () {
   char str[256] = "nem tudhatom, hogy masnak e tajek mit jelent";
   const char s[10] = " ";
   char *token;

   token = strtok(str, s);

   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }
   return(0);
}
