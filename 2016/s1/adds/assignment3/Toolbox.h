#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Player.h"

class Toolbox:public Player{

	public:

		Toolbox();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //TOOLBOX_H
