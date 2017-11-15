#include <iostream>
#include <vector>

using namespace std;

// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.


class Human
{
public :
    virtual void travelling()
    {
        cout << "Walking, running, hiking, " << endl;
    }
};


class Superhuman: public Human
{
    void travelling()
    {
        cout << "Flying, teleporting" << endl;
    }


};

class Aquahuman: public Human
{

    void travelling()
    {
        cout << "Swimming, diving, riding with dolphins" << endl;
    }
};




int main()
{
    Superhuman s;
    Aquahuman a;
    Human *human1 = &s;
    Human *human2 = &a;

    human1-> travelling();
    human2-> travelling();

    return 0;
}
