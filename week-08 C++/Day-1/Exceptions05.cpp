#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdexcept>

using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws


void zerotester(int b){

if (b == 0)throw 'e';

}


int main() {

try{
int a = 0;
int b = 0;
int c = 0;
cout << "Please enter the first integer number"<< endl;

cin >> a;

cout << "Please enter the second integer value" << endl;

cin >> b;

zerotester(b);

c= a/b;

cout<< a << "divide" << b<< " is equal to  " << c << endl;


}
catch (char e)
{
cout << "Divide by zero is nonsense " << e <<  endl;
};

	return 0;
}
