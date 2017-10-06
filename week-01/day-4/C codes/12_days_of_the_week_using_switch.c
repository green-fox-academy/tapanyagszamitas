#include<stdio.h>


/*
create a program which prints out the days from monday to sunday
use a loop and variables to do that
for example:
for(int i = 0; i < 6; i++){
    printf("%d\n", i);
}
you can match the numbers with the name of the days
write this program first with if and else-if statements
then do it again with switch-statement
take the conclusion:
    - which method was faster?
    - which was shorter?
    - which one did you find easier?
*/



int main ()
{
int day;


for( day=0; day<=7; day++ ){;

    switch(day){

    case (1):
        printf("Monday\n");
        break;
    case (2):
        printf("Tuesday\n");
        break;
    case (3):
        printf("Wednesday\n");
        break;
    case (4):
        printf("Thursday\n");
        break;
    case (5):
        printf("Friday\n");
        break;
    case (6):
        printf("Saturday\n");
        break;
    case (7):
        printf("Sunday\n");
        break;
}
}



   return 0;
}