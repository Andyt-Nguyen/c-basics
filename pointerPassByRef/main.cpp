#include <iostream>
using namespace std;

void passByValue(int x);
void passByRef(int *x);

int main() {
    int sandy {44};
    passByRef(&sandy); // & passing the memory address of that variable
    cout << sandy << endl;
    return 0;
}

/**
 * This function will only make a copy of the 
 * value rather than actually change it
 * */
void passByValue(int x) {
    x = 55;
}

void passByRef(int *x) { // *x needs a memmory address
    *x += 2;
}



