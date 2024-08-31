#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Functions.h"
#include "Variables.h"
using namespace std;

void pause(int);
string id;

bool login() {
start:
    string password, line;
    int choose;
    bool login_check = false;
    cout << "===============================================" << endl;
    cout << "            WELCOME TO ECO-TRIA" << endl;
    cout << "===============================================" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Quit" << endl;
    cout << "===============================================" << endl;
    cin >> choose;
    switch (choose) {
    case 1:
    {
        system("cls");
        ifstream in("ids.csv");
        bool found = false;
        cout << "Enter Id: ";
        cin >> id;
        while (getline(in, line)) {
            stringstream ss(line);
            string temp_id, temp_pass;
            getline(ss, temp_id, ',');
            getline(ss, temp_pass);
            if (temp_id == id) {
                found = true;
                cout << "Password: ";
                cin >> password;
                if (temp_pass == password) {
                    login_check = true;
                }
                else {
                    cout << "Wrong Password..." << endl;
                    pause(2);
                }
                break;
            }
        }
        in.close();
        if (!found) {
            cout << "Id not found..." << endl;
            pause(2);
        }
        break;
    }

    case 2:
    {
        system("cls");
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Password: ";
        cin >> password;
        ofstream out("ids.csv", ios::app);
        out << id << "," << password << endl;
        cout << "Registered Successfully..." << endl;
        pause(2);
        out.close();
        system("cls");
        goto start;
    }

    case 3:
        goto end;

    default:
        cout << "Invalid option" << endl;
        break;
    }
end:
    if (login_check) {
        cout << "Login Succesfull..." << endl;
        pause(2);
        return true;
    }
    else {
        cout << "Login Error..." << endl;
        pause(2);
        return false;
    }
}