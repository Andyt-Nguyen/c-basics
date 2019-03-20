#include <iostream>
#include <string>

using namespace std;


// This class declaration will be in a .h file
class Account {
private:
    // attributes
    string name;
    double balance;

public:
    // methods
    void set_balance(double bal) {
        balance = bal;
    }

    double get_balance() {
        return balance;
    }


    // These methods below will be declared outside of this class
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

// These functions will be in a Account.cpp file
void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
        return true;
    }
    return false;
}

bool Account::withdraw(double amount) {
    if(amount < balance) {
        balance -= amount;
        return true;
    }

    return false;
}




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
