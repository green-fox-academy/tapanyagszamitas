#include <iostream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

class Student{
private:
    vector<unsigned char>grades;
public:
    void add_grade(unsigned char grade){
    grades.push_back(grade);
    }
    float get_average(){
  size_t sum = 0;
    for (size_t i = 0; i < grades.size(); i++) {
      sum += grades.at(i);
    }
    return (float) sum / grades.size();
}
};

int main() {
    Student st;
    st.add_grade(3);
     st.add_grade(4);
     st.add_grade(5);
     st.add_grade(1);


    cout<<  st.get_average()<< endl;


    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

  return 0;
}
