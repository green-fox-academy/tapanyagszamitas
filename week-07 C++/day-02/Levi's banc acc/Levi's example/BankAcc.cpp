#include "BankAcc.h"
#include <iostream>

using namespace std;

BankAcc::BankAcc(int pin_code, float money)
{
    this->pin_code = pin_code;
    this->money = money;
}

BankAcc::~BankAcc()
{
    cout << "do you have a super shop card?" << endl;
}

void BankAcc::print_data(){
    cout << "hello my pin is " << pin_code << " and i have " << money << " forints" << endl;
}

void BankAcc::set_money(int pin_code, float money){
    if (this->pin_code == pin_code){
        this->money = money;
    } else {
        cout << "nice try hacker!" << endl;
    }
}
