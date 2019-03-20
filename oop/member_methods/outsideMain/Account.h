#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
private:
    // attributes
    std::string name;
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
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_