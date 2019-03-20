#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;

public:
    // overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
    string getName();
};

// initilizing constructor before it is called :instant var {val}
Player::Player()
    :name{"None"}, health{0}, xp{0} {
};

Player::Player(string name_val)
    : name{name_val} {

}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {

};

string Player::getName() {
    return name;
} ;




int main() {
    Player empty;
    Player frank{"Frank"};
    Player villian{"Villian", 100, 55};
    return 0;
}