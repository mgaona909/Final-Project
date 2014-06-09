/* 
 * File:   main.cpp
 * Author: Miguel
 *
 * Created on June 2, 2014, 7:13 PM
 */
//Libraries
#include <cstdlib>
#include <iostream>
#include "Human.h"
#include "Computer.h"
using namespace std;

//declare structures
struct shipLocation
{
    shipLocation():row(),col(),hit(){};
    int row;
    int col;
    bool hit;
};

//function prototypes
void welcomeScreen();
char** createBoard(int);
void initializeBoard(char**);
void printBoard(char**);
void destroy(char**,int);


int main(int argc, char** argv) 
{
    //declare variables
    const int SIZE=10;
    char** compBoard;
    char** playerBoard;
    int gr;
    int gc;
    int playerNum = 1;
    string n;
    shipLocation ship1, ship2, ship3, ship4, ship5;
    shipLocation ship1p, ship2p, ship3p, ship4p, ship5p;
    Human player1(5);
    Computer computer(5);
    
    //seed for generating random numbers
    srand(time(0));

    //display welcome screen
    welcomeScreen();
    
    cout<<"Enter your name: ";
    getline(cin, n);
    player1.setName(n);
    
    //set up the computer's board
    compBoard = createBoard(SIZE);
    initializeBoard(compBoard);
    
    //set up the player's board
    playerBoard = createBoard(SIZE);
    initializeBoard(playerBoard); 
    
    //player places their ships
    cout<<endl<<"First let's start by placing your ships."<<endl<<endl; 
    cout<<"Enter the row for Ship 1: ";
    ship1p.row = player1.getLocation();
    cout<<"Enter the column for Ship 1: ";
    ship1p.col = player1.getLocation();
    cout<<"Enter the row for Ship 2: ";
    ship2p.row = player1.getLocation();
    cout<<"Enter the column for Ship 2: ";
    ship2p.col = player1.getLocation();
    cout<<"Enter the row for Ship 3: ";
    ship3p.row = player1.getLocation();
    cout<<"Enter the column for Ship 3: ";
    ship3p.col = player1.getLocation();
    cout<<"Enter the row for Ship 4: ";
    ship4p.row = player1.getLocation();
    cout<<"Enter the column for Ship 4: ";
    ship4p.col = player1.getLocation();
    cout<<"Enter the row for Ship 5: ";
    ship5p.row = player1.getLocation();
    cout<<"Enter the column for Ship 5: ";
    ship5p.col = player1.getLocation();
    
    //computer's ships placed randomly
    computer.setRandomRow();
    ship1.row = computer.getRandomRow();
    computer.setRandomCol();
    ship1.col = computer.getRandomCol();
    computer.setRandomRow();
    ship2.row = computer.getRandomRow();
    computer.setRandomCol();
    ship2.col = computer.getRandomCol();
    computer.setRandomRow();
    ship3.row = computer.getRandomRow();
    computer.setRandomCol();
    ship3.col = computer.getRandomCol();
    computer.setRandomRow();
    ship4.row = computer.getRandomRow();
    computer.setRandomCol();
    ship4.col = computer.getRandomCol();
    computer.setRandomRow();
    ship5.row = computer.getRandomRow();
    computer.setRandomCol();
    ship5.col = computer.getRandomCol();
    
    //display boards
    cout<<endl<<endl<<player1.getName()<<"'s board"<<endl;
    printBoard(playerBoard);
    cout<<endl<<"Computer's board"<<endl;
    printBoard(compBoard);
    

//    //FOR TESTING PURPOSES
//    //if you want to see where the computer's ships are, delete the comment marks around this block.
//    cout<<"Ship 1: "<<ship1.row<<" "<<ship1.col<<endl;
//    cout<<"Ship 2: "<<ship2.row<<" "<<ship2.col<<endl;
//    cout<<"Ship 3: "<<ship3.row<<" "<<ship3.col<<endl;
//    cout<<"Ship 4: "<<ship4.row<<" "<<ship4.col<<endl;
//    cout<<"Ship 5: "<<ship5.row<<" "<<ship5.col<<endl;
    
    //continue taking turns until one player loses all their ships
    while((computer.getShipsLeft()!=0) && (player1.getShipsLeft()!=0))
    {
    //player's turn
      if (playerNum%2==1) 
      {
          playerNum++;
          cout<<endl<<"It's your turn."<<endl;
          cout << "Guess a row: ";
          cin>>gr;
          player1.setGuessRow(gr);
          cout << "Guess a column: ";
          cin >> gc;
          player1.setGuessCol(gc);

          //determine if hit, miss, or out of bounds
          if (player1.getGuessRow()==ship1.row && player1.getGuessCol()==ship1.col)
          {
              if (ship1.hit)
              {
                  cout<<"You already sunk this ship!";
              }
              else
              {
                  cout << "You sunk Ship 1!" << endl;
                  ship1.hit = true;
                  compBoard[gr][gc] = '1';
                  computer.decrementShips();
              }
          }
          else if (player1.getGuessRow()==ship2.row && player1.getGuessCol()==ship2.col)
          {
              if (ship2.hit)
              {
                  cout<<"You already sunk this ship!";
              }
              else
              {
                  cout << "You sunk Ship 2!" << endl;
                  ship2.hit = true;
                  compBoard[gr][gc] = '2';
                  computer.decrementShips();
              }
          }
          else if (player1.getGuessRow()==ship3.row && player1.getGuessCol()==ship3.col)
          {
              if (ship3.hit)
              {
                  cout<<"You already sunk this ship!";
              }
              else
              {
                  cout << "You sunk Ship 3!" << endl;
                  ship3.hit = true;
                  compBoard[gr][gc] = '3';
                  computer.decrementShips();
              }
          }
          else if (player1.getGuessRow()==ship4.row && player1.getGuessCol()==ship4.col)
          {
              if (ship4.hit)
              {
                  cout<<"You already sunk this ship!";
              }
              else
              {
                  cout << "You sunk Ship 4!" << endl;
                  ship4.hit = true;
                  compBoard[gr][gc] = '4';
                  computer.decrementShips();
              }
          }
          else if (player1.getGuessRow()==ship5.row && player1.getGuessCol()==ship5.col)
          {
              if (ship5.hit)
              {
                  cout<<"You already sunk this ship!";
              }
              else
              {
                  cout << "You sunk Ship 5!" << endl;
                  ship5.hit = true;
                  compBoard[gr][gc] = '5';
                  computer.decrementShips();
              }
          }
          else
          {
              if (player1.getGuessRow()<0 || player1.getGuessRow()>9 || player1.getGuessCol()<0 || player1.getGuessCol()>9)
              {
                  cout << "That's not on the board!" << endl;
              }
              else if (compBoard[gr][gc] == 'X')
              {
                  cout << "You already guessed that one!" << endl;
              }
              else
              {
                  cout << "Miss!" << endl;
                  compBoard[gr][gc] = 'X';
              }
          }
      }
      //computer's turn
      else if(playerNum%2 == 0)
      {
          playerNum++;
          cout<<endl<<"Ok, now it's my turn."<<endl;
          computer.setRandomRow();
          gr = computer.getRandomRow();
          computer.setRandomCol();
          gc = computer.getRandomCol();
          cout<<"I guess Row "<<gr<<" Column "<<gc<<endl;
          
          //determine if hit, miss, or out of bounds
          if (computer.getRandomRow()==ship1p.row && computer.getRandomCol()==ship1p.col)
          {
                  cout << "I sunk your Ship 1!" << endl<<endl;
                  ship1p.hit = true;
                  playerBoard[gr][gc] = '1';   
                  player1.decrementShips();
          }
          else if (computer.getRandomRow()==ship2p.row && computer.getRandomCol()==ship2p.col)
          {
                  cout << "I sunk your Ship 2!" << endl<<endl;
                  ship2p.hit = true;
                  playerBoard[gr][gc] = '2';
                  player1.decrementShips();
          }
          else if (computer.getRandomRow()==ship3p.row && computer.getRandomCol()==ship3p.col)
          {
                  cout << "I sunk your Ship 3!" << endl<<endl;
                  ship3p.hit = true;
                  playerBoard[gr][gc] = '3';
                  player1.decrementShips();
          }
          else if (computer.getRandomRow()==ship4p.row && computer.getRandomCol()==ship4p.col)
          {
                  cout << "I sunk your Ship 4!" << endl<<endl;
                  ship4p.hit = true;
                  playerBoard[gr][gc] = '4';
                  player1.decrementShips();
          }
          else if (computer.getRandomRow()==ship5p.row && computer.getRandomCol()==ship5p.col)
          {
                  cout << "I sunk your Ship 5!" << endl<<endl;
                  ship5p.hit = true;
                  playerBoard[gr][gc] = '5';
                  player1.decrementShips();
          }
          else
          {
              cout << "I missed!" << endl << endl;
              playerBoard[gr][gc] = 'X';
          }
          //display the resulting boards after each round
          cout<<endl<<player1.getName()<<"'s board"<<endl;
          printBoard(playerBoard);
          cout<<"Your ships left: "<<player1.getShipsLeft()<<endl;
          cout<<endl<<"Computer's board"<<endl;
          printBoard(compBoard);
          cout<<"Computer's ships left: "<<computer.getShipsLeft()<<endl;
      }
    } 
    //declare the winner
    if (computer.getShipsLeft() == 0)
    {
        cout<<"Congratulations! You sunk all of my ships."<<endl<<"You win!!!!!!"<<endl<<endl;
    }
    else if (player1.getShipsLeft() == 0)
    {
        cout<<"Looks like I won! Better luck Next time!"<<endl<<endl;
    }
    
    //cleanup memory
    destroy(playerBoard, SIZE);
    destroy(compBoard, SIZE);
    
    return 0;
}


void welcomeScreen()
{   
    cout<<"Welcome to Miguel Gaona's Battleship!"<<endl<<endl;
    cout<<"Instructions: First place your ships on your board. My ships have been placed randomly on my board. We take turns guessing until one sinks all five of the other's ships."<<endl;
    cout<<"Your input should be between 0 and 9"<<endl<<endl;
}

char** createBoard(int SIZE)
{
    char **board = new char*[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        board[i] = new char[SIZE];
    }
    return board;
}

void initializeBoard(char** board)
{
    for (int x=0;x<10;x++)
  {
      for (int y=0;y<10;y++)
      {
          board[x][y] = 'O';
      }
  }
}

void printBoard(char** board)
{
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            cout<<"   "<<board[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

void destroy(char** board, int SIZE)
{
    for(int i=0;i<SIZE;i++)
    {
        delete [] board[i];
    }
    delete [] board;
}