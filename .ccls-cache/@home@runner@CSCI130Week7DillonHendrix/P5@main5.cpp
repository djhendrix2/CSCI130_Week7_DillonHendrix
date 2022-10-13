/*********************************************************
Promgramer: Dillon Hendrix
Description: Reworked RPSLK game with an array added
Date: 10-05-22
**********************************************************/

/*********************************************************
Description: Rock, Paper, Scissors, Lizard, Spock Game
             This game is unfinished. Follow along with
CSCI130_RockPaperScissors2.pdf to complete the game. Last Modified by: Dr. M
Last Modified on: 9/2020
***********************************************************/
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;
/******** Global Variables ***********/
char userPick;
char computerPick;
int user;
int computer;
/////////////// Prototype Functions ///////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();

///////////////// MAIN //////////////////////////////////////
int main() {
  // declare vars
  char userPick; // user's selection for game
  bool valid_pick =
      false;         // flag controlled while loop for obtaining user input
  char computerPick; // randomly selected computer selection for game

  // Display rules of the game.
  cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
  
  // Set up an array to keep track of user wins vs computer wins
  int game = 0;
  int n = 0; // number of times user wants to play
  
  string p[n];
 cout << "How many times do you wish to play?" << endl;
 cin >> n;
  for (int i = 0; i <= n; i++) {

  cout << "Use R (for Rock), P (for Paper), S (for Scissors),";
  cout << "L (for Lizard), and K (for Spock).\n" << endl;
  // Obtain userPick. Prompt until a valid selection is made.
    cout << "You pick: \n";
    cin >> userPick;
  while (valid_pick == false) {

    if ((userPick == 'R') || (userPick == 'P') || (userPick == 'S') ||
        (userPick == 'L') || (userPick == 'K')) {
      valid_pick = true;
    } else
      cout << "Invalid Selection. Try again. " << endl;
  }

  // Repeat selection back to user.
  TranslatePick(0, userPick);

  // Obtain computer selection.
  computerPick = ComputerSelectRPSLK();
  TranslatePick(1, computerPick); // Inform user of computer selection


  // HANDOUT (PART A): Determine the winner of the game.

  string win = "User wins! ";
  string loss = "Computer wins :(";
  string tie = "It is a tie. ";

  // For Rock
  if ((userPick == 'R') && (computerPick == 'R'))
    cout << tie << endl;
  else if ((computerPick == 'K') || (computerPick == 'P'))
    cout << loss << endl;
  else if ((computerPick == 'S') || (computerPick == 'L')) 
    cout << win << endl;
  
  // For paper
  else if ((userPick == 'P') && (computerPick == 'P'))
    cout << tie << endl;
  else if ((computerPick == 'L') || (computerPick == 'S'))
    cout << loss << endl;
  else if ((computerPick == 'K') || (computerPick == 'R'))
    cout << win << endl;
  
  // For Scissors
  else if ((userPick == 'S') && (computerPick == 'S'))
    cout << tie << endl;
  else if ((computerPick == 'R') || (computerPick == 'K'))
    cout << loss << endl;
  else if ((computerPick == 'L') || (computerPick == 'P'))
    cout << win << endl;
  
  // For Lizard
  else if ((userPick == 'L') && (computerPick == 'L'))
    cout << tie << endl;
  else if ((computerPick == 'S') || (computerPick == 'R'))
    cout << loss << endl;
  else if ((computerPick == 'K') || (computerPick == 'P'))
    cout << win << endl;
    
  // For Spock
  else if ((userPick == 'K') && (computerPick == 'K'))
    cout << tie << endl;
  else if ((computerPick == 'L') || (computerPick == 'P'))
    cout << loss << endl;
  else if ((computerPick == 'R') || (computerPick == 'S'))
    cout << win << endl;
    
  else // Somethings wrong
    cout << "Something is wrong try again. " << endl;

  // HANDOUT (PART B): Inform the user who won.

  // HANDOUT (PART C): Randomly display celebratory messages if user won.
  char randCelebratoryChar;
  int randCelebratory;

  // Part D Create and array to display the results of multiple games
  
  
  srand(time(NULL)); // initialize random seed.
  randCelebratory = rand() % 5;

  switch (randCelebratory) {

  case 0:
    cout << "You win! Nice work!" << endl;
    break;

  case 1:
    cout << "Good stuff g. " << endl;
    break;

  case 2:
    cout << "You dont suck! " << endl;
    break;

  case 3:
    cout << "Dubs for you!! " << endl;
    break;

  case 5:
    cout << "Thata baby. You win! " << endl;
    break;
  default:
    cout << "Take the L the computer wins:( " << endl;
  }
  
  //return randCelebratoryChar;
    }
  return 0;
}

/////////////// User-Created Functions ////////////////////////////////////////

/* Descprition: This function is used to translate the character selection to a
        statement which is displayed to the user.
   Parameters:  flag_who is an integer which is used to indicate if the computer
                         or the user made the choice.
                selection is one of the 5 valid character selections  */
void TranslatePick(int flag_who, char selection) {
  // declare local function variables
  string who_text;

  // identify which statements to insert into the output below
  if (flag_who == 0)
    who_text = "You";
  else
    who_text = "The Computer";

  // display output where the char selection is translated into words
  if (selection == 'R')
    cout << who_text << " selected Rock." << endl;
  else if (selection == 'P')
    cout << who_text << " selected Paper." << endl;
  else if (selection == 'S')
    cout << who_text << " selected Scissors." << endl;
  else if (selection == 'L')
    cout << who_text << " selected Lizard." << endl;
  else if (selection == 'K')
    cout << who_text << " selected Spock." << endl;
  else // something is wrong
    cout << "Check code for errors. Message from TranslatePick fcn." << endl;
  
  return;
  
}

/* Descprition: This function is used to make a random character selection in
   the game Rock, Paper, Scissors, Lizard, Spock for the computer Parameters:
   there are no inputs */
char ComputerSelectRPSLK() {
  // declare local function variables
  char randPickChar;
  int randPick;

  // pick a random number from 0 to 4
  srand(time(NULL));     // initialize random seed.
  randPick = rand() % 5; // gives us 0 to 4
  // cout << randPick; // uncomment to debug

  // assign random number to letter
  switch (randPick) {
  case 0:
    randPickChar = 'R';
    break;
  case 1:
    randPickChar = 'P';
    break;
  case 2:
    randPickChar = 'S';
    break;
  case 3:
    randPickChar = 'L';
    break;
  case 4:
    randPickChar = 'K';
    break;
  default:
    cout << "Error in the function ComputerSelectRPSLK. " << endl;
  }

  return randPickChar;
  
}

// void fillArray(int list[], int listSize) {
