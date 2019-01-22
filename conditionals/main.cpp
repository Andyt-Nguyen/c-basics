#include <iostream>
using namespace std;

int main()
{
    const int min {0};
    const int max {100};
    int num {};
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if(num >= 0) {
        cout << "\nYou entered a number greater than zero" << endl;
    } else if(num < 0) {
        cout << "\nYou entered a number less than zero" << endl;
    } else {
        cout << "You entered a number greater than 100" << endl;
    }
}