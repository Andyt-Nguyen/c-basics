#include <iostream>
using namespace std;

int main()
{
    int num1 {10}; // this is not an assignment operator rather an initialization operator
    int num2 {20};

    num1 = 100; // Using the assignment operator. Assignment statement

    // location = content
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    int result {0};
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1/num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
}