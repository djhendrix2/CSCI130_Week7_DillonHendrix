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
void TranslatePick(int flag_who, char selection, char choice[5]);
char ComputerSelectRPSLK(char choice[5]);

///////////////// MAIN //////////////////////////////////////
int main() {
/**************** Variables declared *******************/
  char userPick; // user's selection for game
  bool valid_pick =
      false;       // flag controlled while loop for obtaining user input
  char computerPick; // randomly selected computer selection for game

/********** Display rules of the game. *******************/
  cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
  
/********** User Prompt for Games Played **************/
  
/*********** Initailize array variables ***************/
  int game = 0;
  int n = 0; // number of times user wants to play
 cout << "How many times do you wish to play?" << endl;
 cin >> n;

/*********** The array to take in loop data ************/
 // string gamesPlayedData[n];
  char choice[5];
  choice[0]='R';
  choice[1]='P';
  choice[2]='S';
  choice[3]='L';
  choice[4]='K';


/********* The loop that aquires game data **************/
  for (int i = 0; i <= n; i++) {

/******** Inform user of the rules of the game *********/
  cout << "Use R (for Rock), P (for Paper), S (for Scissors),";
  cout << "L (for Lizard), and K (for Spock).\n" << endl;

/**** Prompt user for input and continue until valide input entry  ***/  
    cout << "You pick: \n";
    cin >> userPick;
  while (valid_pick == false) {

/***************** Process user pick *********************/
    if ((userPick == 'R') || (userPick == 'P') || (userPick == 'S') || (userPick == 'L') || (userPick == 'K')) {
      valid_pick = true;
    } else
      cout << "Invalid Selection. Try again. " << endl;
  }

/*********** Repeat selection back to user ***************/
  TranslatePick(0, userPick, choice);

/****** Obtain computer selection and inform user *******/
  computerPick = ComputerSelectRPSLK(choice);
  TranslatePick(1, computerPick, choice); // Inform user comp pick

/*************** Determine game winner *******************/
  // HANDOUT (PART A): Determine the winner of the game.

  string win = "User wins! ";
  string loss = "Computer wins :(";
  string tie = "It is a tie. ";

  // For Rock
  if ((userPick == choice[0]) && (computerPick == choice[0]))
    cout << tie << endl;
  else if ((computerPick == choice[4]) || (computerPick == choice[1]))
    cout << loss << endl;
  else if ((computerPick == choice[2]) || (computerPick == choice[3])) 
    cout << win << endl;
  
  // For paper
  else if ((userPick == choice[1]) && (computerPick == choice[1]))
    cout << tie << endl;
  else if ((computerPick == choice[3]) || (computerPick == choice[2]))
    cout << loss << endl;
  else if ((computerPick == choice[4]) || (computerPick == choice[0]))
    cout << win << endl;
  
  // For Scissors
  else if ((userPick == choice[2]) && (computerPick == choice[2]))
    cout << tie << endl;
  else if ((computerPick == choice[0]) || (computerPick == choice[4]))
    cout << loss << endl;
  else if ((computerPick == choice[3]) || (computerPick == choice[1]))
    cout << win << endl;
  
  // For Lizard
  else if ((userPick == choice[3]) && (computerPick == choice[3]))
    cout << tie << endl;
  else if ((computerPick == choice[2]) || (computerPick == choice[0]))
    cout << loss << endl;
  else if ((computerPick == choice[4]) || (computerPick == choice[1]))
    cout << win << endl;
    
  // For Spock
  else if ((userPick == choice[4]) && (computerPick == choice[4]))
    cout << tie << endl;
  else if ((computerPick == choice[3]) || (computerPick == choice[1]))
    cout << loss << endl;
  else if ((computerPick == choice[0]) || (computerPick == choice[2]))
    cout << win << endl;
    
  else // Somethings wrong
    cout << "Something is wrong try again. " << endl;

  // HANDOUT (PART B): Inform the user who won.

/********** Celebratory Message if user wins *************/ 
  // HANDOUT (PART C): Randomly display celebratory    messages if user won.
  // initalized celebration variables
  char randCelebratoryChar;
  int randCelebratory;

  // random number generator
  srand(time(NULL)); // initialize random seed.
  randCelebratory = rand() % 5;

  // random celebration switch
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

/************ User-Created Functions ******************/

/* 
Descprition: This function is used to translate the character selection to a statement which is displayed to the user.
Parameters: flag_who is an integer which is used to indicate if the computer or the user made the choice. Selection is one of the 5 valid character selections */
void TranslatePick(int flag_who, char selection, char choice[5]) {
  // declare local function variables
  string who_text;

  // identify which statements to insert into the output below
  if (flag_who == 0)
    who_text = "You";
  else
    who_text = "The Computer";

  // display output where the char selection is translated into words
  if (selection == choice[0])
    cout << who_text << " selected Rock." << endl;
  else if (selection == choice[1])
    cout << who_text << " selected Paper." << endl;
  else if (selection == choice[2])
    cout << who_text << " selected Scissors." << endl;
  else if (selection == choice[3])
    cout << who_text << " selected Lizard." << endl;
  else if (selection == choice[4])
    cout << who_text << " selected Spock." << endl;
  else // something is wrong
    cout << "Check code for errors. Message from TranslatePick fcn." << endl;
  
  return;
  
}

/* Descprition: This function is used to make a random character selection in the game Rock, Paper, Scissors, Lizard, Spock for the computer 
Parameters: there are no inputs */
char ComputerSelectRPSLK(char choice[5]) {
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
    randPickChar = choice[0];
    break;
  case 1:
    randPickChar = choice[1];
    break;
  case 2:
    randPickChar = choice[2];
    break;
  case 3:
    randPickChar = choice[3];
    break;
  case 4:
    randPickChar = choice[4];
    break;
  default:
    cout << "Error in the function ComputerSelectRPSLK. " << endl;
  }

  return randPickChar;
  
}


