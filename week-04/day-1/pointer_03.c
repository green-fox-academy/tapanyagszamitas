#include <stdio.h>

int main()
    {
    int number = 1234;
    int *number_pointer = &number;

    *number_pointer= 42;

    printf(" Thea value of number pointer is %d\n", *number_pointer);



    //TODO:
    // update the value of number variable to 42 using the "number_pointer"

    return 0;
}
