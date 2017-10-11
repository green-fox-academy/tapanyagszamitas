#include <stdio.h>
#include "parameter.h"


int main(){
// factor calculator

int i = 0;
//int n = PARAMETER;
unsigned long long factorial = 1;

for(i=1; i <= PARAMETER; i++)
{
factorial = factorial * i;
}

printf(" %d factorial = %llu", PARAMETER, factorial);

return 0;
}
