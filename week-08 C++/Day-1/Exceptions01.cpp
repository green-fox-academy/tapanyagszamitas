#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

try{
int a = 0;
int b = 0;
int c = 0;
cout << "Please enter the first integer number"<< endl;

cin >> a;

cout << "Please enter the second integer value" << endl;

cin >> b;

if (b == 0)throw 5;

c= a/b;

cout<< a << "divide" << b<< " is equal to  " << c << endl;


}
catch (int e)
{
cout << "Divide by zero is nonsense " << e <<  endl;
};

	return 0;
}
