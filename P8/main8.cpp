/*********************************************************
Promgramer: Dillon Hendrix
Description: Kattis Problem Sort sort a list of numbers by clumps and largest to smallest based of of both number value and clump size. 
Date: 10-05-22
**********************************************************/
#include <cmath>
#include <iostream>

using namespace std;

/********** Global Variables **********************/


/*********** Function Prototypes ********************/
int OccurArray(int array[], int n, int x);
/********************* Main *************************/
int main() {

/************* Initialize variables *****************/
  int C = 0;  // The maximum value that can be input by user or less
  int N;      // Number of values to input
  int i;
  const int Array_size = N;


/************** User input for (N) *****************/
  // Prompt user for N input 
  cout << "Input number n: " << endl;
  cin >> N;

/************** User input for (C) *****************/
  cout << "Input max number an input can be (c): " << endl;
  cin >> C;
  for (i = 0; i < C; i++)

/********************* Arrays **********************/
  int listOriginal[N];
  
  int freqVals[Array_size];
  int numOccur[Array_size];

  // Arrays required
  /*cout << "The number of occurances are (after sorting): ";
  printArray(numOccur, OccurSize);
  cout << "Corresponding frequencies are (after sorting):"; */

    int numsOccur[N]; // = {5, 7, 8, 8, 5, 8, 7, 7}; 
    for (i = 0; i < N; i++)
    {
      cout << "Enter value: ";
      cin >> numsOccur[i];
    }
    int n = sizeof(numsOccur)/sizeof(numsOccur[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << numsOccur[i] <<" ";
    int x = 7;
    cout <<"\nNumber of occurrences of 7 : " << OccurArray (numsOccur, n, x);

  
  return 0;
}

/************* Function Definitions ******************/
/* Definition: This funtion sorts the area based off of number occurances of any given number in the array */

int OccurArray(int array[], int n, int x)
{
    int result = 0;
    for (int i=0; i < n; i++)
        if (x == array[i])
          result++;
    return result;
} 



// findDistinct(list, freqVals, length)