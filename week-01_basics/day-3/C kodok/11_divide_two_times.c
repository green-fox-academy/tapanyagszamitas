#include <stdio.h>

int main() {
	int k = 15;
	int a = 3;
    int b = 5;


if (k % a != 0) printf("The remainder is: %i", k%a);
if (k % b != 0) printf("The remainder is: %i", k%b);
else printf("k can divided  by 3 or 5 without reminder");

	return 0;
}
