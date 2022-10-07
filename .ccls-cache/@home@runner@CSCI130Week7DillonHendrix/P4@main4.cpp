/*********************************************************
Promgramer: Dillon Hendrix
Description: Kattis Problem License to Launch use an array to find the day with
the lease amount of space junk and output the answer.Starting at day 0 Date:
10-05-22
**********************************************************/
#include <cmath>
#include <iostream>

using namespace std;

// Global Variables ***********************

/*********** Function Prototypes ***************/

/****************** Main ************************/
int main() {
  // local variables to main
  int n = 0;
  cin >> n;

  int myList[n]; // = {1, 2, -3, 14, 75};

  for (int i = 0; i < 5; i++) {
    // cout << "Input a value for the array: ";
    cin >> myList[i];
    
    // sum = sum + myList[i];
    // cout << sum << endl;
  }
}

/************* Function Definitions ******************/
