#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    // Mystring empty; // no-args constructor
    // Mystring larry("Larry"); // overloaded constructor
    // Mystring stooge {larry}; // copy constructor

    // empty.display();
    // larry.display();
    // stooge.display();

    Mystring a {"Hello"};
    Mystring b;
    b = a;

    b = "This is a string";
    return 0;
}