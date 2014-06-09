#include "Player.h"

Player::Player()
{
    shipsLeft = 0;
}

Player::Player(int s)
{
    shipsLeft = s;
}

void Player::setShipsLeft(int s)
{
    shipsLeft = s;
}

int Player::getShipsLeft()
{
    return shipsLeft;
}

void Player::setGuessRow(int r)
{
    guessRow = r;
}

int Player::getGuessRow()
{
    return guessRow;
}

void Player::setGuessCol(int c)
{
    guessCol = c;
}

int Player::getGuessCol()
{
    return guessCol;
}

void Player::decrementShips()
{
    shipsLeft--;
}