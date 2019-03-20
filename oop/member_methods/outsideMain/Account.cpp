#include "Account.h"
#include <string>

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
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