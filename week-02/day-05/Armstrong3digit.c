#include <stdio.h>
#include <math.h>

int main(){
// check the Armstrong number 3digits
int a = 0;
printf(" Enter a 3 digit number to check, it is an Armstrong number or not\n");
scanf("%d", &a);
int aa = 0;
int bb = 0;
int cc = 0;

aa= a%10;
bb= a/10%10;
cc= a/100%10;

if ((aa*aa*aa+bb*bb*bb+cc*cc*cc)==a)
    printf(" %d is an Armstrong number", a);
else
    printf(" %d is not an Armstrong number", a);

return 0;
}
