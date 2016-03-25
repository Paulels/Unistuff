#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Player.h"
using namespace std;

Player::Player(){

	numberOfWins=0;

}

Player::Player(string newName):name(newName){

	numberOfWins=0;

}

Player::~Player(){

}

string Player::getName(){
	return name;
};
