#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;
enum type {PLAYER, MONSTER};
class Character
{
private:
    string name;

    int health_value;
    int attack_value;
    int defense_value;
    enum type type_p;
public:

    Character(string name, enum type, int health_value, int attack_value, int defense_value)
    {

        this-> name = name;
        this-> type_p = type_p;
        this-> health_value = health_value;
        this-> attack_value = attack_value;
        this-> defense_value = defense_value;
    }

    int attack_methode(int defense_value)
    {
        if (attack_value > defense_value)
        {
            return 1;
        }
        else return 0;
    }

    int get_def()
    {
        return defense_value;
    }

    int get_hp()
    {
        return health_value;
    }
    int get_av()
    {

        return attack_value;
    }

    void set_hp(int health_value)
    {
        this-> health_value = health_value;
    }

    void print_hp()
    {
        cout<< name<< " " <<health_value << endl;
    }
    int luck()
    {
        srand(time (0));
        return rand()%2+1;
    }

};

void szornyeteg_attac()
{




}

int main()
{

    Character harcos = Character(" Sarkanyolo Joco a hos", PLAYER, 100, 10, 100 );
    Character szornyeteg = Character("Ferenc a szornyeteg", MONSTER, 100, 10, 75 );


while(  harcos.get_hp() >=0 && szornyeteg.get_hp() >=0  ){


    harcos.print_hp();
    szornyeteg.print_hp();

    cout<<endl;

    if(szornyeteg.attack_methode(harcos.get_def())==0)
    {
        harcos.set_hp((harcos.get_hp())-((szornyeteg.get_av())*szornyeteg.luck() )*szornyeteg.get_def()/100   );
    };

     Sleep(szornyeteg.luck());

    harcos.print_hp();
    szornyeteg.print_hp();
    cout<<endl;

    if(harcos.attack_methode(szornyeteg.get_def())==0)
    {
        szornyeteg.set_hp((szornyeteg.get_hp())-harcos.get_av()*harcos.luck()*harcos.get_def()/100       );
    };

    Sleep(harcos.luck()*10);

    cout<<endl;
}


    //RPG Game lite
    //Create a Character class with the following preferences:
    //name
    //character type (player/monster)
    //health point value
    //attack value
    //defense value
    //attacking method which takes a character class and decreases its health
    //value with (current character class attack - input character class defense),
    //if the output is minus, then our health is decreased
    //set the attacking method to have 50% chanse to count our attack value twice,
    //(2xcurrent attack - input defense) before calculating the final health points.

    //create 2 instances of the character class and fill their base stats from their constructor
    //make them attack each other with the attack method from the character class
    //after each round print both the attacker, and the attacked character health
    //make them fight each other until one of them has a health point lower or equal 0
    //print the winner and offer a new game

    //dont forget to use private variables, and get/set methods, and also place out_of_range
    //character class into a seperate file

    return 0;
}
