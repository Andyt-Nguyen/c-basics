#include <iostream>

int main() {
  /* Pointers to constants
   * The data pointed to by the pointers is constant and cannot be changed.
   * The pointer itself can cahnge and point somewhere else
   * */
  int high_score {100};
  int low_score {65};
  const int *score_ptr { &high_score };

  *score_ptr = 86; // Error
  score_ptr = &low_score; // OK


  /* Constant Pointers 
   * The data pointed to by the pointers can be changed.
   * The pointer itself cannot cahnge and point somewhere else
   * */
  int high { 100 };
  int low { 65 };
  int *const score_ptr { &high_score };

  *score = 86 // OK
  score = &low_score; // Error


  /* Constant pointer to constants
   * The data pointed to by the poniter is constant and cannot be changed.
   * The pointer itself cannot change and point somewhere else.
   * */

 int high_s { 100 };
 int low_s { 65 };
 const int *const score_p { &high_s };

 *score_p = 86; // Error
 score_p = &low_s; // Error


}