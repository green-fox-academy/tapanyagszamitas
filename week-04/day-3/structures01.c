#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main() {
    struct Computer computer = {3.2, 8, 32};

    printf("cpu_speed_GHz %f\n", computer.cpu_speed_GHz);
    printf("ram_size_GB %d\n", computer.ram_size_GB);
    printf("bits %d\n", computer.bits);

    computer.bits = 64;

      printf("cpu_speed_GHz %f\n", computer.cpu_speed_GHz);
    printf("ram_size_GB %d\n", computer.ram_size_GB);
    printf("bits %d\n", computer.bits);


    //TODO: Change the bits to 64

    //TODO: print out the structure members

    return 0;
}
