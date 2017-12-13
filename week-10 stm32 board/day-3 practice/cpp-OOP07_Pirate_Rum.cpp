#include <iostream>
#include <string>

using namespace std;

class Pirate{
public:
int counter =0;
void drink_rum(){
counter ++;
 hows_goin_mate(counter);
}
void hows_goin_mate(int counter){
if (counter <=5){
    cout<< "Arrrr!"<< endl;
    }else{
    cout<< "Nothin'"<< endl;
    }
}
};


int main() {

    Pirate p;

    for(int i =0; i<=5; i++){
    p.drink_rum();
    };

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  return 0;
}
