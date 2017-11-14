#include <iostream>
#include "BankAcc.h"

using namespace std;

int main()
{
    BankAcc ba(222, 40.5);
    ba.print_data();
    ba.set_money(224, 106);
    ba.print_data();
    return 0;
}
