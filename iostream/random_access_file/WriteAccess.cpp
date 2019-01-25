#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "ClientData.h" // ClientData class def
using namespace std;


int main() {
    ofstream outCredit{"credit.dat", ios::in | ios::out | ios::binary};
    // writing to  random acces file
    cout << "Enter account number (1 to 100, 0 to end input)\n?";
    int accountNumber;
    string lastName;
    string firstName;
    double balance;

    cin >> accountNumber; // read account number

    // user enters information, which is copied into file
    while(accountNumber > 0 && accountNumber < 100) {
        // user enters last name, first name and balance
        cout << "Enter lastname, firstname and balance\n?";
        cin >> lastName >> firstName >> balance;

        // create ClientData object
        ClientData client{accountNumber, lastName, firstName, balance};

        // seek position in file of user-specified record
        outCredit.seekp(
            (client.getAccountNumber() - 1) * sizeof(ClientData)
        );


        // write user-speicified information in file
        outCredit.write(
            reinterpret_cast<const char*>(&client), sizeof(ClientData)
        );

        // enable user to enter another account
        cout << "Enter account number\n?";
        cin >> accountNumber;
    }
    return 0;
}