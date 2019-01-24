#include <iostream>
#include <fstream>
using namespace std;

int get_what_they_want();
void displayItems(int num);

// Main function
int main() {
	int what_they_want;

	while(what_they_want != 4) {
		switch(what_they_want) {
			case 1:
				displayItems(1);
				break;
			case 2:
				displayItems(2);
				break;
			case 3:
				displayItems(3);
				break;
		}
		what_they_want = get_what_they_want();
		
	}
	return 0;
}

// get what they want
int get_what_they_want() {
	int choice;
	cout << "\nEnter 1 for plain items" << endl;
	cout << "Enter 2 for helpful items" << endl;
	cout << "Enter 3 for harmful items" << endl;
	cout << "Enter 4 quit program\n" << endl;

	cin >> choice;
	return choice;
}




void displayItems(int num) {
	ifstream objectsFile("objects.txt");
	string name;
	double power;

	if(num == 1) {
		while(objectsFile >> name >> power) {
			if(power == 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}
	else if(num == 2) {
		while(objectsFile >> name >> power) {
			if(power > 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}
	else if(num == 3) {
		while(objectsFile >> name >> power) {
			if(power < 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}
}


