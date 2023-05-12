/*--------------------------------------------
   Program 2: Knight Escape
   The objective of this game is to get the white knight to the empty
	square in the upper right-hand corner of the board.
	
	The knight can only move in the way that it does during a traditional
	chess game. This means that a knight can only move in a valid L-shape
	(two squares in a horizontal direction, then one in a vertical direction OR 
	two squares in a vertical direction, then one in a horizontal direction).
		       
   Course: CS 141, Spring 2022
   System: Replit
   Author: Matthew  Mohaupt
    
 ---------------------------------------------*/

#include <iostream>		// for input and output
#include <cctype>		   // for toupper()
using namespace std;

// Global variables for the pieces are allowed for this program,
// but will generally not be allowed in the future.
// Characters of the pieces to be used on the board
// Note that these are global constants, so their values cannot be changed.
const string WhiteKnight = "\u2658";		// White knight character
const string BlackKnight = "\u265E";		// Black knight character
const string BlankPosition = " ";			// Blank position character
// You will likely want to declare global variables at least for the 25 board positions.
string c1 = BlackKnight;
string c2 = BlackKnight;
string c3 = BlackKnight;
string c4 = BlackKnight;
string c5 = BlankPosition;
string c6 = BlackKnight;
string c7 = BlackKnight;
string c8 = BlackKnight;
string c9 = BlackKnight;
string c10 = BlackKnight;
string c11 = BlackKnight;
string c12 = BlackKnight;
string c13 = BlackKnight;
string c14 = BlackKnight;
string c15 = BlackKnight;
string c16 = BlackKnight;
string c17 = BlackKnight;
string c18 = BlackKnight;
string c19 = BlackKnight;
string c20 = BlackKnight;
string c21 = WhiteKnight;
string c22 = BlackKnight;
string c23 = BlackKnight;
string c24 = BlackKnight;
string c25 = BlackKnight;




//--------------------------------------------------------------------------------
// Display welcome message, introducing the user to the program and
// describing the instructions for the game
void displayWelcomeMessage()
{
    cout << "Program 2: Knight Escape \n"
         << "CS 141, Spring 2022, UIC \n"
         << " \n"
         << "The objective of this puzzle is to get the white knight "
		 << "up to the empty square in the top right corner of the board. "
		 << "Use standard knight moves from a traditional chess game, "
		 << "where a knight moves in an L-shape. \n"
		 << "This means that a knight can only move either "
		 << "1) two squares in a horizontal direction, then one in a vertical direction, OR "
		 << "2) two squares in a vertical direction, then one in a horizontal direction."
		 << " \n"
		 << "Your score decreases by 5 with each valid move, and by 10 with each invalid move. \n"
		 << "Try to complete the puzzle with the smallest number of valid moves!"
    	 << endl;
}//end displayWelcomeMessage()

    
// ----------------------------------------------------------------------
// Display the current board, along with the corresponding positions
// This function makes use of global variables p1..p25, which represent
// each of the positions on the board
void displayBoard()
{
    cout <<"\n"
         <<                          "    Board   " <<                               "      Position \n"
         << " " <<  c1 << " " <<  c2 << " " <<  c3 << " " <<  c4 << " " <<  c5 << "     1  2  3  4  5 \n"
         << " " <<  c6 << " " <<  c7 << " " <<  c8 << " " <<  c9 << " " << c10 << "     6  7  8  9 10 \n"
         << " " << c11 << " " << c12 << " " << c13 << " " << c14 << " " << c15 << "    11 12 13 14 15 \n"
         << " " << c16 << " " << c17 << " " << c18 << " " << c19 << " " << c20 << "    16 17 18 19 20 \n"
         << " " << c21 << " " << c22 << " " << c23 << " " << c24 << " " << c25 << "    21 22 23 24 25 \n"
         << endl;
} //end displayBoard()


// ----------------------------------------------------------------------
// Main() function of the program, containing the loop that controls
// game play
int main() {
  //sets the score
  int score = 500;
  char menuOption;
  int startposition;
  int endposition;
  int moveNumber = 1;
  bool starter;
  bool ender;
  bool movement;
  bool starterk;
  bool enderk;
  bool victory;
   
   displayWelcomeMessage();
	
	// Set board values to the default starting position
  int p1 = 1;
  int p2 = 2;
  int p3 = 3;
  int p4 = 4;
  int p5 = 5;
  int p6 = 6;
  int p7 = 7;
  int p8 = 8;
  int p9 = 9;
  int p10 = 10;
  int p11 = 11;
  int p12 = 12;
  int p13 = 13;
  int p14 = 14;
  int p15 = 15;
  int p16 = 16;
  int p17 = 17;
  int p18 = 18;
  int p19 = 19;
  int p20 = 20;
  int p21 = 21;
  int p22 = 22;
  int p23 = 23;
  int p24 = 24;
  int p25 = 25;
	
   displayBoard();
   
   // Loop that controls game play
   while(score > 0) {
     victory = false;
     //moveNumber++;
     cout << "Current score: " << score << endl;
      cout << moveNumber << ". "
             << "Enter one of the following: \n"
			 << "  - M to move a knight from one position to another, \n"
			 << "  - R to reset the board back to the beginning, or \n"
			 << "  - X to exit the game. \n"
			 << "Your choice -> ";
		cin >> menuOption;
		menuOption = toupper(menuOption); // convert user input to uppercase
		
		// If the user entered 'X' to exit,
		// break out of this loop that controls game play
		if(menuOption == 'X' || menuOption == 'x'){
      cout << "Exiting..." << endl;
      break;
    }
		
		// If the user entered 'R' to reset,
		// reset the board back to the beginning
		if(menuOption == 'R' || menuOption == 'r'){
      cout << "   *** Restarting" << endl;
      c1 = BlackKnight;
      c2 = BlackKnight;
      c3 = BlackKnight;
      c4 = BlackKnight;
      c5 = BlankPosition;
      c6 = BlackKnight;
      c7 = BlackKnight;
      c8 = BlackKnight;
      c9 = BlackKnight;
      c10 = BlackKnight;
      c11 = BlackKnight;
      c12 = BlackKnight;
      c13 = BlackKnight;
      c14 = BlackKnight;
      c15 = BlackKnight;
      c16 = BlackKnight;
      c17 = BlackKnight;
      c18 = BlackKnight;
      c19 = BlackKnight;
      c20 = BlackKnight;
      c21 = WhiteKnight;
      c22 = BlackKnight;
      c23 = BlackKnight;
      c24 = BlackKnight;
      c25 = BlackKnight;
      moveNumber = 1;
      score = 500;
    }
		
		// If the user entered 'M' to move a knight,
		// ask for the position of the knight to be moved
		if(menuOption == 'M' || menuOption == 'm'){
      string tempstart;
      string tempend;
      cin >> startposition;
      cin >> endposition;
      // Check that FROM position is valid, i.e. within 1-25
		  if(startposition > 25 || startposition < 0){
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position "<< endposition << ". The source position should be a valid position on the board (1-25). Try again." << endl;
        starter = false;
        score = score - 10;
        continue;
      }
      else if(startposition == 1){
        tempstart = c1;
        starter = true;
      }
      else if(startposition == 2){
        tempstart = c2;
        starter = true;
      }
      else if(startposition == 3){
        tempstart = c3;
        starter = true;
      }
      else if(startposition == 4){
        tempstart = c4;
        starter = true;
      }
      else if(startposition == 5){
        tempstart = c5;
        starter = true;
      }
      else if(startposition == 6){
        tempstart = c6;
        starter = true;
      }
      else if(startposition == 7){
        tempstart = c7;
        starter = true;
      }
      else if(startposition == 8){
        tempstart = c8;
        starter = true;
      }
      else if(startposition == 9){
        tempstart = c9;
        starter = true;
      }
      else if(startposition == 10){
        tempstart = c10;
        starter = true;
      }
      else if(startposition == 11){
        tempstart = c11;
        starter = true;
      }
      else if(startposition == 12){
        tempstart = c12;
        starter = true;
      }
      else if(startposition == 13){
        tempstart = c13;
        starter = true;
      }
      else if(startposition == 14){
        tempstart = c14;
        starter = true;
      }
      else if(startposition == 15){
        tempstart = c15;
        starter = true;
      }
      else if(startposition == 16){
        tempstart = c16;
        starter = true;
      }
      else if(startposition == 17){
        tempstart = c17;
        starter = true;
      }
      else if(startposition == 18){
        tempstart = c18;
        starter = true;
      }
      else if(startposition == 19){
        tempstart = c19;
        starter = true;
      }
      else if(startposition == 20){
        tempstart = c20;
        starter = true;
      }
      else if(startposition == 21){
        tempstart = c21;
        starter = true;
      }
      else if(startposition == 22){
        tempstart = c22;
        starter = true;
      }
      else if(startposition == 23){
        tempstart = c23;
        starter = true;
      }
      else if(startposition == 24){
        tempstart = c24;
        starter = true;
      }
      else if(startposition == 25){
        tempstart = c25;
        starter = true;
      }
      else{
        starter = false;
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position" << startposition << "to position" << endposition << ". The source position should be a valid position on the board (1-25). Try again." << endl;
        score = score - 10;
        continue;
      }
      
		// Check that TO position is valid, i.e. within 1-25
      if(endposition > 25 || endposition < 0){
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position" << startposition << "to position" << endposition << ". The destination position should be a valid position on the board (1-25). Try again." << endl;
          ender = false;
        score = score - 10;
          continue;
      }
      else if(endposition == 1){
        tempend = c1;
        ender = true;
      }
      else if(endposition == 2){
        tempend = c2;
        ender = true;
      }
      else if(endposition == 3){
        tempend = c3;
        ender = true;
      }
      else if(endposition == 4){
        tempend = c4;
        ender = true;
      }
      else if(endposition == 5){
        tempend = c5;
        ender = true;
      }
      else if(endposition == 6){
        tempend = c6;
        ender = true;
      }
      else if(endposition == 7){
        tempend = c7;
        ender = true;
      }
      else if(endposition == 8){
        tempend = c8;
        ender = true;
      }
      else if(endposition == 9){
        tempend = c9;
        ender = true;
      }
      else if(endposition == 10){
        tempend = c10;
        ender = true;
      }
      else if(endposition == 11){
        tempend = c11;
        ender = true;
      }
      else if(endposition == 12){
        tempend = c12;
        ender = true;
      }
      else if(endposition == 13){
        tempend = c13;
        ender = true;
      }
      else if(endposition == 14){
        tempend = c14;
        ender = true;
      }
      else if(endposition == 15){
        tempend = c15;
        ender = true;
      }
      else if(endposition == 16){
        tempend = c16;
        ender = true;
      }
      else if(endposition == 17){
        tempend = c17;
        ender = true;
      }
      else if(endposition == 18){
        tempend = c18;
        ender = true;
      }
      else if(endposition == 19){
        tempend = c19;
        ender = true;
      }
      else if(endposition == 20){
        tempend = c20;
        ender = true;
      }
      else if(endposition == 21){
        tempend = c21;
        ender = true;
      }
      else if(endposition == 22){
        tempend = c22;
        ender = true;
      }
      else if(endposition == 23){
        tempend = c23;
        ender = true;
      }
      else if(endposition == 24){
        tempend = c24;
        ender = true;
      }
      else if(endposition == 25){
        tempend = c25;
        ender = true;
      }
      else{
        ender = false;
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". The destination position should be a valid position on the board (1-25). Try again." << endl;
        score = score - 10;
        continue;
      }
		// Check that the source position has a knight
      if (tempstart != BlankPosition){
        starterk = true;
      }
      else {
        starterk = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". The source position should have a knight. Try again." << endl;
        score = score - 10;
        continue;
      }
		// Check that the destination position is empty
		  if(tempend == BlankPosition){
        enderk = true;
      }
      else{
        enderk = false;
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". The destination position should be empty. Try again." << endl;
        score = score - 10;
        continue;
      }
      
		// Check that the move is valid - knights can only move in an L-shape
		  if(startposition == 1){
        if(endposition == 8 || endposition == 12){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 2){
        if(endposition == 11 || endposition == 13 || endposition == 9){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 3){
        if(endposition == 12 || endposition == 14 || endposition == 10 || endposition == 6){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 4){
        if(endposition == 15 || endposition == 13 || endposition == 7){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 5){
        if(endposition == 14 || endposition == 8){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 6){
        if(endposition == 17 || endposition == 13 || endposition == 3){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 7){
        if(endposition == 16 || endposition == 18 || endposition == 4 || endposition == 14){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 8){
        if(endposition == 11 || endposition == 15 || endposition == 1 || endposition == 5 || endposition == 19 || endposition == 17){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 9){
        if(endposition == 12 || endposition == 2 || endposition == 20 || endposition == 18){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 10){
        if(endposition == 3 || endposition == 13 || endposition == 19){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 11){
        if(endposition == 2 || endposition == 8 || endposition == 18 || endposition == 22){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 12){
        if(endposition == 1 || endposition == 3 || endposition == 9 || endposition == 23 || endposition == 19 || endposition == 21){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 13){
        if(endposition == 6 || endposition == 16 || endposition == 2 || endposition == 4 || endposition == 10 || endposition == 20 || endposition == 22 || endposition == 22){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 14){
        if(endposition == 23 || endposition == 25 || endposition == 3 || endposition == 5 || endposition == 7 || endposition == 17){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 15){
        if(endposition == 4 || endposition == 8 || endposition == 18 || endposition == 24){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 16){
        if(endposition == 7 || endposition == 13 || endposition == 23){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 17){
        if(endposition == 6 || endposition == 8 || endposition == 14 || endposition == 24){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 18){
        if(endposition == 7 || endposition == 9 || endposition == 15 || endposition == 25 || endposition == 21 || endposition == 11){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 19){
        if(endposition == 10 || endposition == 8 || endposition == 12 || endposition == 22){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 20){
        if(endposition == 13 || endposition == 23 || endposition == 9){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 21){
        if(endposition == 12 || endposition == 18){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 22){
        if(endposition == 11 || endposition == 13 || endposition == 19){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 23){
        if(endposition == 12 || endposition == 14 || endposition == 16 || endposition == 20){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 24){
        if(endposition == 13 || endposition == 15 || endposition == 17){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
      else if(startposition == 25){
        if(endposition == 14 || endposition == 18){
          movement = true;
        }
        else{
          movement = false;
          cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << ". Invalid move. Knights can only move in an L-shape. Try again." << endl;
          score = score - 10;
          continue;
        }
      }
		// Make the move and update the board
      if(movement && starter && starterk && ender && enderk){
        cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): You have chosen to move a knight from position " << startposition << " to position " << endposition << "." << endl;
        moveNumber++;
        score = score - 5;
        //change start position char to end position's
        if(startposition == 1){
        c1 = tempend;
        }
      else if(startposition == 2){
        c2 = tempend;
        }
      else if(startposition == 3){
        c3 = tempend;
        }
      else if(startposition == 4){
        c4 = tempend;
        }
      else if(startposition == 5){
        c5 = tempend;
        }
      else if(startposition == 6){
        c6 = tempend;
        }
      else if(startposition == 7){
        c7 = tempend;
        }
      else if(startposition == 8){
        c8 = tempend;
        }
      else if(startposition == 9){
        c9 = tempend;
        }
      else if(startposition == 10){
        c10 = tempend;
        }
      else if(startposition == 11){
        c11 = tempend;
        }
      else if(startposition == 12){
        c12 = tempend;
        }
      else if(startposition == 13){
        c13 = tempend;
        }
      else if(startposition == 14){
        c14 = tempend;
        }
      else if(startposition == 15){
        c15 = tempend;
        }
      else if(startposition == 16){
        c16 = tempend;
        }
      else if(startposition == 17){
        c17 = tempend;
        }
      else if(startposition == 18){
        c18 = tempend;
        }
      else if(startposition == 19){
        c19 = tempend;
        }
      else if(startposition == 20){
        c20 = tempend;
        }
      else if(startposition == 21){
        c21 = tempend;
        }
      else if(startposition == 22){
        c22 = tempend;
        }
      else if(startposition == 23){
        c23 = tempend;
        }
      else if(startposition == 24){
        c24 = tempend;
        }
      else if(startposition == 25){
        c25 = tempend;
        }
      }
      //change end position char to start position's
      if(endposition == 1){
        c1 = tempstart;
        }
      else if(endposition == 2){
        c2 = tempstart;
        }
      else if(endposition == 3){
        c3 = tempstart;
        }
      else if(endposition == 4){
        c4 = tempstart;
        }
      else if(endposition == 5){
        c5 = tempstart;
        }
      else if(endposition == 6){
        c6 = tempstart;
        }
      else if(endposition == 7){
        c7 = tempstart;
        }
      else if(endposition == 8){
        c8 = tempstart;
        }
      else if(endposition == 9){
        c9 = tempstart;
        }
      else if(endposition == 10){
        c10 = tempstart;
        }
      else if(endposition == 11){
        c11 = tempstart;
        }
      else if(endposition == 12){
        c12 = tempstart;
        }
      else if(endposition == 13){
        c13 = tempstart;
        }
      else if(endposition == 14){
        c14 = tempstart;
        }
      else if(endposition == 15){
        c15 = tempstart;
        }
      else if(endposition == 16){
        c16 = tempstart;
        }
      else if(endposition == 17){
        c17 = tempstart;
        }
      else if(endposition == 18){
        c18 = tempstart;
        }
      else if(endposition == 19){
        c19 = tempstart;
        }
      else if(endposition == 20){
        c20 = tempstart;
        }
      else if(endposition == 21){
        c21 = tempstart;
        }
      else if(endposition == 22){
        c22 = tempstart;
        }
      else if(endposition == 23){
        c23 = tempstart;
        }
      else if(endposition == 24){
        c24 = tempstart;
        }
      else if(endposition == 25){
        c25 = tempstart;
        }
      //win condition
      if(c5 == WhiteKnight){
        victory = true;
        break;
      }
      }
    displayBoard();

     
    }
  
  //} // end loop for game play
   
   // Check for a win
  if(victory){
    cout << "Congratulations, you did it!" << endl;
  }
  if (score == 0){
    cout << "You have run out of moves. Try to do better next time!" << endl;
  }
   cout << "Thank you for playing!" << endl;

	return 0;
}