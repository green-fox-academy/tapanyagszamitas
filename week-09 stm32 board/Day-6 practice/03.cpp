#include <iostream>

using namespace std;

class Shape
{
protected:
    string name;
public:
    Shape(string _name)
    {
        name = _name;
    }

    string getName()
    {
        return name;
    }
    void setName(string _name)
    {
        name = _name;
    }
};

class Rectangle: public Shape
{
protected:
public:

Rectangle(string _name): Shape(_name) {};

};

//TODO: extend your class with a setName() function with public inheritance
//don't forget to implement a constructor in the class
//then create an instance of the Rectangle class in main function and call its inherited getName function
//finally give a new name for the initialized class by calling your setName function

int main()
{

    Rectangle haromszog ("MR.Haromszog");
    haromszog.setName("Dr. Haromszog");
    cout << haromszog.getName()<< endl;

    return 0;
}
