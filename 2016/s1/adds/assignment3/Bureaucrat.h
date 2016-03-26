#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Player.h"

//Inherits all of its states and behaviours from Player class and just redefines behaviours

class Bureaucrat:public Player{

	public:

		Bureaucrat();
		~Bureaucrat();
		char getMove(int x);
		void incrementNumberOfWin();
		int getNumberOfWins();
		void resetNumberOfWins();

};
#endif //BUREAUCRAT_H
