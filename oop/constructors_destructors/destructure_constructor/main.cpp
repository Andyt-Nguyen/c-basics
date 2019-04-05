#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        string name;
        int health;
        int xp;

    public:
        void set_name(string nameVal) {
            name = nameVal;
        }

        // Overloaded constructors
        Player() {
            cout << "No args constructor called" << endl;
        }

        Player(string nameVal) {
            cout << "Overloaded string name constructor called" << endl;
        }

        Player(string nameVal, int heathVal, int xpVal) {
            cout << "Three arg constructor called" << endl;
        }

        ~Player() {
            cout << "Destructor called for " << name << endl; 
        }
};


int main() {
    {
        Player slayer;
        slayer.set_name("Slayer");

    }

    {
        Player frank;
        frank.set_name("Frank");

        Player hero("Hero");
        hero.set_name("Hero");

        Player villian("Villian", 100, 100);
        villian.set_name("Villian");
    }

        Player *enemy = new Player;
        enemy->set_name("Enemy");

        Player *level_boss = new Player("Level Boss", 1000, 30);
        level_boss->set_name("Level boss");

        delete enemy;
        delete level_boss;

    return 0;
}