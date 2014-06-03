/* 
 * File:   Ship.h
 * Author: Miguel
 *
 * Created on June 3, 2014, 1:30 PM
 */

#include <iostream>
using namespace std;

#ifndef SHIP_H
#define	SHIP_H

class Ship
{
private:
    int row;
    int col;
    bool sunk;
public:
    Ship();
    void setRow(int);
    void setCol(int);
    void setSunk(bool);
    int getRow() const;
    int getCol() const;
    bool getSunk() const;
    
};


#endif	/* SHIP_H */

