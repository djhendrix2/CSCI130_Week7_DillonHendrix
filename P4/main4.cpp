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
  int n, minValue, minValueIndex;
  cout << "Enter n number of list values: ";
  cin >> n;
  int index, myList[n];

  for (index = 0; index < n; index++)
    {
      cout << "Enter a list value: ";
      cin >> myList[index];
    }
  cout << endl;

  for (index = 0; index < n; index++)  //Print list values
    cout << "list location " << index << " is a value of " << myList[index] << endl;

  minValue = myList[0];
  minValueIndex = minValue - 2;
  for (index = 0; index < n; index++)
    {
      // cout << " " << myList[index];
      if (minValue > myList[index])
      minValue = myList[index];
      // myList[index] = minValue;  // The location of the minimum value hopefully
    }
      cout << "\n\nMin value is " << minValue << " and the min value index is " << minValueIndex << endl;


  return 0;
}

/************* Function Definitions ******************/
