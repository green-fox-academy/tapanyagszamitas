#include <stdio.h>
#include <math.h>

int main(){
// check the Armstrong number 3digits
float a = 153;
float count =0;
float b = 0;
//printf(" Enter an integer number to check, it is an Armstrong number or not\n");
//scanf("%d", &a);
float aa = 0;
float bb = 0;
float cc = 0;

b = a;

while(b != 0)
    {
        // n = n/10
        b /= 10;
        ++count;
    }

aa= a%10;
bb= a/10%10;
cc= a/100%10;

if ((pow(aa, count) + pow(bb, count) + pow(cc, count))==a)
    printf(" %d is an Armstrong number", a);
else
    printf(" %d is not an Armstrong number", a);

return 0;
}
