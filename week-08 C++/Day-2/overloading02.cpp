#include <iostream>
#include <string>

using namespace std;

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


