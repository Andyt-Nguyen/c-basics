#include <iostream>
#include <fstream>
#include "ClientData.h"
using namespace std;

int main() {
    ofstream outCredit{"credit.dat", ios::in | ios::out | ios::binary};

    // exit program if ofstream could not open file
    if(!outCredit) {
        cerr << "File could not be opened. " << endl;
        exit(EXIT_FAILURE);
    }

    ClientData blankClient; // constructor zeros out each data member
    cout << "CReating file 100 blank records" << endl;
    // output 100 blank records to file
    for(int i{0}; i < 100; ++i) {
        outCredit.write(
            reinterpret_cast<const char*>(&blankClient), sizeof(ClientData));
    }
    

}