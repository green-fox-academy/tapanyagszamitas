#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age){
        this->age = age;
        this->name = name;
    }
    ~Student(){
        cout << "Student finally graduated" << endl;
    }
    void print_data(){
        cout << name <<" "<< age << endl;
    }
};

int main()
{

    // Create a new instace of the Student class and set it's name to "John" and
    // it's age to 21 with it's constructor

    Student s ("John", 27);
    s.print_data();

    return 0;
}
