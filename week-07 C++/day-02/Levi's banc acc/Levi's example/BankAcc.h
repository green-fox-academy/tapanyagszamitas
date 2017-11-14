#ifndef BANKACC_H
#define BANKACC_H
#include <iostream>

using namespace std;


class BankAcc
{
    public:
        BankAcc(int pin_code, float money);
        virtual ~BankAcc();
        void print_data();
        void set_money(int pin_code, float money);

    private:
        int pin_code;
        float money;
        string name;
};

#endif // BANKACC_H
