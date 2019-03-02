#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "ClientData.h" // ClientData class def

using namespace std;
void outputLine(ostream&, const ClientData&);

int main() {
       // raeading random access file
    ifstream inCredit{"credit.dat", ios::in | ios::binary};

    // exit program if ifstream cannot open file
    if(!inCredit) {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    }

    // output column heads
    cout << left << setw(10) << "Account" 
         << setw(16) << "Last Name"
         << setw(11) << "First Name"
         << setw(10) << right << "Balance\n";

    ClientData client; // create record

    // read first record from file
    inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));

    while(inCredit) {
        // display record
        if(client.getAccountNumber() != 0) {
            outputLine(cout, client);
        }

        // read next from file
        inCredit.read(reinterpret_cast<char*>(&client), sizeof(ClientData));
    }

    return 0;
}

void outputLine(ostream& output, const ClientData& record) {
    output << left << setw(10) << record.getAccountNumber()
        << setw(16) << record.getLastName()
        << setw(11) << record.getFirstName()
        << setw(10) << setprecision(2) << right << fixed
        << showpoint << record.getBalance() << endl;
}