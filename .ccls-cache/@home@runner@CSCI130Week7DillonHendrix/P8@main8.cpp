/*********************************************************
Promgramer: Dillon Hendrix
Description: Exercise 5 Chp 6.3
Date: 10-05-22
**********************************************************/
#include <cmath>
#include <iostream>

using namespace std;

// Global Variables ***********************


/*********** Function Prototypes ***************/

/****************** Main ************************/
int main() {

  // Initialize variables
  int C = 0;  // The maximum value that can be input by user or less
  int N;      // Number of values to input
  int i;
  // Prompt user for N input 
  cin >> N;
  // Prompt user for C input
  cin >> C;
  
  // Arrays required
  int Sort[N];

  // Set C relation to the sort array
  if (C >= Sort[i]){
    cout << "The value inserted is valid. ";
  }
  else {
    cout << "Invalid input value to be sorted. Try again.";
  }
    for (i = 0; i < N; i++)
    {
      cout << "Enter value for current: ";
      cin >> Sort[i];
    }
  
  
}

/************* Function Definitions ******************/
