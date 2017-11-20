#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>

using namespace std;

class Todo
{
public:
    Todo() {};
    Todo(string x, int prio, string done)
    {
        this->x = x;
        this->prio = prio;
        this->done = done;
    }

    void set_x(string x)
    {
        this->x = x;
    }
    string get_x()
    {
        return x;
    }

    void set_prio(int prio)
    {
        this->prio = prio;
    }
    int get_prio()
    {
        return prio;
    }

    void set_done(string done)
    {
        this->done = done;
    }
    string get_done()
    {
        return done;
    }

private:
    string x;
    string done;
    int prio;

};

class Storage
{
public:
    void menu();
    void command();
    void new_task();
    void write_to_file();
    void read_from_file();
    void list_tasks();
    void remove_task();
    void completes_task();
    void uncomplete_task();
    void empty_tasks();
    void priority_to_task();
    void list_tasks_priority();

private:
    vector<Todo> storage;
    Todo t;

};


void Storage::new_task()
{
    string user_input;
    getline(cin, user_input);
    if(user_input.empty() || string::npos == user_input.find_first_not_of(" ") )
    {
        cout << "Please enter your commands!" <<endl;
    }
    else
    {
        t = Todo(user_input, 0, "no");
        storage.push_back(t);
    }
}

void Storage::write_to_file()
{
    ofstream outfile;
    outfile.open("probe.txt");

    outfile << "No.  | Done? | Priority | Task name |" <<endl;
    for(unsigned int i = 0; i < storage.size(); i++)
    {
        outfile << i+1 << "\t" << storage.at(i).get_done() << "\t" << storage.at(i).get_prio() << "\t" << storage.at(i).get_x() << "\t" << endl;
    }
    outfile.close();
}

void Storage::read_from_file()
{
    ifstream infile;
    infile.open("probe.txt");

    cout << "List tasks by number" <<endl;
    cout << "No.  | Done? | Priority | Task name |" <<endl;
    for(unsigned int i = 0; i < storage.size(); i++)
    {
        cout << i+1 << "\t" << storage.at(i).get_done() << "\t" << storage.at(i).get_prio() << "\t" << storage.at(i).get_x() << "\t" << endl;
    }
    infile.close();
}

void Storage::list_tasks()
{
    cout << "List tasks by number" <<endl;
    cout << "No.  | Done? | Priority | Task name |" <<endl;
    for(unsigned int i = 0; i < storage.size(); i++)
    {
        cout << i+1 << "\t" << storage.at(i).get_done() << "\t" << storage.at(i).get_prio() << "\t" << storage.at(i).get_x() << "\t" << endl;
    }
}

void Storage::remove_task()
{
    int size1 = 0;
    int user_input;
    cin >> user_input;
    cout << endl;

    size1 = storage.size();

    if(!cin || size1 < user_input || 1 > user_input)
    {
        cout << "Give in a valid number!" << endl;
        cin.clear();
    }
    else
    {
        storage.erase(storage.begin()+user_input-1);
        storage.resize(size1-1);
    }

}

void Storage::completes_task()
{
    int size1 = 0;
    int user_input;
    cin >> user_input;
    cout << endl;

    size1 = storage.size();
    if(!cin || size1 < user_input || 1 > user_input)
    {
        cout << "Give in a valid number!" << endl;
        cin.clear();
    }
    else
    {
        storage.at(user_input-1).set_done("yes");
    }
}

void Storage::uncomplete_task()
{
    int size1 = 0;
    int user_input;
    cin >> user_input;
    cout << endl;

    size1 = storage.size();
    if(!cin || size1 < user_input || 1 > user_input)
    {
        cout << "Give in a valid number!" << endl;
        cin.clear();
    }
    else
    {
        storage.at(user_input-1).set_done("no");
    }

}

void Storage::empty_tasks()
{
    storage.clear();
}

void Storage::priority_to_task()
{
    int user_input;
    int user_input2;
    int size1 = storage.size();
    cin >> user_input;
    if(!cin || size1 < user_input || 1 > user_input)
    {
        cout << "Give in a valid number!" << endl;
        cin.clear();
    }
    else
    {
        cout << "Give in a number for priority between 1 and 5: ";
        cin >> user_input2;
        if(!cin ||user_input2 > 5 || user_input2 < 1)
        {
            cout << "Give in a valid number!" << endl;
            cin.clear();
        }
        else
        {
            storage.at(user_input-1).set_prio(user_input2);
        }
    }

}

void Storage::list_tasks_priority()
{
    cout << "List tasks by priority" <<endl;
    cout << "No.  | Done? | Priority | Task name |" <<endl;

    for(int j = 5; j >= 0; j-- )
    {
        for(unsigned int i = 0; i < storage.size(); i++)
        {
            if (storage.at(i).get_prio() == j)
            {
                cout << i+1 << "\t" << storage.at(i).get_done() << "\t" << storage.at(i).get_prio() << "\t" << storage.at(i).get_x() << endl;
            }
        }
    }

}


void Storage::command()
{
    string command;

    do
    {
        cin >> command;
        if (command == "exit")
        {
            cout << "The program is exiting now. Goodbye!" << endl;
            exit(0);
        }
        else if (command == "clr")
        {
            system("cls");
            continue;
        }
        else if (command == "menu")
        {
            menu();
            continue;
        }
        else if(command == "-a")
        {
            new_task();

        }
        else if (command == "-wr")
        {
            write_to_file();

        }
        else if (command == "-rd")
        {
            read_from_file();

        }
        else if (command == "-l")
        {
            list_tasks();

        }
        else if (command == "-e")
        {
            empty_tasks();

        }
        else if (command == "-rm")
        {
            remove_task();

        }
        else if (command == "-c")
        {
            completes_task();

        }
        else if (command == "-uc")
        {
            uncomplete_task();

        }
        else if (command == "-p")
        {
            priority_to_task();

        }
        else if (command == "-lp")
        {
            list_tasks_priority();

        }
        else
        {
            cout << "Wrong task name. Look at the possible tasks again." << endl;
        }

    }
    while (command != "exit");

}

void Storage::menu()
{
    system("cls");
    cout << "----------------------------------------\n";
    cout << "        Todo application                \n";
    cout << "----------------------------------------\n";
    cout << " Commands:                              \n";
    cout << " -a    Adds a new task                  \n";
    cout << " -wr   Write current todos to file      \n";
    cout << " -rd   Read todos from a file           \n";
    cout << " -l    Lists all the tasks              \n";
    cout << " -e    Empty the list                   \n";
    cout << " -rm   Removes a task                   \n";
    cout << " -c    Completes a task                 \n";
    cout << " -uc   Uncompletes a task               \n";
    cout << " -p    Add priority to a task           \n";
    cout << " -lp   Lists all the tasks by priority  \n";
    cout << "----------------------------------------\n";
    cout << " menu  Opens the main menu              \n";
    cout << " clr   Clear command line               \n";
    cout << " exit  Exiting from the program         \n";
    cout << "----------------------------------------\n";
    system("pause");

}


int main()
{
    Storage s;
    s.menu();
    s.command();
    return 0;
}
