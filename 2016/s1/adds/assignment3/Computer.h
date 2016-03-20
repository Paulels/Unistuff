#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer:public Player{

	private:

	char move; 

	public:
	
	Computer(); //constructor for computer

	char getMove(); //only need get move because dumb computer



};
#endif //COMPUTER_H
