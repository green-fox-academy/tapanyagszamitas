#include <iostream>
#include <string>

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

using namespace std;

class Animal
{
private:
    int hunger_value;
    int thirst_value;

public:
    Animal()
    {
        this->hunger_value = 50;
        this->thirst_value = 50;
    }
    ~Animal()
    {
        cout << "animals went away"<< endl;
    }
    void eat()
    {
        hunger_value -=1;
        cout <<"animals eat"<< endl;
    }

    void drink()
    {
        thirst_value -=1;
        cout <<"animals drink"<< endl;

    }
    int play()
    {
        hunger_value +=1;
        thirst_value +=1;
        cout <<"animals play"<< endl;
    }

    void print_status()
    {
        cout<<"Hunger "<<hunger_value<< endl;
        cout<<"Thirst "<<thirst_value<< endl;
    }


};


int main()
{

    Animal a;
    a.print_status();
    a.drink();
    a.eat();
    a.print_status();
    a.play();
    a.print_status();

//Create Animal class
//Every animal has a hunger value, which is a whole number
//Every animal has a thirst value, which is a whole number
//when creating a new animal object these values are created with the default 50 value
//Every animal can eat() which decreases their hunger by one
//Every animal can drink() which decreases their thirst by one
//Every animal can play() which increases both by one

    return 0;
}
