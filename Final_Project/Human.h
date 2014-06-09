/* 
 * File:   Human.h
 * Author: Miguel
 *
 * Created on June 7, 2014, 7:49 PM
 */
#include "Player.h"
#include <string>

#ifndef HUMAN_H
#define	HUMAN_H

class Human : public Player
{
private:
    string name;
public:
    Human(int);
    void setName(string);
    string getName();
    int getLocation();
    bool checkInput(int);
};

#endif	/* HUMAN_H */