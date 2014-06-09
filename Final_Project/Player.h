/* 
 * File:   Player.h
 * Author: Miguel
 *
 * Created on June 7, 2014, 7:48 PM
 */

#ifndef PLAYER_H
#define	PLAYER_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Player
{
private:
    int guessRow;
    int guessCol;
    int shipsLeft;
public:
    Player();
    Player(int);
    void setShipsLeft(int);
    int getShipsLeft();
    void setGuessRow(int);
    int getGuessRow();
    void setGuessCol(int);
    int getGuessCol();
    void decrementShips();
    virtual ~Player();
};

#endif	/* PLAYER_H */