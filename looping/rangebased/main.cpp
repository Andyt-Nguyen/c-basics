#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	cout << "Arrays" << endl;
	int scores[] {10, 20, 30};
	for(auto score: scores)
		cout << score << endl;
	
	cout << "\n Vectors" << endl;
	vector <double> temperatures{87.9, 77.9, 80.0,72.5};
	double average_temp {0};
	double total {0};

	for(auto temp: temperatures)
		total += temp;
	
	average_temp = temperatures.size() != 0 ?  total / temperatures.size() : 0;

	cout << "The total of the temperatures are " << total << endl;
	cout << fixed << setprecision(1);
	cout << "The average of the temperatures are " << average_temp << endl;


	// auto initilizer for range based loop
	for(auto val:{1,2,3,4,5})
		cout << val << endl;

	for(auto c: "This is a test")
		cout << c;

	cout << endl;

	for(auto c: "This is a test")
		if(c != ' ')
			cout << c;
	
	cout << endl;
	for(auto c: "This is a test")
		if(c == ' ')
			cout << "\t";
		else
			cout << c;
	
	return 0;
}
