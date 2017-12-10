#include <iostream>

using namespace std;

class Shape {
private:
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
};

class Circle: public Shape{
    private:
    public:
    Circle(string _name): Shape (_name){}

};


//TODO: create a new class called Circle with public inheritance (inherited from Shape)
//don't forget to implement a constructor in the class
//there is a compile error when you try to run the program
//fix the problem


int main()
{

Circle kerek("Kerek");

cout<< kerek.getName() << endl;


    return 0;
}
