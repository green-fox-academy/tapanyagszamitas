#include <stdio.h>
#include <stdint.h>

void printf_numbers(uint64_t from, uint64_t to)
{
    for (uint64_t i = from; i < to; i++)
        printf("%llu \n", i);
}

int main()
{
    printf_numbers(2147483600,2147484600 );




    return 0;


}