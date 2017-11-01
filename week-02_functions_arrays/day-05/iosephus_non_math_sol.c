#include <stdio.h>
#include <math.h>

//Iosephus wants survive

int main(){


int n = 41;//numbers of people in circle

int i = log2(n);
float f = log2(n);

//if (f/i == 1)
//       printf("az 1. szamu tuleli");

//else
    //printf("I don'k know who will survive but not the guy on place 1\n");
//    printf("\n tech check: f erteke %f, f floored %f ",f, floor(f)); // technical help for me toknow x valeue
int x = 0;
    int nn = 2;
    x = pow(2, floor(f)); // the number of 2 power last than the given number (n)
//    printf("\n tech check 2, x value   %d ",x); // technical help for me toknow x valeue

int d = 0;
d = n- x;

// printf("\n tech check 3, d value( difference of two numbers)  %d ",d); // technical help for me toknow x valeue

d=d*2+1 ;

 printf("\n Finally the survivor was the lucky nr. %d !!!!!!!!!!!!!!",d); // technical help for me toknow x valeue

return 0;
}
