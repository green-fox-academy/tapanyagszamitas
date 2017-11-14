#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int grade;

    Student(string name, unsigned grade){
    this->name = name;
    this->grade = grade;
    }
    ~Student(){
    cout << "Hasta la vista baby" << endl;
    }
    void print_data(){
    cout << name <<" "<< grade << endl;
    }
};

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades


Student sa("John", 5);
 sa.print_data();

  return 0;
}
