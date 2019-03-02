#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums {5,5,5,2,2,2,1,1,1,1,1,19,30,23,55,55,1,1,1,1,1,1};

    vector<int>::iterator iter  = unique(nums.begin(), nums.end());

    nums.resize(distance(nums.begin(), iter));

    for(iter = nums.begin(); iter < nums.end(); iter++) {
        cout << *iter << endl;
    }


    return 0;
}