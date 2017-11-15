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
public:
    void travelling()
    {
        cout << "Flying, teleporting" << endl;
    }
};

class Aquahuman: public Human
{
public:
    void travelling()
    {
        cout << "Swimming, diving, riding with dolphins" << endl;
    }
};



int main()
{
    Human h;
    h.travelling();

    Superhuman s;
    s.travelling();

    Aquahuman a;
    a.travelling();

    return 0;
}
