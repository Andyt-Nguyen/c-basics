// istringstream constructors.
#include <iostream>     // std::cout
#include <string>       // std::string
#include <cctype>
#include <cstring>
#include <vector>

using namespace std;

bool checkIfOperator(char op);

int main () {
    vector<int> vec {};
    string postFix {"12 5 6 2"};
    string str {""};

    for(auto i : postFix) {
        if(i == ' ') {
            vec.push_back(stoi(str));
            str={""};
        } else if(checkIfOperator(i)) {
            
        } else {
            str += i;
        }
    }
    for(int a : vec) {
        cout << "Hry " << a << endl;
    }
    return 0;
}



bool checkIfOperator(char op) {
    return (
        op == '*' || 
        op == '/' || 
        op == '+' || 
        op == '-' ||
        op == '%');
}
