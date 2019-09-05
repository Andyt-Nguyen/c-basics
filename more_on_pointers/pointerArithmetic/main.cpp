#include <iostream>
#include <string>

using namespace std;

/*
  ---------------
  Address | Value
  ---------------
  1000    | 100
  1004    |  95
  1008    |  89
  1012    |  68
  1016    |  -1
  ---------------
*/
int main() {
  int scores[] { 100, 95, 89, 68, -1 };
  int *score_ptr {scores}; // Pointing to memory address so no need to use '&'

  // Sentinal statement
  while(*score_ptr != -1) { 
    cout << *score_ptr << endl; // Dereference pointer
    score_ptr++; // the Derefrenced pointer Increments pointer
  }

  cout << "\n---------------------" << endl;
  score_ptr = scores;
  while(*score_ptr != -1) {
    cout << *score_ptr++ << endl;
  }


  cout << "\n---------------------" << endl;
  string s1 {"Frank"};
  string s2 {"Frank"};
  string s3 {"James"};

  string *p1 {&s1}; // Assigning the address
  string *p2 {&s2}; // Assigning the address
  string *p3 {&s1}; // Assigning the address

  cout << boolalpha;
  cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; // false; (Has different memory addresses)
  cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; // true; (Has the same memory addresses)

  cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; // true (Dereference the pointer to get the value)(Same value)
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // true (Dereference the pointer to get the value)(Same value)
  
  p3 = &s3; // Point to james
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // false (Dereference the pointer to get the value)(Different values)

  cout << "\n--------------------" << endl;
  char name[] {"Frank"};

  char *char_ptr1 {nullptr};
  char *char_ptr2 {nullptr};

  char_ptr1 = &name[0]; // F (Pointing to an address)
  char_ptr2 = &name[3]; // n (Pointing to and address)
                                                                      // imagin (10003 - 1000)
  cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
  return 0;
}