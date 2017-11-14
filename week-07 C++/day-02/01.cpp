#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;

    Student(string name, unsigned age){
    this->name = name;
    this->age = age;
    }

    void print_data(){
    cout << name <<" "<< age << endl;
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
Student sa("John", 21);
 sa.print_data();

  return 0;
}
