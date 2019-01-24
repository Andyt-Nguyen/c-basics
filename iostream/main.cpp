#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() 
{
    ofstream hello_world;
    hello_world.open("readme.txt", ios::out);

    if(!hello_world) {
        cerr << "File cout not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the account, name, and balance.\n" 
        << "Enter end-of-file to end input.\n?";

    int account;
    string name;
    double balance;

    while(cin >> account >> name >> balance) {
        hello_world << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }
    hello_world.close();
    return 0;
}