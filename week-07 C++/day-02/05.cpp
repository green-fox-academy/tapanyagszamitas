#include <iostream>
#include <string>

using namespace std;

class Circle {
  public:
    float radius;
    float area;
    float circumference;

Circle(float radius){
    this->radius = radius;
    area = radius*radius*3.14;
    this->area = area;
    circumference = radius*2*3.14;
    this->circumference = circumference;
    }
~Circle(){
    cout << "circle finally squared...." << endl;
    }
    //void get_circumference(float circumference){}

    void print_data(){
    cout << radius <<" "<< area <<" "<< circumference<< endl;
    };
};

int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

   Circle fs(10);
   fs.print_data();

  return 0;
}
