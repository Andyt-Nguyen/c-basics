#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

using namespace std;

class Person {
    string name;
    int age;

    public:
        Person() = default;
        Person(string name, int age)
        : name{name}, age{age} {}

        bool operator<(const Person &rhs) const {
            return this->age < rhs.age;
        }

        bool operator==(const Person &rhs) const {
            return (this->name == rhs.name && this->age == rhs.age);
        }
};

// Finds the variable
void find_test() {
    vector<int> vec {1, 2, 3, 4, 5};

    // begin(vec) same as vec.begin()
    // end(vec) same as vec.end()
    // find(start, end, number you want to find)
    auto loc = find(vec.begin(), vec.end(), 1); // remember auto is an iterator

    // if the location is not the end of the vec then we found it!
    if(loc != end(vec)) {
        cout << "Found the number " << *loc << endl;
    } else {
        cout << "Could not find the number" << endl;
    }


    // =========================================================================
    list <Person> players {
        {"Larr", 18},
        {"Moe", 20},
        {"Curly", 21}
    };

    auto loc1 = find(players.begin(), players.end(), Person{"Moe", 20});
    if(loc1 != players.end()) {
        cout << "Found Moe!" << endl;
    } else {
        cout << "Coundn't find Moe" << endl;
    }



}


// Counts the number of eleemtns in a container
void count_test() {
    vector<int> vec {1, 2, 3, 4, 5, 1, 5, 4, 3, 2, 1};

    // count(begin, end, num you want to find)
    int num = count(begin(vec), end(vec), 1);

    // num returns the amount of that item found
    cout << "Num 1"  << " occurs " << num << " times." << endl;
}

// counts the number if it fits a condition
void count_if_test() {
    vector<int> nums {1,2,3,4,5,6,7,8,9,10};

    // count_if(begin, end, [](int x){ return conditional })
    int evenNum = count_if(nums.begin(), nums.end(), [](int x) { return x % 2 == 0; });
    cout << "There are " << evenNum << " even numbers found" << endl;

    int oddNums = count_if(nums.begin(), nums.end(), [](int x){ return x % 2 != 0; });
    cout << "There are " << oddNums << " odd numbers found" << endl;

}

// replace occurences of elements in a container
void replace_test() {
    vector<int> nums {1,2,3,4,1,5,6,1,7,8,9,1};

    // Printing all the numbers
    for(auto i: nums) {
        cout << i << " ";
    }

    cout << endl;

    // replace(begin, end, num to replace, replace number)
    replace(nums.begin(), nums.end(), 1, 100);

    for(auto i: nums) {
        cout << i << " ";
    }

    cout << endl;

}

// Returns a boolean if it fits a conditionl
void all_of_test() {
    vector<int> nums {14,12,32,14,35,26,97,81,29,11};

    // all_of(begin, end, [](int x) { return conditional; })
    if(all_of(nums.begin(), nums.end(), [](int x) { return x > 10; })) {
        cout << "All of these numbers are greater than 10" << endl;
    } else {
        cout << "One of these numbers are not greate than 10" << endl;
    }

    if(all_of(nums.begin(), nums.end(), [](int x){return x < 10;})) {
        cout << "All of these numbers are less than 10" << endl;
    } else {
        cout << "One of these numbers are greater than 10" << endl;
    }
}

void string_transform_test() {
    string str1 {"This is a string"};
    cout << "Before transformation: " << str1 << endl;
    
    // transform(begin, end, where to start, function())
    // :: <- means global scope 
    // toupper method is in the global scope which then uppercases all the letters
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "After transformation: " << str1 << endl;
}

int main() {
    // find_test();
    // count_test();
    // count_if_test();
    // replace_test();
    // all_of_test();
    // string_transform_test();
    
    return 0;
}