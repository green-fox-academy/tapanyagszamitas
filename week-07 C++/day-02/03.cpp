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
    ~Student(){
    cout << "Hasta la vista baby" << endl;
    }
    void print_data(){
    cout << name <<" "<< age << endl;
    }
    void greet(){
    cout << "Hello my name is " << name << endl;

    }
};

int main() {
   // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"
Student sa("John", 21);
 sa.print_data();
sa.greet();
  return 0;
}
