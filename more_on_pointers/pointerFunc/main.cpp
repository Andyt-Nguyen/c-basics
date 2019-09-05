#include <iostream>

void double_data(int *int_ptr) {
  *int_ptr *= 2;
}

int main() {
  int value { 10 };
  int *int_ptr { nullptr };

  cout << "Value: " << value << endl; // 10
  double_data(&value); // Pass the address of the value
  const << "Value: " << value << endl; // 20

  cout << "---------------------" << endl;
  int_ptr = &value; // Address
  double_data(int_ptr); // Pass the ptr of the value
  cout << "Value: " << value << endl; // 40

  cout << endl;
  return 0;
}