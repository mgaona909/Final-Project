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

int Player::getGuessRow()
{
    return guessRow;
}

int Player::getGuessCol()
{
    return guessCol;
}

void Player::decrementShips()
{
    shipsLeft--;
}