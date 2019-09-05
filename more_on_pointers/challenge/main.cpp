#include <iostream>

using namespace std;

void print(const int *arr, int size) {
  for(int i {0}; i < size; i++) {
    cout << *(arr + i) << " ";
  }
  cout << endl;
}

int* applyAll(int *arr1, int size1, int *arr2, int size2) {
  int *arr = new int[size1 * size2];
  for(int i {0}; i < size2; i++)
    for(int j {0}; i < size1; j++)
      *arr[i] = *arr1[i] * *arr2[j];
  
  return arr;
}

int main() {
  const size_t array1_size {5};
  const size_t array2_size {3};

  int array1[] { 1, 2, 3, 4, 5 };
  int array2[] { 10, 20, 30 };

  cout << "Array1: ";
  print(array1, array1_size);

  cout << "Array2: ";
  print(array2, array2_size);

  int *results = applyAll(array1, array1_size, array2, array2_size);
  constexpr size_t results_size { array1_size * array2_size };

  cout << "Result: ";
  print(results, results_size);

  cout << endl;
}