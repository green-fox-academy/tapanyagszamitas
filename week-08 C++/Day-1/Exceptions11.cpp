#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdexcept>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i=0; i<20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}catch (float f) {
            cout << "This was a FLOAT type exception. value: " << f << "." << endl;
		} catch (double d) {
            cout << "This was a DOUBLE type exception. value: " << d << "." << endl;
		} catch (char const *cs) {
            cout << "This was a CHAR type exception. value: " << cs << "." << endl;
		} catch (bool b) {
            cout << boolalpha << "This was a Boolean type exception. value: " << b << "." << endl;
		}  catch (int i) {
            cout << "This was a Integer type exception. value: " << i << "." << endl;
		}
    }

// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.
	return 0;
}
