/* 
 * File:   Computer.h
 * Author: Miguel
 *
 * Created on June 8, 2014, 3:06 PM
 */

#include "Player.h"
#include <ctime>

#ifndef COMPUTER_H
#define	COMPUTER_H

class Computer : public Player
{
private:
    int randomRow;
    int randomCol;
public:
    Computer(int);
    void setRandomRow();
    int getRandomRow();
    void setRandomCol();
    int getRandomCol();
};

#endif	/* COMPUTER_H */