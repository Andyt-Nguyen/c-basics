#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<int, string> name_map;

	name_map[1] = "Tom";
	name_map[2] = "Max";
	name_map[3] = "Mark";
	name_map[4] = "John";
	name_map[5] = "Patrick";

	cout << name_map[3] << endl;
	return 0;
}
