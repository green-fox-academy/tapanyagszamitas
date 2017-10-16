#include <stdio.h>
#include <stdint.h>

int main() {

	int boy = 21;
    int girl = 1;

    if (girl == 0) printf("Sausage party...");
    else if ((girl==boy) && (girl + boy >= 20))
        printf("The party is excellent!...");
    else if ((girl!=boy) && (girl + boy >= 20))
        printf("Quite cool party...");
    else
        printf("Avarage party...");

	return 0;
}
