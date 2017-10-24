#include <stdio.h>

int main() {
    int high_number = 6655;
    int low_number = 2;

    int *hight_number_pointer = &high_number;
    int *other_high_number_pointer;

    printf(" the mempory adress of high_number_pointer is %p \n", hight_number_pointer );

    other_high_number_pointer = hight_number_pointer  ;

    printf(" the mempory adress of other_high_number_pointer is %p \n", other_high_number_pointer );


    //TODO:
    // The "other_high_number_pointer" should point to the same memory address
    // without using the "&" operator.

    return 0;
}
