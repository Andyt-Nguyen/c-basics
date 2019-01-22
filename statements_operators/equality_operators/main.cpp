#include <iostream>
using namespace std;

int main() {
    int num1 {};
    int num2 {};
    cout << "Enter two number separated by spaces: ";
    cin >> num1 >> num2;
    cout << boolalpha; // transforms 0 and 1 -> True and False

    cout << num1 << " < " << num2 << " -> " << (num1 < num2) << endl;
    cout << num1 << " > " << num2 << " -> " << (num1 > num2 ) << endl;
    cout << num1 << " = " << num2 << " -> " << (num1 == num2) << endl;
    cout << num1 << " <= " << num2 << " -> " << (num1 <= num2 ) << endl;
    cout << num1 << " >= " << num2 << " -> " << (num1 >= num2) << endl;

    return 0;
}