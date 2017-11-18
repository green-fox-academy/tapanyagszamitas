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

    ~circle(){
 cout << "Thank you for using our calculator" << endl;
}

};


class triangle_3in : public shape
{

public:
    void calc_area(float a, float b, float c)
    {
        float area = 0;
        float s = (a + b + c)/2; //half_perimeter,
        area =  sqrt(s*(s-a)*(s-b)*(s-c)) ;
        cout << "the area of the triangle (" << a <<", "<< b<<", " << c<<") is " << area << " square unit" <<endl;
    }
};

class triangle_2in : public shape
{

public:
    void calc_area(float a, float b)
    {
        float area = 0;
        area =  a*b/2;
        cout << "the area of the triangle is " << area << " square unit" <<endl;
    }
};

int main()
{

    int i =0;
    float cr =0;
    int j = 0;
    float t1 =0;
    float t2 =0;
    float t3 =0;
    cout << "This is a program for calculating shapes area."<< endl;
    cout << "you can choose a shape." << endl;


    cout <<  "Type 1 if you have a circle and 2 if you have a triangle."<< endl;
    cin >> i;
    if(i == 1)
    {
        cout << "your choice is a circle." << endl;
        cout << "please enter the radius of your circle." << endl;

        cin >> cr;
        circle c;
        c.calc_area(cr);
    }
    else if(i == 2)
    {
        cout << "your choice is a triangle." << endl;
        cout << "if you want to insert the three sides length please press 1" << endl;
        cout << "if you want to insert the base side and the height press 2" << endl;
        cin >> j;
        if(j==1)
        {
            cout << "your choice is a triangle with three sides. Please enter the three sides." << endl;
            cout << "type a number and press enter 3 times alltogether." << endl;
            cin >> t1>>t2 >>t3;
            triangle_3in t3t;
            t3t.calc_area(t1,t2,t3);
        }
        else if (j==2)
        {
            cout << "your choice is a triangle with two input parameters a base side and the height." << endl;
           cout << "type the parameters and press enter 2 times alltogether." << endl;
            cin >> t1>>t2;
            triangle_2in t2t;
            t2t.calc_area(t1,t2);
        }
        else
            cout << "please rethink your choice." << endl;
    }
    else
        cout << "please rethink your choice." << endl;

    //  circle c;
    // c.calc_area(3);

    //triangle_3in t3;
    // t3.calc_area(3,4,5);

    //triangle_2in t2;
    //t2.calc_area(3,4);

    return 0;
}
