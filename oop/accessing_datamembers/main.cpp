#include <iostream>
#include <string>

using namespace std;

class Player {
    public:
        // attributes
        string name;
        int health;
        int xp;

        // methods
        // One way to do it
        void talk(string text_to_say) {
            cout << name << " says " << text_to_say << endl;
        };
        bool is_dead();
};


class Account {
    public:
        // attributes
        string name;
        double balance;

        // methods
        bool deposit(double bal) {
            balance += bal;
            cout << "In deposit" << endl;
            return true;
        }

        bool withdraw(double bal) {
            balance -= bal;
            cout << "In withdraw" << endl;
            return true;
        }
};



int main() {
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    // Pointer
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;

    enemy->xp = 15;
    enemy->talk("I will destroy you");




    Account frank_acc;
    frank_acc.name = "Franks account";
    frank_acc.balance = 5000.0;

    frank_acc.deposit(1000.0);
    frank_acc.withdraw(500.0);

    Account *mary_acc = new Account;
    mary_acc->name = "Mary";
    mary_acc->balance = 1000.0;

    mary_acc->deposit(200.0);
    mary_acc->withdraw(100.0);
    
    return 0;
}