#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#ifndef REFEREE_H
#define REFEREE_H
#include "human.h"
#include "computer.h"

class referee{

	private:

		int numberOfGames; //How many games are played

	public:

		referee(); //Constructor for referee

		void setNumberOfGames(char c);
		int getNumberOfGames();
		
		//Plays the game to see who wins
		void playGame(human H,computer C,int y);

};
#endif  //REFEREE_H
