#include <stdio.h>

void swap(int *a, int *b);
#include <stdio.h>

int main() {
    int high_number = 2;
    int low_number = 6655;

    int *hight_number_pointer = &high_number;
    int *low_number_pointer = &low_number;

    int c = 0;

    c = *hight_number_pointer;
    *hight_number_pointer = *low_number_pointer;
    *low_number_pointer = c;

    printf("high number = %d\n", high_number);
    printf("low_number = %d\n",low_number);
    //TODO:
    // Please fix the problem and swap the value of the variables,
    // without using the "high_number" and the "low_number" variables.

    return 0;
}
