#include <iostream>
#include <string>
#include "Account.h"
using namespace std;


int main() {
    Account frank_acc;
    frank_acc.set_name("Frank");
    frank_acc.set_balance(1000.0);

    if(frank_acc.deposit(220.0)) {
        cout << "Deposit OK!" << endl;
    } else {
        cout << "Not allowed" << endl;
    }

    if(frank_acc.withdraw(500.0)) {
        cout << "Withdrawl ok!" << endl;
    } else {
        cout << "Not allowed" << endl;
    }

    if(frank_acc.withdraw(1500.0)) {
        cout << "Withdraw allowed" << endl;
    } else {
        cout << "Not suffucient funds" << endl;
    }


    return 0;
}