#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // Writing files
    ofstream theFile("players.txt"); // if no file is found create txt file

    if(theFile.is_open()) { // good practice to see if the obect exists
        cout << "Enter players ID, Name and Money" << endl;
        cout << "Control + C to end the program" << endl;

        int idNumber;
        string name;
        double money;
        while(cin >> idNumber >> name >> money) { // automatically inserts into variables
            theFile << idNumber << ' ' << name << ' ' << money << endl; // writes into the file
        }

        theFile.close(); // frees up memory
    } else {
        cout << "The file does not exist" << endl;
    }



    //  Reading files
    ifstream readFile("players.txt");
    if(readFile.is_open()) {
        int id;
        string name;
        double money;

        while(readFile >> id >> name >> money) {
            cout << "Id: " << id << " Name: " << name << " Money: " << money << endl;
        }

        readFile.close();
    } else {
        cout << "The file does not exist" << endl;
    }



}