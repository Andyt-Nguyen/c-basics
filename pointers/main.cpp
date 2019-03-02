#include <iostream>
using namespace std;

int main() {
    /**
     * & - address operator(displays the memory address of the variable on your compouter)
     * */


    int fish {5};

    // Prints out the memory address of fish
    cout << &fish << endl;


    // Pointers
    // this fishpointer will point to a memory address
    // and will have its memory address as its value
    int *fishPointer;
    fishPointer = &fish; // now fishPointer will be pointing to the memory address of fish

    cout << fishPointer << endl;



    return 0;
}
