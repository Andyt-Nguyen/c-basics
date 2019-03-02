#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRando(int high);

int main() {
    srand(time(NULL));

    int x {5};
    if(1 <= x && x <= 10) {
        cout << "1-10" << endl;
    } else if(20 < x && x < 30) {
        cout << "20-30" << endl;
    }


    return 0;
}


int generateRando(int high) {
    return 1 + (rand() % (high - 1));
}