// Arrays
#include <iostream>

using namespace std;

int main() 
{
    char vowels[] {'a','b','c','d','e'};
    cout << "The first vowel: " << vowels[0] << endl;
    cout << "The last vowel: " << vowels[4] << endl;


    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "Manipulated first index of temp: " << hi_temps[0] << endl;


    // Example of an array without initalizing it {}
    // int test_scores[5];
    int test_scores[5]{}; // always initialize arrays
    cout << "\nTest score index 0: " << test_scores[0] << endl;
    cout << "Test score index 1: " << test_scores[1] << endl;
    cout << "Test score index 2: " << test_scores[2] << endl;
    cout << "Test score index 3: " << test_scores[3] << endl;
    cout << "Test score index 4: " << test_scores[4] << endl;

    // manually input array values in test scores
    cout << "Enter 5 numbers to give values in an array of 5: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    cout << "/n Updated test scores" << endl;
    cout << "Test score index 0: " << test_scores[0] << endl;
    cout << "Test score index 1: " << test_scores[1] << endl;
    cout << "Test score index 2: " << test_scores[2] << endl;
    cout << "Test score index 3: " << test_scores[3] << endl;
    cout << "Test score index 4: " << test_scores[4] << endl;

    cout << "\nOutput the testscores array its self" << endl;
    cout << "test_scores: " << test_scores << endl;
    // the test_scores will output the memmory address or location in memory
    // of where that array is



    return 0;
}