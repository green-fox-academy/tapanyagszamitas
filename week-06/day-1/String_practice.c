//TODO:
//Create a structure called "student":
//name of the student
//number of the student's grade - error handling
//type of the student's behavior in an enumeration ("behaviors"): - BAD_BEHAVIOR , GOOD_BEHAVIOR
//The student's are stored in an array.
// Write a function that returns with the grade's avarage
// write a function that prints out if the student's grade higher than 3 and the behavior is bad:
//"(student's name) you are fuckin amazing, please behave good"
//write a function that counts good behaviors, if they have 5 grades:
//return with the count of students

#include <stdio.h>
#include <stdlib.h>

struct student{
char name[20];
int grade;
enum behavior { good_behavior, bad_behavior};;
};

int main(){

struct student Joe;
struct student Jane;
struct student Kevin;
struct student Kate;

joe.name = "Joe";
joe.grade = 5;
joe.behavior = 1;


jane.name = "Jane";
jane.grade = 4;
jane.behavior = 2;


return 0;
}
