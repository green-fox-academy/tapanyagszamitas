#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t number = 253;
	uint8_t result;

	printf("%d\n", result = number + 23);
	// Check the result with printf

 	// What happened?!
 	//tuljutott a 8 bittel leirhato tartomanyon, es ujrakazdte 0-tol

	 //Try again with different datatype
	uint16_t result_16 = number + 23;

	printf("%d\n", result = number + 23);
	// Check the result with printf

	// What happened and why?

	//----------------------------------------
	int8_t number_negative = number;
	// Check the result with printf

	printf("%d\n", result = number_negative + 23);
	
	
	// What happened and why?
    return 0;
}