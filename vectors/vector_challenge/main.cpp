#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "The first element in vector1: " << vector1.at(0) << endl;
    cout << "The second element in vector1: " << vector1.at(1) << endl;
    cout << "The size of vector1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nThe first element in vector2: " << vector2.at(0) << endl;
    cout << "The second element in vector2: " << vector2.at(1) << endl;
    cout << "The size of vector2: " << vector2.size() << endl;

    vector <vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\n2d Vector elements in the first indexes" << endl;
    cout << "2d vector index 1 sub 1: " << vector_2d.at(0).at(0) << endl;
    cout << "2d vector index 2 sub 1: " << vector_2d.at(1).at(0) << endl;
    cout << "The size of this 2d vector: " << vector_2d.size() << endl;

    cout << "\nChanging vector1 sub index 0 to 1000" <<endl;
    vector1.at(0) = 1000;

    cout << "\nNew 2d vector at index0 sub 1: " << vector_2d.at(0).at(0);
    // Now if we check the vector in the vector_2d array that value does not change
    // the reason being is because it is storing a copy of that first vector.
    // so when we push_back into the vector_2d its just a copy of vector1 and not
    // the vector1 that is stored in memmory

    return 0;
}