#include <stdio.h>
#include <stdlib.h>

/*
write a simple program which can help you decide is it hot enough to turn on the AC or not
for example if temperature 20 or less the output is :
it is too cold for the AC
or, the temperature is between 21-24:
it is up to you to turn on the AC
...
*/

int main()
{
    int temperature;
    temperature = 27;

    if (temperature <=20)
        printf("it's to cold for the AC");

        else if (21 <temperature )
            printf("turn on the AC");
        else
            printf("I don't know what to do");

    return 0;
}
