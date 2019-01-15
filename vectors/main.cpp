// Vectors
#include <iostream>
#include <vector>

using namespace std;



int main() {
    // vector <char> vowels Empty Vector Array
    // vector <char> vowels (5) 5 characters long initialized to zero
    vector <char> vowels {'a','e','i','o','u'}; // assining initial values
    // Problems of using sub indexes is that it does do any bound checking
    cout << "Using sub indexes to access values in vector array: " << vowels[0] << endl;
    cout << "Using sub indexes to access values in vector array: " << vowels[4] << endl;

    // vector <int> test_scores(3); // 3 elements initalized to zero
    // vector <int> test_scores(3, 100); // 3 elements initialized to 100
    vector <int> test_scores {100, 98, 89}; // assigning initial vaues
    cout << "\nTest scores using sub indexes" << endl;
    cout << "Test score 0: " << test_scores[0] << endl;
    cout << "Test score 1: " << test_scores[1] << endl;
    cout << "Test score 2: " << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax" << endl;
    cout << "Test score 0: " << test_scores.at(0) << endl;
    cout << "Test score 1: " << test_scores.at(1) << endl;
    cout << "Test score 2: " <<  test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " values in the vector" << endl;

    cout << "\nType 3 new values to replace test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores" << endl;
    cout << "Test score 1: " << test_scores.at(0) << endl;
    cout << "Test score 2: " << test_scores.at(1) << endl;
    cout << "Test score 3: " << test_scores.at(2) << endl;

    // Adding to a vector
    cout << "\nEnter a number to add to the vector: ";
    int score_to_add {0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nEnter another number: ";
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nNewly added values in the vectors" << endl;
    cout << "Test score 0: " << test_scores.at(0) << endl;
    cout << "Test score 1: " << test_scores.at(1) << endl;
    cout << "Test score 2: " << test_scores.at(2) << endl;
    cout << "Test score 3: " << test_scores.at(3) << endl;
    cout << "Test score 4: " << test_scores.at(4) << endl;
    cout << "There is " << test_scores.size() << " values in the vector." << endl;

    cout << "\n 2d Vectors" << endl;
    vector <vector<int>> movie_ratings {
        {1,2,3,4},
        {4,4,3,1},
        {5,3,2,2}
    };

    cout << "\nSub indexes to access vector value" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nUsing the .at() method from a vector" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;


    return 0;
}