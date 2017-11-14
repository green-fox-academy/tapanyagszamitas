
#include <iostream>
#include <string>

using namespace std;


class Pirate{
public:
    int i = 0;

    void drink_rum()
    {
        i++;
        hows_going_mate(i);
    }

    void hows_going_mate(int i)
    {
        if (i < 5){
            cout << "Nothin' " << endl;
        } else {
            cout << "Arrrr! " << endl;
        }
    }
};


int main()
{
    Pirate p;
    p.drink_rum();
    p.drink_rum();
    p.drink_rum();
    p.drink_rum();
    p.drink_rum();
    p.drink_rum();

    return 0;
}
