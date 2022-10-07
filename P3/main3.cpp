/*********************************************************
Promgramer: Dillon Hendrix
Description: Exercise 5 Chp 6.5, determine the numbers output by the cout statements in the code provided.
Date: 10-05-22
**********************************************************/
#include <cmath>
#include <iostream>

using namespace std;

// Global Variables ***********************
int firstnum = 10; // declare and initailize a global variable
void display( );   // function prototype

/*********** Function Prototypes ***************/

/****************** Main ************************/
int main() {
  int firstnum = 20; // declare and initialize a local variable
  cout << "\nThe value of firstnum is " << firstnum << endl;

  display ();
  
  return 0;
  

  // local variables to main
  
}

/************* Function Definitions ******************/
void display(void)
{
  cout << "The value of firstnum is now " << firstnum << endl;
  return;
}