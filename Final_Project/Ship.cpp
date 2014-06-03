#include "Ship.h"

Ship::Ship()
{
    row = 0;
    col = 0;
    sunk = false;
}
void Ship::setRow(int r)
{
    row = r;
}
void Ship::setCol(int c)
{
    col = c;
}
void Ship::setSunk(bool s)
{
    sunk = s;
}
int Ship::getRow() const
{
   return row; 
}
int Ship::getCol() const
{
    return col;
}
bool Ship::getSunk() const
{
    return sunk;
}