#include <stdio.h>
#include <stdlib.h>

//fill abc string from a to z, print out

int main(){

char abc[30] = "";

int i = 0;
for( i = 97; i <= 122; i++){
    abc[i]= i;
printf(" %c\n",abc[i]);
}

return 0;
}
