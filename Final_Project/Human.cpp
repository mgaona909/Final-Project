#include "Human.h"

Human::Human(int s) : Player(s)
{
    name = "";
}

void Human::setName(string n)
{
    name = n;
}

string Human::getName()
{
    return name;
}

int Human::getLocation()
{
    int num;
    bool invalid;
    
    do{
    cin>>num;
    invalid = Human::checkInput(num);
    }while (invalid);
        
    return num;
}

bool Human::checkInput(int input)
{
    if (input<0 || input>9)
    {
        cout<<"Not a valid input. Try again: ";
        return true;
    }
    else
    {
        return false;
    }
}