#include <iostream>
using namespace std;

/*
    Enter amount: 92
    dollars:  0
    quarters: 3
    dimes:    1
    nickles:  1
    pennies:  2
*/

int main()
{
    int amount {0};
    cout << "Enter amount: ";
    cin >> amount;

    const int dollars {100};
    const int quarters {25};
    const int dimes {10};
    const int nickles {5};
    const int pennies {1};

    int amountDollars = (amount / dollars);
    cout  << "dollars: "  << (amountDollars) << endl;
    amount -= amountDollars * dollars;


    int amountQuarters = (amount / quarters);
    cout  << "quarters: " << amountQuarters << endl;
    amount -= amountQuarters * quarters;


    int amountDimes = (amount / dimes);
    cout  << "dimes: "    << amountDimes << endl;
    amount -= amountDimes * dimes;


    int amountNickles = (amount / nickles);
    cout << "nickles: "  << amountNickles << endl;
    amount -= amountNickles * nickles;


    int amountPennies = (amount / pennies);
    cout << "pennies: "  << amountPennies << endl;
    amount -= amountPennies * pennies;


}