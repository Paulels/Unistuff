#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Player.h"
using namespace std;

Player::Player(){		//default constructor setting wins to zero 

	numberOfWins=0;

}

Player::Player(string newName):name(newName){		//constructor to set the name of the player and set wins to zero

	numberOfWins=0;

}

Player::~Player(){		//deconstructor

}

string Player::getName(){		//to get the name of the player so we know who won
	return name;
};
