#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        string name {"Frank"};
        int health;
        int xp;
    
    public:
        void talk(string text_to_say) {
            cout << name << " says " << text_to_say << endl;
        }
};

int main() {
    Player *andy = new Player();
    // andy->name= "Andy"; // will return error because this member is private
    // andy->xp = 12; // will return error because this member is private
    // andy->health = 100; // will return error because this member is private

    andy->talk("hey what's up?");
    return 0;
}