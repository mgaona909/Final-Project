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
protected:
    int guessRow;
    int guessCol;
    int shipsLeft;
public:
    Player();
    Player(int);
    void setShipsLeft(int);
    int getShipsLeft();
    virtual void setGuessRow()=0;
    int getGuessRow();
    virtual void setGuessCol()=0;
    int getGuessCol();
    void decrementShips();
};

#endif	/* PLAYER_H */