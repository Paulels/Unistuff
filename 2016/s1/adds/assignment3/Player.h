#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#ifndef PLAYER_H
#define PLAYER_H

class Player{

	protected:

		std::string name;
		std::string moves;
		int numberOfWins;

	public:

		Player();
		Player(std::string);

		std::string getName();
		virtual char getMove(int x);
		virtual void incrementNumberOfWin();
		virtual int getNumberOfWins();
		virtual void resetNumberOfWins();

}
#endif //PLAYER_H
