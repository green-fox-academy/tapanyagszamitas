#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t x = 0b11001100;
    uint8_t y = 0b01010101;
	uint8_t z;

	z = y & x;

	 printf("Binaris kiiratas AND: ");
    printf("%c", (z & 0b10000000 ? '1' : '0'));
    printf("%c", (z & 0b01000000 ? '1' : '0'));
    printf("%c", (z & 0b00100000 ? '1' : '0'));
    printf("%c", (z & 0b00010000 ? '1' : '0'));
    printf("%c", (z & 0b00001000 ? '1' : '0'));
    printf("%c", (z & 0b00000100 ? '1' : '0'));
    printf("%c", (z & 0b00000010 ? '1' : '0'));
    printf("%c", (z & 0b00000001 ? '1' : '0'));
    printf("\n");

	// Check the result with printf

	// Be z equal to the bitwise or of x and y
	z = y | x;

		 printf("Binaris kiiratas OR: ");
    printf("%c", (z & 0b10000000 ? '1' : '0'));
    printf("%c", (z & 0b01000000 ? '1' : '0'));
    printf("%c", (z & 0b00100000 ? '1' : '0'));
    printf("%c", (z & 0b00010000 ? '1' : '0'));
    printf("%c", (z & 0b00001000 ? '1' : '0'));
    printf("%c", (z & 0b00000100 ? '1' : '0'));
    printf("%c", (z & 0b00000010 ? '1' : '0'));
    printf("%c", (z & 0b00000001 ? '1' : '0'));
    printf("\n");

	// Check the result with printf
    return 0;
}
