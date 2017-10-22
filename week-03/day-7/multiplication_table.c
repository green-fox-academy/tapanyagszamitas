#include <stdio.h>

int main(){

int a = 5;
int i= 0;


if( a< 0){
    printf(" sorry, this time please enter just positive numbers");
exit(0);
}
for( i=1; i<=10; i++){
    printf( "%d * %d = %d \n", i, a, i * a );
}


return 0;
}
