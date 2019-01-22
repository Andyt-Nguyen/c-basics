#include <iostream>
using namespace std;

int main() {
	char letter {};
	cout << "Enter a letter grade on the exam: ";
	cin >> letter;

	switch(letter) {
		case 'a': 
		case 'A':
			cout << "You need a 90 or above, study hard!" << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need an 80-89 for a B go study!";
			break;
		case 'c':
		case 'C':
			cout << "You need an 70-79 for a C. Try not to get this low";
			break;
		case 'd':
		case 'D':
			cout << "You need a 60-69 for a D. Try not to get this low";
			break;
		
		default:
			cout << "Below 60 is an F. Study harder!";
			break;
	}


	return 0;
}
