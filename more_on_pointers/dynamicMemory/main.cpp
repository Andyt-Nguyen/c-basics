// Dynamic Memory
#include <iostream>

using namespace std;

/*
  -----------------
  | Heap (free storage)
  |
  | Stack
  | Stack
  | Stack
  | Stack
  |
  | Global
  | Code
  ------------------
*/


int main() {
  int *int_ptr {nullptr};
  int_ptr = new int; // Will be stored on the heap
  cout << int_ptr << endl; // Address will be found on the heap
  delete int_ptr; // Frees up the storage on the heap


  size_t size {0};
  double *temp_ptr {nullptr};
  cout << "How many temps? ";
  cin >> size; // Asks for user input and assigns the size
  temp_ptr = new double[size]; // After size has been inputted there will be an array of doubles
  cout << temp_ptr << endl; // points to the memory address of the array
  delete [] temp_ptr; // Free up space on the heap (syntax deleting arrays off the heap)

  cout << endl;
  return 0;
}