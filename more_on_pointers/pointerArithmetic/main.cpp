#include <iostream>

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
  int *scores_ptr {scores};

  while(*score_ptr != -1) {
    cout << *score_ptr << endl;
    score_ptr++;
  }

  cout << "\n---------------------" << endl;
  score_ptr = scores;
  while(*score_ptr != -1) {
    cout << *score_ptr++ << endl;
  }


  return 0;
}