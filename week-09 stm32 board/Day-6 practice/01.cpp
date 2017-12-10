#include <iostream>

using namespace std;

class Animal
{
protected:
    string name;
public:
    Animal(string _name)
    {
        name = _name;
    }

    string getName()
    {
        return name;
    }
    string setName(string _name)
    {
        name = _name;
    }
};


class Mammal:public Animal
{
public:
    Mammal(string _name): Animal(_name) {}

    void Feed()
    {
        cout<< "Feeding.. \n"<< endl;
    }

    void Sleep()
    {
        cout<< "Sleeping... \n"<< endl;
    }
};

class Fox: public Mammal
{
protected:
    string furcoat;
public:

    Fox(string _name): Mammal(_name) {}

    void setFurCoat(string _furcoat)
    {

        furcoat = _furcoat;
    }
 string getFurCoat()
    {
        return furcoat;
    }

};


//TODO: create a class called Mammal inherited from Animal
//extend it with to functions
//the one is 'Feed' which prints out 'Feeding...'
//the other is 'Sleep' which prints out 'Sleeping...'

//after that create another class called Fox
//extend it with a string data member called 'furcoat'
//then extend it with 'getFurCoat' and 'setFurCoat' methods


int main()
{

    Fox green("Green");

   // green.setName("Joska");
   cout << green.getName () << endl;

    green.Sleep();
    green.Feed();

    green.setFurCoat("red");
   cout << green.getFurCoat() << endl;
    //create a fox object and call all of its functions (all in all 7 including the constructor)



    return 0;
}
