#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum UserRole {CUSTOMER, ADMIN };

class User
{
public:
    User(string name, int pin, UserRole role, int balance)
    {
        this -> name = name;
        this -> pin = pin;
        this -> role = role;
        this -> balance = balance;
    };

    string getName(){
    return name;
    }


    bool checkPin(string pinFromUserInput);

    void print_menu(string name, int pin);

private:
    string name;
    int pin;
    UserRole role;
    int balance;
};

class ATM
{
public:
    ATM(int atm_balance)
    {
        this -> atm_balance = atm_balance;
    };

    void addUser(User* user)
    {
        users.push_back(*(user));
    };
//   User* whoIsTheReachest();

    // User* loginUser(String username, password);
    void withdraw(int amount, string name);

    int atm_balance;
    vector <User> users;
    private:
};

void User::print_menu(string name, int pin)
{

    this->name = name;
    this->pin = pin;

    int ask_for_pin = 0;
    string ask_for_name;
    cout <<
         "______________________________ \n"
         "|Welcome to the boring ATM!   |\n"
         "|This is the most safety      |\n"
         "|place for your virtual money!|\n"
         "|_____________________________|\n"
         "|Please input your ID !\n";


    cin >> ask_for_name;

    cout << "Please input your pin code!" << endl;

    cin >> ask_for_pin;

    if(ask_for_name == name)
    {
        if(ask_for_pin == pin)
        {
            cout << "welcome in the system user menu!";
        }
    }
    else
    {
        cout << "police will arrest you for hacking ATM";
    }
}


int main()
{


    ATM atm(10000);

    atm.addUser(new User("Admin", 1234, ADMIN, 100));
    atm.addUser(new User("Josef", 1234, CUSTOMER, 200));
    atm.addUser(new User("Bela", 1234, CUSTOMER, 300));
    atm.addUser(new User("Ferenc", 1234, CUSTOMER, 400));
    atm.addUser(new User("Maria", 1234, CUSTOMER, 500));



User u("Valaki", 4321,CUSTOMER, 200);


atm.addUser(&u);
cout << atm.users.at(5).getName() << endl;
u.print_menu("Valaki", 4321);

    //while(true)
    {
        // parancs bekérés
        // login
        // username
        // pin

        /*    User* user = atm.loginUser(name, pin);
             if (user == NULL){
                 cout << "Hibas pin";
             }
             else
             {
                 atm.withdraw(1231);
             }
             // parancs végrehajtás
         }

        */

        return 0;
    }
}
