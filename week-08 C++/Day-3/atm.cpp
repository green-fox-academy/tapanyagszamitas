#include <iostream>

using namespace std;

class ATM
{
private:
    string id;
    int pin_code;
    float money;

public:
    ATM(int pin_code, float money, string id)
    {
        this->id = id;
        this->pin_code = pin_code;
        this->money = money;


    int ask_for_pin = 0;
    string ask_for_id;
    cout <<
         "______________________________ \n"
         "|Welcome to the boring ATM!   |\n"
         "|This is the most safety      |\n"
         "|place for your virtual money!|\n"
         "|_____________________________|\n"
         "|Please input your ID !\n";

    cin >> ask_for_id;

    cout << "Please input your pin code!" << endl;

    cin >> ask_for_pin;

    if(ask_for_id == id && ask_for_pin == pin_code)
    {
        cout << "welcome in the system user menu!";
    }
    else
    {
        cout << "police will arrest you for hacking ATM";
    }

  }

    void print_data()
    {
        cout << "\t My pin is " << pin_code << " my id is "<< id << " and I have " << money << " forints" << endl;
    }
    void set_money(int pin_code, float money, string id)
    {
        if (this->pin_code == pin_code)
        {
            this->money = money;
        }
        else
        {
            cout << "nice try hacker!" << endl;
        }
    }

};

int main()
{


    ATM at(1234, 33.33, "name"); //pin, account balance, id

    //at.print_data();

    // at.set_money(134, 1200, name2);

    at.print_data();






    return 0;
}
