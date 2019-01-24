#include <iostream>

using namespace std;
int main() {
	int a{4};
	int b{12};
	int c{37};
	int d{51};
	int result{d % a * c + a % b + a};
	cout << result;
	return 0;
}
