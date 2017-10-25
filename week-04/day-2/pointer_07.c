#include <stdio.h>

int main() {
    int high_number = 6655;
    int low_number = 2;

    int *hight_number_pointer = &low_number;
    int *low_number_pointer = &high_number;

    printf(" hight_number_pointer is %d \n", *hight_number_pointer );
    printf(" low_number_pointer is %d \n", *low_number_pointer );

    int *a = 0;

    a = hight_number_pointer;
    hight_number_pointer = low_number_pointer;
    low_number_pointer = a;

    printf(" hight_number_pointer is %d \n", *hight_number_pointer );
    printf(" low_number_pointer is %d\n", *low_number_pointer );


    //TODO:
    // Please fix the problem and swap where the pointers point,
    // without using the "&" operator.

    return 0;
}
