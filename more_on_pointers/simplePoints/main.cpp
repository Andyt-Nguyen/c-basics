// Simple pointers

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int num {10};
  cout << "Value of num is: " << num << endl;         // 10
  cout << "Size of num is: " << sizeof num << endl;   // 4 Bytes
  cout << "Address of num is: " << &num << endl;      // (Memory address)

  int *p;
  cout << "\nValue of p is: " << p << endl; // Garbage data (bit pattern pointing somewhere)
  cout << "Address of p is: " << &p << endl; // Location of where pointer is stored
  cout << "sizeof p is:" << sizeof p << endl; // 4 bytes

  p = nullptr; // (Makes p point to no where) 0
  cout << "\nValue of p is: " << p << endl;


  int *p1 {nullptr}; // Will eventuall point to an integer
  double *p2 {nullptr}; // Will eventuall point to a double
  unsigned long long *p3 {nullptr}; // Will eventually point to a long long
  vector<string> *p4 {nullptr}; // Will eventually point ot a vector of strings
  string *p5 {nullptr}; // Will eventually point to a string

  // All sizes will be the same. 4 bytes but it will change once value is assigned
  cout << "\nsizeof p1 is: " << sizeof p1 << endl;
  cout << "sizeof p2 is: " << sizeof p2 << endl;
  cout << "sizeof p3 is: " << sizeof p3 << endl;
  cout << "sizeof p4 is: " << sizeof p4 << endl;
  cout << "sizeof p5 is: " << sizeof p5 << endl;

  int score {10};
  double high_temp {100.7};

  int *score_ptr {nullptr};
  
  score_ptr = &score;
  cout << "\nValue of score is: " << score << endl; // 10;
  cout << "Address of score is: " << &score << endl; // 1000 (not really but for purpose let's say it is)
  cout << "Value of score_ptr is: " << score_ptr << endl; // exact same address as score

  
  return 0;

}