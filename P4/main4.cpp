/*********************************************************
Promgramer: Dillon Hendrix
Description: Kattis Problem License to Launch use an array to find the day with
the lease amount of space junk and output the answer.Starting at day 0
Date: 10-05-22
**********************************************************/
#include <cmath>
#include <iostream>

using namespace std;

/*********** Function Prototypes ***************/
int minJunkDay(int n);

/****************** Main ************************/
int main() {
  // initialize local variables
  int n; 
  // cout << "Enter n number of list values: ";
  cin >> n;
  
  // display the day best fit to launch
  cout << minJunkDay(n) << endl;
  }

  int minJunkDay(int n) {
    // initialize function variables
    int minJunk, day;
    int index;
    int myList[n];
  
    for (index = 0; index < n; index++) {
    // cout << "Enter a list value: ";
    cin >> myList[index];
    }
  

    minJunk = myList[0];
    index = 0;

    for (index = 0; index < n; index++) {
      if(minJunk > myList[index]) {
        minJunk = myList[index];
        day = index;
      }

      if (myList[0] == minJunk) {
        day = 0;
      }
    }
      return day;
   }
  
    
