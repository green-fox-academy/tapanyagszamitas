#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

//Iosephus wants survive working just with killing your neighbor

int main(){
int n = 0;
printf("Iosephus and some rebels are trapped in a cave \n");
printf("Enter their number:\n");
scanf("%d", &n);

float f = log2(n);
int x = 0;
	x = pow(2, floor(f));
int d = 0;
	d = n- x;
	d = d * 2 + 1 ;

printf("\n Finally the survivor was the lucky nr. %d !!",d);

return 0;
}
