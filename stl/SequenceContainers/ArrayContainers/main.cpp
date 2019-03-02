#include <iostream>
#include <array>
#include <numeric>

using namespace std;

void display(array<int, 5> &arr) {
    cout << "[ ";
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << "]" << endl;
}

void test1() {
    array <int, 5> arr1 {1, 2, 3, 4, 5};
    array <int, 5> arr2;

    display(arr1);

    // arr2 not initialized will return garbage values
    display(arr2);


    arr2 = {10, 20, 30, 40, 50};
    display(arr1);
    display(arr2);

    // Displays the lenght of the array
    cout << "Size of arr1 " << arr1.size() << endl;
    cout << "Size of arr2 " << arr2.size() << endl;


    // Does not do bounds checking
    arr1[0] = 1000;

    // Will do bounds checking
    arr2.at(0) = 2000;

    display(arr1);
    display(arr2);

    // Returns 1000
    cout << "The front of the array " << arr1.front() << endl;

    // Returns 5
    cout << "The back of the array " << arr1.back() << endl;
}


void test2() {
    array<int, 5> arr1 {1,2,3,4,5};
    array<int, 5> arr2 {10,20,30,40,50};

    display(arr1);
    display(arr2);

    // replaces all the elements to be 0
    arr1.fill(0);

    display(arr1);

    // swaps the elements 
    // arr1 now has the values of arr2
    // arr2 now has the values of arr1
    arr1.swap(arr2);

    display(arr1);
    display(arr2);
}


void test3() {
    array<int, 5> arr1 {1,2,3,4,5};

    // Shows the memory location of the first element
    int *ptr = arr1.data();
    cout << ptr << endl;

    // derefence the first elemnt to 1000
    *ptr = 1000;

    // value changed
    display(arr1);
}


void test4() {
    array<int, 5> arr {4,1,6,2};

    display(arr);

    // Sorting the array
    // sort(begin, end)
    sort(arr.begin(), arr.end());

    display(arr);
}


void test5() {
    array<int, 5> arr {2,1,5,4, 10};

    // Longer version of writing out the iterator
    array<int, 5>::iterator min_num = min_element(arr.begin(), arr.end());

    // Shorter version of writing out the iterator
    auto max_num = max_element(arr.begin(), arr.end());

    cout << "Min Num: " << *min_num << endl;
    cout << "Max Num: " << *max_num << endl;
}


void test6() {
    array<int, 5> arr {2,1,5,5,4};
    
    // Returns the first occurences of adjacent numbers
    auto adjacent = adjacent_find(arr.begin(), arr.end());

    if(adjacent != arr.end()) {
        cout << "Found the adjacent number: " << *adjacent << endl;
    } else {
        cout << "There are no adjacent number found" << endl;
    }
}  

void test7() {
    array<int, 5> arr {1,5,2,3,4};
    
    // accumulate returns the sum of the values
    // in order to use this you have to #include <numeric>
    // accumulate(begin, end, startingNumber)
    int sum = accumulate(arr.begin(), arr.end(), 0);

    cout << "The sum of the array is " << sum << endl;;
}

void test8() {
    array<int, 10> arr {1,2,3,4,4,4,5,6,7,8};

    int amount = count(arr.begin(), arr.end(), 4);

    cout << "Found 4: " << amount << " times";
}

void test9() {
    array<int, 10> arr {10,20,30,100,200,300,500,12,14,15};

    // count_if(begin, end, [](int x){ conditional; })
    int amount = count_if(arr.begin(), arr.end(), [](int x) {
        return x >= 30 && x < 300;
    });

    cout << "There are " << amount << " numbers in between 30 and 300" << endl;;
}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    test9();
    return 0;
}