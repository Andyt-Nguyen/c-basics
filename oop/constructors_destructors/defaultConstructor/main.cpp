#include <iosream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int xp;
    int hp;

public:

    void set_name(string n) {
        name = n;
    }

    string get_name() {
        return name;
    }

    // Default Constructor
    Player() {
        name = "None";
        xp = 0;
        hp = 0;
    }

    // Overloaded constructor
    Player(string name_val, int xp_val , int hp_val) {
        name = name_val;
        xp = xp_val;
        hp = hp_val;
    }
};



int main() {
    // Using default constructor
    Player franklin;
    franklin.set_name("Franklin")
    cout << franklin.get_name() << endl;

    // using the overloaded default constructor
    Player frank = new Player("Frank", 10, 20);
    cout << frank.get_name() << endl;
    return 0;
}