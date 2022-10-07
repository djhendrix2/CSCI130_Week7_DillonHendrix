/*********************************************************
Promgramer: Dillon Hendrix
Description: Exercise 5 Chp 6.3, create a function that converts the inputted
number of seconds into seconds, mins, and hours all int values. Date: 10-05-22
**********************************************************/
#include <cmath>
#include <iostream>

using namespace std;

// Global Variables ***********************

/*********** Function Prototypes ***************/
void time(int, int&, int&, int&);

/****************** Main ************************/
int main() {

  // initialize variable
  int seconds, hours, mins, secs;
  
  // Get user input for time in seconds
  cout << "Input time in seconds: ";
  cin >> seconds;

  time(seconds, hours, mins, secs); // Function call
  cout << "The time is: " << hours << "hours " << mins << "mins " << secs << "secs. " << endl;

  return 0;
}

/************* Function Definitions ******************/

void time(int seconds, int& hours, int& mins, int& secs){
  hours = (seconds / 3600);
  seconds = (seconds%3600);
  mins = (seconds/60);
  seconds = (seconds%60);
  secs = seconds;
  
}
