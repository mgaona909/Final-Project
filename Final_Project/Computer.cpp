#include "Computer.h"

Computer::Computer(int s) : Player(s)
{
    randomRow = 0;
    randomCol = 0;
}

void Computer::setRandomRow()
{
    randomRow = rand()%10;
}

int Computer::getRandomRow()
{
    return randomRow;
}

void Computer::setRandomCol()
{
    randomCol = rand()%10;
}

int Computer::getRandomCol()
{
    return randomCol;
}
void Computer::setGuessRow()
{
    guessRow = rand()%10;
}

void Computer::setGuessCol()
{
    guessCol = rand()%10;
}