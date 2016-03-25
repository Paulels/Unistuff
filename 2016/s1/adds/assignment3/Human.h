#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human:public Player{

	public:

		Human();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();


};
#endif //HUMAN_H
