#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdexcept>

using namespace std;

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */
int main()
{
    try
    {
        int a = 5;
        if(a<0)
        {
            throw runtime_error("a is a negative number!");
        }
        for(int i =1; i<= 2*a; i = i+2)
        {
            cout<< i << endl;
        }
    }
    catch(runtime_error &err)
    {        cout << err.what();
    }
    return 0;
}
