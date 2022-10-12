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
  const int Array_size = n;
  int list[N];
  int freqVals[OccurSize];
  int numOccur[OccurSize];
  // Prompt user for N input 
  cin >> N;
  // Prompt user for C input
  cin >> C;
  
  // Arrays required
  cout << "The number of occurances are (after sorting): ";
  printArray(numOccur, OccurSize);
  cout << "Corresponding frequencies are (after sorting):";

  // insertion sort is the type of code look up sorting algorithymes parallel arrays so sorting choice matters.
  // Set C relation to the sort array
  /* if (N >= Sort[i]){
    cout << "The value inserted is valid. ";
  }
  else {
    cout << "Invalid input value to be sorted. Try again.";
  }
    for (i = 0; i < N; i++)
    {
      cout << "Enter value for current: ";
      cin >> Sort[i];
    } */
  
  int Sort[N]; //= {5, 100, 1, 3, 49, 38, 2, 7, 7, 100}; // length is 10
  int lengthSort = N;
  cout << "Sort elements: ";
  printArray(Sort, lengthSort);
  selectionSort(Sort, lengthSort);
  cout << "listC after sort: ";
  printArray(Sort, lengthSort);

  printArray(Sort, N);

  return 0;
}

/************* Function Definitions ******************/
void selectionSort(int list[], int lengthA){

  int index, maxIndex, location, tempVal;

  // increment through the main array
  for (index = 0; index < lengthA - 1; index++){
    maxIndex = index;

    // increment through each comparison
    for (location = index + 1; location < lengthA; location ++){
      if (list[location] > list[maxIndex])
        maxIndex = location; // location of new smallest index
    }
    // Make the swap
    tempVal = list[maxIndex];
    list[maxIndex] = list[index];
    list[index] = tempVal;
    
  }
  return;
}
findDistinct(list, freqVals, length)