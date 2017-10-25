#include <stdio.h>
#include <math.h>

int main(){

 int a = 1234;
 int *p_a;


 p_a = &a;
 *p_a = 123;
 //a = 100;

//TODO:
// print the memory address of the variable


printf("This is the memory adress of 'a' integer  %p \n",  p_a);

}
