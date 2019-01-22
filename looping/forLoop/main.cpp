#include <iostream>
#include <vector>

using namespace std;

int main() {
//	for(int i {1}; i < 10; i++) {
//		cout << i << endl;
//	}
	
//	for(int i{0} i <= 10; i+=2) {
//		cout << i << endl;
//	}

	for(int i{1}, j{5}; i < 5; i++,j++) {
		cout << i << " + " << j << " = " << (i + j) << endl;
	}
	
	cout << "Vector example\n" << endl;

	vector<int> nums {10,20,30,40,50};
	// we are using unsigned rather than int because a vectors don't have 
	// signed int. So to solve the problem we change the int to unsigned
	// because vectors can't be negativly sized;
	for(unsigned i{0}; i < nums.size(); i++) {
		cout << "Num " << i << ": " << nums[i] << endl;
	}

	cout << "Displaying histograms (nested loops)" << endl;
	cout << "How many items would you like to input: ";
	int amountItems {0};
	cin >> amountItems;

	vector<int> items{};
	for(int i{1}; i <= amountItems; i++) {
		cout << "Enter item " << i << "(num): ";
		int item {0};
		cin >> item;
		items.push_back(item);
	}

	for(auto num: items){
		for(int i {1}; i <= num; i++) {
			cout << "-";
		}
		cout << endl;
	}

	return 0;
}
