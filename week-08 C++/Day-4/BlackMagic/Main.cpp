#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <conio.h>

#include "SerialPortWrapper.h"

using namespace std;

typedef enum{PRINT_MENU, OPEN_PORT, START_STOP_LOG, CLOSE_PORT, LISTS_EROR, EXIT}e_commands;

void print_menu(){
cout <<

"|=====================================|\n"
"|   Temperature Logger Application    |\n"
"|=====================================|\n"
"|   Commands:                         |\n"
"|                                     |\n"
"|h        Show command list           |\n"
"|o        Open port                   |\n"
"|s        Start logging / Stop logging|\n"
"|c        Close port                  |\n"
"|l        List after error handling   |\n"
"|e        Exit from the program       |\n"
"|=====================================|\n"
"\n";
}


int main()
{

 print_menu();

    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection

        SerialPortWrapper *serial = new SerialPortWrapper("COM15", 115200);
        serial->openPort();
        string line;
        while(1){
        serial->readLineFromPort(&line);
        if (line.length() > 0){
        cout << line << endl;
        }
        }
        serial->closePort();

    return 0;
}
