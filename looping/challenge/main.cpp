#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool flag {false};
     // Vectors
        vector<int> listOfNums{};

    while (!flag) {
        cout << "P  -  Print numbers" << endl;
        cout << "A  -  Add numbers to list" << endl;
        cout << "M  -  Display mean of numbers" << endl;
        cout << "S  -  Display smallest number" << endl;
        cout << "L  -  Display largest number" << endl;
        cout << "Q  -  Quit\n" << endl;


        cout << "Enter your choice: ";
        char userInput {'z'};
        cin >> userInput;
        cout << endl;

        switch(userInput) {
            case 'P': case 'p':
            {
                if(listOfNums.size() <= 0) {
                    cout << "[ ] List is empty" << endl;
                } else {
                    cout << "[ ";
                    for(auto num: listOfNums){
                        cout << num << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            }

            case 'A': case 'a':
            {
                int num {0};
                cout << "Enter a number: ";
                cin >> num;
                listOfNums.push_back(num);
                cout << "Number has been added to the list" << endl;
                break;
            }

            case 'M': case 'm':
            {
                if(listOfNums.size() <= 0) {
                    cout << "The average is 0";
                } else {
                    int sum {0};
                    for(auto num: listOfNums) {
                        sum += num;
                    }
                    double avg = sum / listOfNums.size();
                    cout << "The average: " << avg << endl; 
                }
                break;
            }

            case 'S': case 's':
            {
                if(listOfNums.size() <= 0) {
                    cout << "There are numbers in the list" << endl;
                } else {
                    int smallNum {listOfNums.at(0)};
                    for(auto num: listOfNums) {
                        if(num < smallNum) {
                            smallNum = num;
                        }
                    }
                    cout << "Smallest number: " << smallNum << endl;
                }
                break;
            }

            case 'L': case 'l': 
            {
                if(listOfNums.size() <= 0) {
                    cout << "There are no numbers in the list" << endl;
                } else {
                    int largeNum {listOfNums.at(0)};
                    for(auto num: listOfNums) {
                        if(num > largeNum) {
                            largeNum = num;
                        }
                    }
                    cout << "Largest Number: " << largeNum << endl;
                }
                break;
            }

            case 'Q': case 'q':
                flag = true;
                break;

            default:
                cout << "Those were not any of the choices";
        }
    }

    cout << "Thanks for playing!" << endl;
   

    return 0;
}
