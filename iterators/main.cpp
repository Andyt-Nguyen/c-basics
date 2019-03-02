#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

void display(const vector<int> &vec) {
    cout << "[";
    for(auto &i : vec) {
        cout << i << " ";
    }

    cout << "]" << endl;
}


void test1() {
    vector<int> nums1 {1,2,3,4,5};

    // Points to 1
    auto it = nums1.begin();
    
    cout << *it << endl;

    // Points 2
    it++;
    cout << *it << endl;

    // Points to 4
    it+=2;
    cout << *it << endl;

    // Points to 2
    it-=2;
    cout << *it << endl;

    // Points to 5
    it = nums1.end() - 1;
    cout << *it << endl;

}


void test2() {
    vector<int> nums1 {1, 2, 3, 4, 5};

    // Points to 1
    // Same as the last one but in a long way
    vector<int>::iterator it = nums1.begin();

    // While it is not the last one
    // display each number in the vect
    // At the end of the vector the it will point to the
    // last one
    while(it != nums1.end()) {
        cout << *it << endl;
        it++;
    }


    // put the reference back to the first number
    it = nums1.begin();
    
    // Doing the while loop again to look at all the numbers
    // and change its content to 0
    while(it != nums1.end()) {
        // this derefences the iterator = 0
        *it = 0;
        it++;
    }
    display(nums1);

}


void test3() {
    vector<int> nums1 {1,2,3,4,5};

    // using const iterator
    // Pointing to 1
    vector<int>::const_iterator it1 = nums1.begin();
    // another way to write it
    // auto it1 = nums1.cbegin();

    while(it1 != nums1.end()) {
        cout << *it1 << endl;
        it1++;
    }

    // this function will throw an error
    // while(it1 != nums1.end()) {
    //     *it1 = 0;
    //     it1++;
    // }
}


void test4() {
    vector<int> vec {1, 2, 3, 4, 5};

    // Reverse iterator so the pointer points
    // at 5. Notice ** rbegin()
    auto it1 = vec.rbegin();

    // Now that the vector is in reverse
    // it will iterate backwards or forwards
    // depending on how you look at it.
    while(it1 != vec.rend()) {
        cout << *it1 << endl;
        it1++;
    }


    // Here we are using another conatiner called list
    // The list is a Doubly LinkList
    list<string> names {"Larry", "Moe", "Curly"};

    // Constant Reverce Pointer pointing to Curly
    auto it2 = names.crbegin();

    // Prints Curly
    cout << *it2 << endl;

    // Derefrence and now pointing to Moe
    it2++;
    cout << *it2 << endl;



    // Using Map()
    // Map: Key Value Pairs
    map<string, string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"Andy", "Javascript"}
    };

    // Points to the first item in the map
    auto it3 = favorites.begin();

    // Loops through until it is not the end of the map
    while(it3 != favorites.end()) {
        cout << it3->first << " : " << it3->second << endl;
        it3++;
    }
}


void test5() {
    vector<int> nums {1,2,3,4,5,6,7,8,9,10};
    
    // Pointing to 3
    auto start = nums.begin() + 2;

    // Pointing to 8
    auto finish = nums.end() - 3;

    // This will iterate at 3 all the way up to 7
    while(start != finish) {
        cout << *start << endl;
        start++;
    }

}


int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
}