#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdexcept>


// Write a try - catch block.
// Throws a bulit-in exception in the try block
// Catch it in the catch block and write it out.
// Don't forget includes

using namespace std;

int main () {

    try{
    int a = 0;
    int b = 0;

cout << "Dear User! this program is dividing the fist number by the second"<< endl;

cout << "Please enter the first integer" << endl;

    cin >> a;

cout << "Please enter the second integer" <<endl;

    cin >> b;

    if (b == 0){
        throw runtime_error("you can not divide by zero!");
    }

    int c = a/b;
    cout << a << " divide by "<< b << " equal "<< c<< endl;

    }
    catch(runtime_error &err){
        cout << err.what();
    }

    return 0;
}
