#include "Shape.h"

Shape::Shape(float _w, float _h)
{

    mWidth = _w;
    mHeight = _h;
}

Shape::~Shape()
{
    cout<< "Shape out" << endl;
}

float Shape::getWidth()
{
    return mWidth;
}

float Shape::getHeight()
{
    return mHeight;
}

float Shape::getArea()
{
    return mArea;
}

float Shape::calculateArea()
{
    mArea = mHeight* mWidth;
}


// Create a constructor that takes the height and width as it's parameters.


// Create a destructor, that destructs the objects.


//Implement getter and setter functions.
//When implementing setters, make sure you call calculateArea function
//because it is a 'helper function' and can not be called from outside

//in other words you can only call it inside the other methods of the class

//don't implement calculateArea() andgetName() functions. These are pure virtual
//in other words they are meant to be implemented in child classes

