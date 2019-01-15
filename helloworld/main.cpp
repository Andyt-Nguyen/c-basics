#include <iostream> // input outout library

using namespace std;

int main()
{
    // << insertion operator
    // >> extraction operator
    // int fav_num;
    // std::cout << "What is your favorite number? ";
    // std::cin >> fav_num;
    // std::cout << "That is my favorite number too!" << std::endl;
    // std::cout << "No really " << fav_num << ", is my favorite number!";

    // Basic IO Streams
    int num1;
    double num2;

    cout << "Type in number: ";
    cin >> num1;

    cout << "Type in double: ";
    cin >> num2;

    cout << "You have typed in " << num1 << " and " << num2;

    // Buffer errors will occur when doing something like this
    // if you were to type in a double for the first number such as 10.5
    // it will read 10 but once it sees "." it will immediately read it
    // and assign the variable to num2 with the value 0.5

    return 0;
}