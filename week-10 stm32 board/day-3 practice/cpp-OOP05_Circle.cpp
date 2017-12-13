#include <iostream>
#include <string>

using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double radius)
    {
        this -> radius = radius;
    }
    ~Circle(){
   // cout<< "Circle is over"<< endl;
    }
    double get_cirkumference()
    {
        return (radius * 2* 3.14);
    }
    double get_area()
    {
        return (radius *radius*3.14);
    }
};

int main()
{

    Circle Kor = Circle(5);
    cout << "the circumfence of a circle is " << Kor.get_cirkumference();

    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

    return 0;
}
