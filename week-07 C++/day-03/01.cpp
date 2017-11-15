#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private method)


class shape
{
private:
    void calc_area(float r)
    {
        cout << "Calculatng a shapes area " << endl;
    }
};

class circle : public shape
{

public:
    void calc_area(float r)
    {
        float area = 0;
        area = r *r *3.14;
        cout << "area of a circle with "<<r<<" unit radius is " << area << " square unit"<< endl;
    }

};


class triangle_3in : public shape
{

    public: void calc_area(float a, float b, float c)
    {
        float area = 0;
        float s = (a + b + c)/2; //half_perimeter,
        area =  sqrt(s*(s-a)*(s-b)*(s-c)) ;
        cout << "the area of the triangle (" << a <<", "<< b<<", " << c<<") is " << area << " square unit" <<endl;
}
};

class triangle_2in : public shape
{

    public: void calc_area(float a, float b)
    {
        float area = 0;
        area =  a*b/2;
        cout << "the area of the triangle is " << area << " square unit" <<endl;
}
};





int main()
{
    circle c;
    c.calc_area(3);

    triangle_3in t3;
    t3.calc_area(3,4,5);

    triangle_2in t2;
    t2.calc_area(3,4);

    return 0;
}
