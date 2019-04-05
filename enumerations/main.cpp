#include <iostream>

using namespace std;

enum Suit {
    Spade,  // 0
    Club,   // 1
    Heart,  // 2
    Diamond // 3
};

/**
 * If you did not want the count to start at 0
 * For example if you cout Spade that will output 0
 * If you want the numbers to start differently reassign
 * Spade = 1.
 * 
 * 
*/

int main() {
    Suit myCard;
    Suit hisCard;
    myCard = Spade;
    hisCard = Club;

    if(myCard > hisCard) {
        cout << "I am the winner" << endl;
    } else {
        cout << "You lose" << endl;
    }

    
    return 0;
}