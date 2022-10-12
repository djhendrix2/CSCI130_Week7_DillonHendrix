/*********************************************************
Promgramer: Dillon Hendrix
Description: Exercise 5 Chp 6.3
Date: 10-05-22
**********************************************************/
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

// Global Variables ***********************
const int ARRAY_SIZE = 5;

/*********** Function Prototypes ***************/
int sumArray(double list[], int listSize);
/****************** Main ************************/
int main() {

  // Array 1 resistance
  double resistance[ARRAY_SIZE] = {16, 27, 39, 56, 81};
  // compute the sum of resistance
  int sumResistance;
  sumResistance = sumArray(resistance, ARRAY_SIZE);
  cout << "The sum of resistance = " << sumResistance << endl;

  // Array 2 current
  int i;
  double current[ARRAY_SIZE];
  for (i = 0; i < 5; i++)
    {
      cout << "Enter value for current: ";
      cin >> current[i];
    }
  cout << endl;
  // compute the sum of current
  int sumCurrent = 0;
  sumCurrent = sumArray(current, ARRAY_SIZE);
  cout << "The sum of current = " << sumCurrent << endl;

  // Array 3 power
  double power[5];
  // use power equation to get power values
  power[0] = resistance[0] * pow(current[0], 2);
  power[1] = resistance[1] * pow(current[1], 2);
  power[2] = resistance[2] * pow(current[2], 2);
  power[3] = resistance[3] * pow(current[3], 2);
  power[4] = resistance[4] * pow(current[4], 2);
  // compute the sum of power
  int sumPower = 0;
  sumPower = sumArray(power, ARRAY_SIZE);
  cout << "The sum of power = " << sumPower << endl;

  // Create table using the aquired array values
  
  cout << left << setw(15) << "Resistance" << left << setw(12) << "Current" << left
         << setw(12) << "Power" << endl;

  for (int i = 0; i <= 4; i++)
    {
        cout << left << setw(15) << resistance[i]
             << left << setw(12) << current[i]
             << left << setw(12) << power[i]
            << endl;
    } 
  cout << left << setw(15) << "Total: "
             << left << setw(12) << sumCurrent
             << left << setw(12) << sumPower
            << endl;
  
  return 0;
}

/************* Function Definitions ******************/
int sumArray(double list[], int listSize) {
  int index;
  int sum = 0;

  for (index = 0; index < listSize; index++)
    sum = sum + list[index];

  return sum;
}