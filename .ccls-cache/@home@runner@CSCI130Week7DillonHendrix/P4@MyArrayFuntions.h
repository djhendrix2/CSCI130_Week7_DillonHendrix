/************************************************
MyArrayFunctoins.h contains functions to help process 1-D arrays more easily.
Many if these functoins are also discribed in Malik Chapter 8. Last modified by:
Dillon Hendrix Date: 10/07/22
*************************************************/
// To use the functions here this requires...
#include <iostream>
using namespace std;

/*********** INTEGER ARRAY FUNCTIONS *****************/

/* This function prints the elements of an integer array as a single row.
  Parameters: list[] is the array
              listSize is the size of the array */
void printArray(const int list[], int listSize) {
  int index;
  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";

  cout << endl;
  return;
}

/* This function initializes an integer array to be a constant, specifically 0
  Parameters: list [] is the array
              listSize is the size of the array
              myConst is the constant value */

void initializeArray2Const(int list[], int listSize, int myConst) {
  int index;

  for (index = 0; index < listSize; index++)
    list[index] = myConst;

  return;
}

/* This function reads and stores data in an integer array from the console.
    Parameters: list[] is the size of the array to be filled sizeList is the
   size of the array*/

void fillArray(int list[], int listSize) {

  cout << listSize; // comment out for kattis

  int index;

  for (index = 0; index < listSize; index++) {
    cin >> list[index];
  }
  return;
}

/* This function finds the sum of all elements in an array.
  parameters: list[] is the array
              listSize is the size of the array */
int sumArray(const int list[], int listSize) {
  int index;
  int sum = 0;

  for (index = 0; index < listSize; index++)
    sum = sum + list[index];

  return sum;
}
