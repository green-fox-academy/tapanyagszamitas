#include <stdio.h>

int main() {
	int h1 = 400;
	int h2 = 200;

	if (h2*2 >h1)
        printf("%d is bigger than %d", h2*2, h1);
	else if (h2*2 <h1)
        printf("%d is smaller (or equal) than %d", h2*2, h1);
	else
        printf("%d equal to %d", h2*2, h1);
	// tell if the double of h2 is bigger than h1
	return 0;
}
