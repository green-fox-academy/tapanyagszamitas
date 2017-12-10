#include "Square.h"

Square::Square(float _w, float _h) : Shape(_w, _h) {
    this->calculateArea();
}

Square::~Square() {
cout << "shape over"<< endl;//nothing to do here
}

//implement calculateArea() and getName()

string Square::getName(){
return name;
}
