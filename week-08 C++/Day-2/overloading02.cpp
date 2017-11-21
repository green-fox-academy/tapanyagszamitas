#include <iostream>
#include <string>

using namespace std;


// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.



string  add_string( string a, string b){
string e = a + "  this was two";

 return e;
 }

 string add_string(string a, string b, string c){

 string d = a+ b+ c +"   this was three";

 return d;
 }


 string add_string( string a, string b, string c, string d){

 string e = a + b + c + d + "   this was four";

 return e;
 }



int main() {

cout << add_string("egy ", "megymag ", "meg meg egy ", "megymag" ) << endl;

	return 0;
}


