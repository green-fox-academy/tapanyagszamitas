#include <stdio.h>
#include <math.h>

int main(){
// check the Armstrong number 3digits
int a = 153;
int count =0;
int b = 0;
//printf(" Enter an integer number to check, it is an Armstrong number or not\n");
//scanf("%d", &a);
int aa = 0;
int bb = 0;
int cc = 0;

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
