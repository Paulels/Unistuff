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

	public:

		Computer();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //COMPUTER_H
