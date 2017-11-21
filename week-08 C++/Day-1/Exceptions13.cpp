#include <iostream>
#include <ctime>

using namespace std;

// Create a simple program which has a time lock
// The program shoul ask for a user input, but the user only has
// 10 seconds to reply, if the user falis (reaches the time limit)
// the program should print out: "faild, it took you too much time"
// This program cloud be the engine of a quiz game.

int main() {

int a = 0;

cout << "Please enter the value of an integer (a)"<< endl;
cout << "You have 15 seconds to do"<< endl;

    time_t start_time = time(0);

cin >> a;

cout<< "Your choice is " << a << endl;

 time_t finish_time = time(0);

    if (finish_time - start_time > 5) {
 cout << "You are out of time of time.\n";
    }

return 0;

}
