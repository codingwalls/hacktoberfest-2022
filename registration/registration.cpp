#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

string name, id, p_w;

void n_register();
void login();

void self_exit();

void f_p();

void self_exit()
{
    system("cls");
    cout << "\nThank You for using our portal!";
    exit(1);
}

void n_register()
{
    ofstream phone("number.txt", ios::app);
    system("cls");

    cout << "\nEnter Name : ";
    cin >> name;
    cout << "\nEnter email_id: ";
    cin >> id;
    cout << "\nCreate Password: ";
    cin >> p_w;

    if (phone.is_open())
    {
        phone << name << " " << id << " "
              << p_w << endl;
        cout << "\nRegistered successfully !";
    }
    else
    {
        cout << "\nError in opening record!";
    }

    cout << endl
         << endl;
    system("pause");
    system("cls");
    phone.close();
}

// Method 4
// Helper method
void login()
{
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    cout << "\nEnter Name to search : ";
    cin >> keyword;
    while (myfile >> name >> id >> p_w)
    {
        if (keyword == name || keyword == id)
        {
            system("cls");
            cout << "\nLogin Access detailS";
            cout << "\nFirst Name : " << name;
            cout << "\nemail_id: " << id;

            found = true;
            break;
        }
    }
    if (found == false)
        cout << "\nNo such contact is found!";

    cout << endl
         << endl;
    system("pause");
    system("cls");
}
void f_p()
{
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    cout << "\n\tEnter Name to search : ";
    cin >> keyword;
    while (myfile >> name >> id >> p_w)
    {
        if (keyword == name || keyword == id)
        {
            system("cls");

            cout << "\nPassword: " << p_w;
            found = true;
            break;
        }
    }
    if (found == false)
        cout << "\nNo such contact is found!";

    cout << endl
         << endl;
    system("pause");
    system("cls");
}

// Method 5
// Helper method

// Method 6
// Helper method

// Method 7
// Main driver method
int main()
{
    int choice;
    system("cls");
    system("color 04");

    while (1)
    {
        cout << "\nWELCOME TO OUR PORTAL";
        cout << "\n\t1. New Registration\n\t2. Search a user\n\t3.
                Forgot Password\n\t4.Exit\n\t >
            ";

            cin >>
            choice;

        // Switch case
        switch (choice)
        {
        case 1:
            n_register();
            break;

        case 2:
            login();
            break;

        case 3:
            f_p();
            break;

        case 4:
            self_exit();
            break;

        default:
            cout << "\ntInvalid Input!";
        }
    }
    return 0;
}